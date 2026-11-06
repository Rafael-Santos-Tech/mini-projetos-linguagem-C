# 🔢 Conversor de Bases Numéricas

Projeto em **linguagem C** que permite converter números entre as bases **decimal, binária, hexadecimal e octal** diretamente pelo terminal.

## Funcionalidades

- Decimal → binário, hexadecimal ou octal.
- Binário, hexadecimal ou octal → decimal.
- Conversão de decimal para as três bases em uma única opção.
- Menu interativo e validação de entradas inválidas.

## Como executar

Abra um terminal nesta pasta e execute os comandos abaixo (Windows com GCC instalado):

```powershell
gcc conversor-bases-numericas.c -o conversor-bases-numericas.exe
.\conversor-bases-numericas.exe
```

## Exemplo de uso

Ao escolher a **opção 7** e informar o número **26**, o programa exibe:

```text
O número 26 em binario é: 11010
O número 26 em hexadecimal é: 1A
O numero 26 em octal é: 32
```

**Conceitos praticados:** operações matemáticas, estruturas de repetição, condições, vetores e validação de dados.
