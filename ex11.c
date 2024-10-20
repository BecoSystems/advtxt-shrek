/*
 * Instrucoes para compilar:
 *   $gcc exN.c -o exN.x -Wall
 *        -Wextra -ansi -pedantic-errors -g -O0 -DDEBUG=1 -DVERSION="0.1.160612.142044"
 *   ou preferencialmente inclua um makefile e use:
 *   $make
 *
 * Modelo de indentacao:
 * Estilo: --style=allman ou -A1
 *
 * Opcoes: -A1 -s4 -k3 -xj -SCNeUpv
 *
 *  * No vi use:
 *      :% !astyle -A1 -s4 -k3 -xj -SCNeUpv
 *  * No linux:
 *      $astlye -A1 -s4 -k3 -xj -SCNeUpv exN.c
 */

/* ------------------------------------------------------------------------- */
/* includes */

#include <stdio.h>
#include<stdlib.h>

void jogo();
void jogo2();
void menu();

int main()
{
    char select;
//Primeiro  loop.
//
    do
    {
        printf("\n\n|SHREK|\n\n|THE ADVENTURE|\n\nSelecione 1 para abrir o menu e 2 para fechar :");
        scanf(" %c", &select);
        switch(select)
        {
            case '1':
                menu();
                break;
            case '2':
                printf("Encerrando ...");
                break;
            default :
                while(select != '1' && select != '2')
                {
                    printf("Opção inválida, digite 1 ou 2 :");
                    scanf(" %c", &select);
                }
                break;
        }
    }
    while(select != '2');

}
//Função do menu.
//
void menu()
{
    char select;
    do
    {
        printf("\n\n|MENU|\n\nSelecione (1) para jogar\nSelecione (2) para fechar o menu\nSelecione (3) para informações relativas aos desenvolvedores\nOpção selecionada : ");
        scanf(" %c", &select);
        switch(select)
        {
            case '1':
                jogo();
                break;
            case '2':
                printf("Fechando menu ...");
                break;
            case '3':
                printf("\n|Devs:                      |\n|Gilmar Lopes - 18 anos     |\n|Vinicius Medeiros - 19 anos|\n|Luis Guilherme - 18 anos   |");
                break;
            default :
                while(select != '1' && select != '2' && select != '3')
                {
                    printf("Opção inválida, digite 1, 2 ou 3 :");
                    scanf(" %c", &select);
                }
                break;
        }
    }
    while(select != '2');
    return;
}
void jogo()
{
    char select;
    printf("\n\nVocê, Shrek, foi traído e teve que voltar para o pântano\nDe sua casa você ouve um barulho estranho e decide entrar\nEm sua frente há uma lanterna(1) e uma faca(2)\nDecida qual dos dois tomar :");
    //Escolha primeira,objeto.
    scanf(" %c", &select);
    switch(select)
    {
        case '1':
            printf("\nA casa está escura, você prontamente liga sua lanterna e encontra seu querido amigo, burro.\n");
            jogo2();
            break;
        case '2':
            printf("\nA casa está escura, você ouve um barulho de algo se aproximando e ataca com sua faca\nDescobrindo tarde demais que era seu amigo, burro!\nVocê entra em desespero e infarta alí mesmo\n\n|DERROTA|\n\n");
            break;
        default:
            while(select != '1' && select != '2')
            {
                printf("Opção inválida, digite 1 ou 2 :");
                scanf(" %c", &select);
                if(select != '1' || select != '2')
                    jogo();
            }
            break;
    }
    return;
}

void jogo2()
{
    char select;
    printf("Você vai em direção ao burro, ele lhe sugere sair para passear, você começa a pensar se vai(1) ou não(2)\nOpção desejada: ");
    scanf(" %c", &select);
    switch(select)
    {
        case '1':
            printf("\nNo meio do seu lindo passeio, um grupo de caçadores os veem\nVocê se prepara, mas leva uma bofetada da Fiona que estava entre eles, irritada com o divórcio\nVocê é morto\n\n|DERROTA|\n\n");
            break;
        case '2' :
            printf("\nVocê diz não, então os dois decidem relaxar e conversar em casa\nDerrepente uma ogra encantada chamada Lorena bate na porta\nencontra você e se apaixona\nvocês se casam\n\n|VITÓRIA|\n\nParabéns você ganhou\n");
            break;
        default:
            while(select != '1' && select != '2')
            {
                printf("Opção inválida, digite 1 ou 2 :");
                scanf(" %c", &select);
                if(select != '1' || select != '2')
                {
                    jogo2();
                }
            }
            break;
    }
return;
}
