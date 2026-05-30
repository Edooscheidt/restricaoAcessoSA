#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SDA 10
#define RST 9
#define TRAVA 7

MFRC522 LeitorRFID(SDA, RST);
LiquidCrystal_I2C lcd(0x27, 16, 2);

bool Cadastrado = false;
String IDtag = "";

String TagsCadastradas[] = {
  "a1b2c3d4",
  "11223344"
};

bool funcionarioAtivo = true;
bool temPermissao = true;

void setup() {

  Serial.begin(9600);
  SPI.begin();
  LeitorRFID.PCD_Init();

  pinMode(TRAVA, OUTPUT);
  digitalWrite(TRAVA, LOW);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Aproxime a tag");

  Serial.println("Sistema iniciado");
}

void loop() {
  Leitura();
}


void Leitura() {


  lcd.setCursor(0, 0);
  lcd.print("Aproxime a tag ");

  if (!LeitorRFID.PICC_IsNewCardPresent()) {
    return;
  }

  if (!LeitorRFID.PICC_ReadCardSerial()) {
    return;
  }

  verificarCadastro();

  LeitorRFID.PICC_HaltA();
  LeitorRFID.PCD_StopCrypto1();
}


void verificarCadastro() {

  verificarTag();

  if (!Cadastrado) {
    Serial.println("Tag invalida");

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Acesso negado");
    lcd.setCursor(0, 1);
    lcd.print("Tag invalida");

    delay(2000);
    return;
  }

  if (!funcionarioAtivo) {
    lcd.clear();
    lcd.print("Funcionario OFF");
    delay(2000);
    return;
  }

  if (!temPermissao) {
    lcd.clear();
    lcd.print("Sem permissao");
    delay(2000);
    return;
  }

  liberarAcesso();
}


void verificarTag() {

  Cadastrado = false;
  IDtag = "";

  for (byte i = 0; i < LeitorRFID.uid.size; i++) {

    if (LeitorRFID.uid.uidByte[i] < 0x10)
      IDtag += "0";

    IDtag += String(LeitorRFID.uid.uidByte[i], HEX);
  }

  IDtag.toLowerCase();

  Serial.print("ID: ");
  Serial.println(IDtag);

  for (int i = 0; i < (sizeof(TagsCadastradas) / sizeof(String)); i++) {
    if (IDtag == TagsCadastradas[i]) {
      Cadastrado = true;
      break;
    }
  }
}

void liberarAcesso() {

  Serial.println("Acesso liberado");

  lcd.clear();
  lcd.print("Acesso liberado");

  digitalWrite(TRAVA, HIGH);
  delay(3000);
  digitalWrite(TRAVA, LOW);

  lcd.clear();
  lcd.print("Entrada OK");

  delay(1500);

  Serial.println("Entrada registrada");
}