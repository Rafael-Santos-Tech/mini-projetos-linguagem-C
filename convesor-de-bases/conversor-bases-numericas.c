#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numeroDecimal, binario[32], octal[32], opcao, caractere;
    char hexadecimal[32], entrada[65];

    do{
        opcao = -1;
        int converterBinario = 0, converterHexadecimal = 0, converterOctal = 0;

        printf("--- CONVERSOR DE BASES NUMERICAS ---\n[1] Decimal para Binario\n[2] Decimal para Hexadecimal\n[3] Decimal para Octal\n[4] Binario para Decimal\n[5] Hexadecimal para Decimal\n[6] Octal para Decimal\n[7] Decimal para Binario, Hexadecimal e Octal\n[0] Sair\n\nEscolha uma opção: ");



        int leitura = scanf("%d", &opcao);

        if (leitura == EOF){

            printf("\nEntrada encerrada.\n");
            break;
        }

        if (leitura != 1){
            printf("Opção inválida! Digite um número.\n");

            while ((caractere = getchar()) != '\n' && caractere != EOF) {}

            continue;
        }

        while ((caractere = getchar()) != '\n' && caractere != EOF) {}

        switch (opcao){
            case 1: 
                converterBinario = 1;
                break;

            case 2:
                converterHexadecimal = 1;
                break;
            
            case 3:
                converterOctal = 1;
                break;

            case 4:
            case 5:
            case 6:
                break;

            case 7:
                converterBinario = 1;
                converterHexadecimal = 1;
                converterOctal = 1;
                break;

            case 0:
                printf("Programa encerrado.\n");
                return 0;
            
            default: 
                printf("Opção inválida!\n");
                return 1;
        }

        if(opcao == 0){
            break;
        }

        if (opcao == 4){
            printf("Digite um número binario (até 32 Dígitos): ");
            leitura = scanf("%64s", entrada);
            
            if (leitura != 1){
                printf("\nEntrada encerrada.\n");
                break;
            }

            while((caractere = getchar()) != '\n' && caractere != EOF){}

            size_t tamanho = strlen(entrada);

            if(tamanho > 32){
                printf("Erro: O binario deve ter no máximo 32 dígitos.\n");
                continue;
            }

            unsigned long long resultado = 0;
            int valido = 1;

            for(size_t i = 0; i < tamanho; i++){
                if(entrada[i] != '0' && entrada[i] != '1'){
                    valido = 0;
                    break;
                }
            resultado = resultado * 2 + (entrada[i] - '0');

            }

            if (!valido){
                printf("Erro: Um número binario aceita apenas 0 a 1.\n");
            } else {
                printf("O número %s em decimal é: %llu\n", entrada, resultado);
            }

            continue;
        }

        if (opcao == 5){
            printf("DIgite um número hexadecimal (até 8 dígitos): ");
            leitura = scanf("%64s", entrada);

            if(leitura != 1){
                printf("\nEntrada encerrada.\n");
                break;
            }

            while((caractere = getchar()) != '\n' && caractere != EOF) {}

            size_t tamanho = strlen(entrada);

            if (tamanho > 8){
                printf("Erro: O hexadecimal deve ter no máximo 8 dígitos.\n");
                continue;
            }

            unsigned long long resultado = 0;
            int valido = 1;

            for (size_t i = 0; i < tamanho; i++){
                int digito;
                char c = entrada[i];
            
                if (c >= '0' && c <= '9'){
                    digito = c - '0';
                } else if (c >= 'A' && c <= 'F'){
                    digito = c - 'A' + 10;
                } else if (c >= 'a' && c <= 'f'){
                    digito = c -'a' + 10;
                } else {
                    valido = 0;
                    break;
                }

                resultado = resultado * 16 + digito;
            }

            if (!valido){
                printf("Erro: Use apenas 0 a 9 e A a F.\n");
            } else {
                printf("O número %s em decimal é: %llu\n", entrada, resultado);
            }

            continue;
        }

        if (opcao == 6) {
            printf("Digite um número octal (até 11 dígitos): ");
            leitura = scanf("%64s", entrada);

            if (leitura != 1) {
                printf("\nEntrada encerrada.\n");
                break;
            }

            while ((caractere = getchar()) != '\n' && caractere != EOF) {}

            size_t tamanho = strlen(entrada);

            if (tamanho > 11) {
                printf("Erro: O octal deve ter no máximo 11 digitos.\n");
                continue;
            }

            unsigned long long resultado = 0;
            int valido = 1;

            for (size_t i = 0; i < tamanho; i++) {

                if (entrada[i] < '0' || entrada[i] > '7') {
                    valido = 0;
                    break;
                }

                resultado = resultado * 8 + (entrada[i] - '0');
            }

            if (!valido) {
                printf("Erro: Um número octal aceita apenas dígitos de 0 a 7.\n");
            } else {
                printf("O número %s em decimal é: %llu\n", entrada, resultado);
            }

            continue;
        }


        printf("\nDigite um número inteiro não negativo: ");

        leitura = scanf("%d", &numeroDecimal);


        if (leitura == EOF){
            printf("\nEntrada encerrada.\n");
            break;
        }

        if (leitura != 1){
            printf("Erro: Ditgite um número inteiro.\n");

            while ((caractere = getchar()) != '\n' && caractere != EOF) {}

            continue;
        }

        while ((caractere = getchar()) != '\n' && caractere != EOF) {}

        if(numeroDecimal < 0){
            printf("Erro: Número negativo não permitido.\n");
            continue;
        }

        if(converterBinario == 1){

            if (numeroDecimal == 0){
                printf("Resultado em binario: 0\n");

            } else {
                int i = 0;
                int temp = numeroDecimal;

                while (temp > 0){
                    binario[i] = temp % 2;
                    temp /= 2;
                    i++;
                }

                printf("O número %d em binario é: ", numeroDecimal);

                for (int j = i - 1; j >= 0; j--){
                    printf("%d", binario[j]);
                }

                printf("\n");
            }
        }

        if(converterHexadecimal == 1){

            if(numeroDecimal == 0){
                printf("Resultado em hexadecimal é: 0\n");
            } else {
                    int i = 0;
                    int temporario = numeroDecimal; 

                    while (temporario > 0){
                        int resto = temporario % 16;

                        if (resto < 10){ 
                            hexadecimal[i] = resto + '0';
                        } else {
                            hexadecimal[i] = (resto - 10) + 'A';
                        }

                        temporario = temporario / 16;
                        i++;
                    }

                    printf("O número %d em hexadecimal é: ", numeroDecimal);

                    for (int j = i - 1; j >= 0; j--){
                        printf("%c", hexadecimal[j]);
                    }
                    
                    printf("\n");
            }
        }

        if (converterOctal) {

            if (numeroDecimal == 0) {
                printf("O numero 0 em octal e: 0\n");
            } else {
                int i = 0;
                int temp = numeroDecimal;

                while (temp > 0) {
                    octal[i] = temp % 8;
                    temp /= 8;
                    i++;
                }

                printf("O numero %d em octal é: ", numeroDecimal);

                for (int j = i - 1; j >= 0; j--) {
                    printf("%d", octal[j]);
                }

                printf("\n");
            }
        }
        
    } while (opcao != 0);

    return 0;
}

