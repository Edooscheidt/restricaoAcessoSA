# Block&Go — Desenvolvimento de Softwares de Segurança

<p align="center">
  <img src="https://img.shields.io/badge/Status-Em%20Desenvolvimento-orange?style=for-the-badge" alt="Status">
  <img src="https://img.shields.io/badge/Segmento-Segurança%20Corporativa-red?style=for-the-badge" alt="Segmento">
  <img src="https://img.shields.io/badge/Hardware-Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white" alt="Arduino">
</p>

## 🏢 Sobre a Block&Go
A **Block&Go** é uma empresa especializada no desenvolvimento de softwares de segurança de alta confiabilidade. Nosso foco é criar soluções inteligentes de automação e controle que protegem ambientes corporativos, mitigam riscos e garantem a integridade operacional de nossos clientes.

## 🔒 Projeto: Sistema de Restrição de Acesso (Fluxograma SA)
Esta solução foi desenvolvida sob medida para gerenciar e restringir o acesso físico a ambientes corporativos críticos (como salas de servidores, tesourarias ou diretorias). 

O sistema opera através de identificação por **RFID**, onde cada funcionário possui uma credencial única. Ao aproximar a tag do leitor, o software valida o nível de privilégio do usuário em tempo real:
* **Funcionários autorizados:** Têm a entrada liberada imediatamente.
* **Funcionários sem permissão:** Têm o acesso estritamente bloqueado, garantindo que apenas o pessoal devido entre no recinto.

---

## 🚀 Arquitetura e Recursos do Projeto

Para a apresentação da nossa solução, centralizamos a lógica do sistema, o mapeamento de processos e os códigos-fonte nos links oficiais abaixo:

| Recurso | Descrição Técnica | Link de Acesso |
| :--- | :--- | :--- |
| **Módulo de Cadastro** | Algoritmo em C++ responsável pelo registro inicial e vinculação de novas tags RFID no sistema. | [Acessar Sketch Arduino 🌐](https://app.arduino.cc/sketches/767df872-1389-4493-901e-5469cd0f5457?view-mode=preview) |
| **Módulo de Leitura e Validação** | Software de ponta que executa a leitura da tag, valida o nível de acesso do funcionário e comanda a trava física. | [Acessar Simulador Wokwi 🌐](https://wokwi.com/projects/465674555795597313) |
| **Fluxograma SA (Lógica do Sistema)** | Modelagem visual completa das regras de negócio, tomadas de decisão e restrições do fluxo. | [Visualizar no Figma 🎨](https://www.figma.com/board/mgICk6guB4dBxv1UPrZWvS/Code-Flowchart--Community-?node-id=6-9&t=vBzgOY70qMwmKwc2-1) |

### 📊 Mapeamento do Fluxo de Processos

Abaixo está a representação visual da inteligência de segurança desenvolvida pela nossa equipe corporativa, detalhando as tomadas de decisão desde a aproximação da tag RFID até o registro das ações de entrada e saída:

<p align="center">
  <img src="fluxograma.png" alt="Fluxograma do Sistema de Restrição de Acesso Block&Go" width="450px">
</p>

---

## 🛠️ Arquitetura de Hardware e Componentes

Para garantir a confiabilidade e a estabilidade da validação de acesso em tempo real, a infraestrutura física do protótipo foi projetada utilizando os seguintes componentes:

* **Microcontrolador Central:** Arduino Uno R3 (responsável pelo processamento lógico, comunicação com os periféricos e execução das regras de restrição).
* **Módulo de Identificação:** Leitor RFID-RC522 (operando na frequência de 13.56 MHz para leitura das tags e cartões dos funcionários).

---

## 💻 Pré-requisitos e Como Executar

Para realizar testes ou replicar o ambiente de desenvolvimento da solução Block&Go, siga os passos abaixo:

1. Instale a **Arduino IDE** (versão 2.0 ou superior) ou utilize o simulador online do Wokwi pelo link na tabela de recursos.
2. Certifique-se de ter instalada a biblioteca necessária para o leitor de cartões caso use a IDE física: `MFRC522`.
3. Conecte o **Arduino Uno** à porta USB do seu computador.
4. Abra os códigos através dos links disponibilizados na seção de recursos e faça o upload para a placa.

---

## 👥 Integrantes do Grupo (Equipe Block&Go)

* Eduardo Scheidt
* Matheus Pires
* Müller Gomes
* Patrick Ruchinski
