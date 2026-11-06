# ❌⭕ Jogo da Velha

Jogo da Velha desenvolvido em **linguagem C** para **dois jogadores locais**, executado diretamente no terminal.

## Funcionalidades

- Tabuleiro 3 × 3 com posições numeradas de 1 a 9.
- Turnos alternados entre os símbolos **X** e **O**.
- Validação de posições inválidas e casas ocupadas.
- Verificação de vitória por linha, coluna ou diagonal e detecção de empate.

## Como executar

Abra um terminal nesta pasta e execute os comandos abaixo (Windows com GCC instalado):

```powershell
gcc jogo-classico.c -o jogo-classico.exe
.\jogo-classico.exe
```

## Como jogar

Os jogadores escolhem uma posição de **1 a 9** para marcar o tabuleiro:

```text
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

O objetivo é completar uma linha, coluna ou diagonal com três símbolos iguais. Caso o tabuleiro seja preenchido sem vencedor, o jogo termina em empate.

**Conceitos praticados:** matrizes, laços de repetição, condicionais, alternância de turnos e validação de entradas.
