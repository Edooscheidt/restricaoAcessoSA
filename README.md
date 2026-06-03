# Block&Go — Desenvolvimento de Softwares de Segurança

<p align="center">
  <img src="https://img.shields.io/badge/Status-Em%20Desenvolvimento-orange?style=for-the-badge" alt="Status">
  <img src="https://img.shields.io/badge/Segmento-Segurança%20Corporativa-red?style=for-the-badge" alt="Segmento">
  <img src="https://img.shields.io/badge/Hardware-Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white" alt="Arduino">
</p>

## 🏢 Sobre a Block&Go
A **Block&Go** é uma empresa especializada no desenvolvimento de softwares de segurança de alta confiabilidade. Nosso foco é criar soluções inteligentes de automação e controle que protegem ambientes corporativos, mitigam riscos e garantem a integridade operacional de nossos clientes.

📖 **Nota de Aplicação:** Este projeto foi projetado especificamente para resolver os problemas de vulnerabilidade e riscos do Laboratório de Produção. Para entender as regras de negócio aplicadas e o diagnóstico completo do ambiente, acesse o nosso [Detalhamento do Caso de Uso e Solução 📄](docs/PROJETO.md).

---

## 🔒 O Projeto: Sistema de Restrição de Acesso (Fluxograma SA)
Esta solução consiste em um ecossistema de controle de acesso físico baseado em hardware e software que utiliza a tecnologia **RFID** para validação de credenciais em tempo real. O software atua na tripla checagem do colaborador (cadastro, status ativo e nível de privilégio), garantindo que apenas o pessoal devido entre no recinto monitorado.

---

## 🚀 Arquitetura e Recursos do Projeto

Para facilitar a apresentação da nossa solução, centralizamos a lógica do sistema, o mapeamento de processos e os códigos-fonte desenvolvidos nos links oficiais abaixo:

| Recurso | Descrição Técnica | Link de Acesso |
| :--- | :--- | :--- |
| **Módulo de Cadastro** | Algoritmo em C++ responsável pelo registro inicial e vinculação de novas tags RFID no sistema. | [Acessar Sketch Arduino 🌐](https://app.arduino.cc/sketches/767df872-1389-4493-901e-5469cd0f5457?view-mode=preview) |
| **Módulo de Leitura e Validação** | Software de ponta que executa a leitura da tag, valida o nível de acesso do funcionário e comanda a trava física. | [Acessar Sketch Arduino 🌐](https://app.arduino.cc/sketches/dc2580f5-9ce5-4b27-9bc4-3ee6122927cb?view-mode=preview) |
| **Fluxograma SA
