# 💻 Mini Projetos em Linguagem C

Repositório com pequenos projetos desenvolvidos em **linguagem C** para praticar lógica de programação e fundamentos da linguagem. Todos os programas são executados no terminal e foram construídos com foco no aprendizado e na evolução prática.

## 📂 Projetos

| Projeto | Descrição | Acessar |
| --- | --- | --- |
| **Conversor de Bases Numéricas** | Converte valores entre os sistemas decimal, binário, hexadecimal e octal. | [Ver projeto](./convesor-de-bases/README.md) |
| **Jogo da Velha** | Jogo de dois participantes no terminal, com validação das jogadas e verificação de vitória ou empate. | [Ver projeto](./jogo-da-velha/README.md) |

### 🔢 Conversor de Bases Numéricas

O programa oferece um menu com sete opções de conversão: de decimal para binário, hexadecimal e octal; das três bases para decimal; e uma opção para converter um número decimal para as três bases de uma só vez. Também realiza validações de entrada.

**Código:** [`conversor-bases-numericas.c`](./convesor-de-bases/conversor-bases-numericas.c)

### ❌⭕ Jogo da Velha

Jogo clássico para dois jogadores locais. O tabuleiro é uma matriz 3 × 3, as posições são escolhidas de 1 a 9 e o programa confere jogadas inválidas, casas ocupadas e condições de encerramento da partida.

**Código:** [`jogo-classico.c`](./jogo-da-velha/jogo-classico.c)

## 🛠️ Tecnologias e conceitos praticados

- **Linguagem C** e compilador **GCC**.
- Estruturas condicionais (`if`, `else`, `switch`) e de repetição (`for`, `while`, `do...while`).
- Vetores, matrizes, operações aritméticas e manipulação de caracteres.
- Entrada de dados, validações e organização de menus no terminal.
- **Visual Studio Code** como ambiente de desenvolvimento (opcional).

## 🗂️ Estrutura do repositório

```text
mini-projetos-linguagem-C/
├── .vscode/
├── convesor-de-bases/
│   ├── conversor-bases-numericas.c
│   └── README.md
├── jogo-da-velha/
│   ├── jogo-classico.c
│   └── README.md
├── .gitignore
└── README.md
```

> A pasta `convesor-de-bases` mantém o nome atual do projeto para que os caminhos e links funcionem corretamente.

## ▶️ Como executar

É necessário ter o **GCC** instalado e acessível pelo terminal. No VS Code, abra a pasta do repositório e utilize **Terminal → Novo Terminal**.

**Conversor de Bases Numéricas (PowerShell / Windows):**

```powershell
gcc .\convesor-de-bases\conversor-bases-numericas.c -o .\convesor-de-bases\conversor-bases-numericas.exe
.\convesor-de-bases\conversor-bases-numericas.exe
```

**Jogo da Velha (PowerShell / Windows):**

```powershell
gcc .\jogo-da-velha\jogo-classico.c -o .\jogo-da-velha\jogo-classico.exe
.\jogo-da-velha\jogo-classico.exe
```

Os comandos devem ser executados **na pasta principal do repositório**. Para instruções específicas, consulte o README de cada projeto.

## 🎯 Objetivo

Registrar minha evolução em programação, colocando em prática conceitos estudados por meio de projetos simples, funcionais e organizados. Novos projetos poderão ser adicionados conforme o aprendizado avançar.

## 👨‍💻 Autor

Desenvolvido por **Rafael Santos**.

[Meu perfil no GitHub](https://github.com/rafael-santos-tech)
