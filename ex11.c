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
do{
        printf("\n\n|SHREK|\n\n|THE ADVENTURE|\n\nSelecione 1 para abrir o menu e 2 para fechar :");
        scanf(" %c",&select);
    switch(select)
    {
        case '1':
            menu();
            break;
        case '2':
            printf("Encerrando ...");
            break;
        default :
            while(select!='1'&&select!='2')
            {
                printf("Opção inválida, digite 1 ou 2 :");
                scanf(" %c",&select);
            }
            break;
    }
    }while(select !='2');

}
//Função do menu.
//
void menu()
{
    char select;
    do{
    printf("\n\n|MENU|\n\nSelecione (1) para jogar\nSelecione (2) para fechar o menu\nSelecione (3) para informações relativas aos desenvolvedores\nOpção selecionada : ");
    scanf(" %c",&select);
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
            while (select!='1'&&select!='2'&&select!='3')
            {
                printf("Opção inválida, digite 1, 2 ou 3 :");
                scanf(" %c",&select);
            }
            break;
    }
    }while(select!='2');
    return;
}
void jogo()
{
    char select;
    printf("\n\nVocê, Shrek, foi traído e teve que voltar para o pântano\nDe sua casa você ouve um barulho estranho e decide entrar\nEm sua frente há uma lanterna(1) e uma faca(2)\nDecida qual dos dois tomar :");
    //Escolha primeira,objeto.
    scanf(" %c",&select);
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
            while(select!='1'&&select!='2')
            {
                printf("Opção inválida, digite 1 ou 2 :");
                scanf(" %c",&select);
            if(select!='1'||select!='2')
            {
                jogo();
            }
            }
            break;
            }
    return;
}
}

/* Write your functions here... */

/* ------------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief Prints help information and exit
 * @details Prints help information (usually called by opt -h)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160908.182830
 * @date 2016-09-08
 *
 */

/* ------------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief Prints version and copyright information and exit
 * @details Prints version and copyright information (usually called by opt -V)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160908.182830
 * @date 2016-09-08
 *
 */
/**
 * @ingroup GroupUnique
 * @brief This function initializes some operations before start
 * @details Details to be written in
 * multiple lines
 *
 * @pre You need to call foo() before calling this function
 *
 * @param[in] i Input parameter that does bla
 * @param[out] o Parameter that outputs ble
 * @param[in,out] z The @a z variable is used as input and output
 *
 * @retval 0 Returned when bli
 * @retval 1 Error code: function returned blo
 *
 * @par Example
 * @code
 *    if(x == funcexample(i, o, z))
 *       printf("And that is it\n");
 * @endcode
 *
 * @return Void
 *
 * @warning Be carefull with blu
 * @todo Need to implement it. Its empty now. This doxygen tags are overwhelming.
 * Mandatory tags are: ingroup, brief, details, param, return, author and date.
 * The others are optional.
 *
 * @deprecated This function will be deactivated in version +11
 * @see help()
 * @see copyr()
 * @bug There is a bug with x greater than y
 * @note You can read more about it at <<a href="http://www.beco.cc">www.beco.cc</a>>
 *
 * @author Ruben Carlo Benante
 * @version 20160908.182830
 * @date 2016-09-08
 * @copyright Use this tag only if not the same as the whole file
 *

/* ------------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline    */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20180716.101436   */

