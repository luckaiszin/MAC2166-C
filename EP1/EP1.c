/***************************************************************/
/**                                                           **/
/**   Lucas Pates Rodrigues                     11545304      **/
/**   Exercício-Programa 01                                   **/
/**   Professor: Yoshiharu Kohayakawa                         **/
/**   Turma: 03                                               **/
/**                                                           **/
/***************************************************************/

#include <stdio.h>

int main()
{

    int semente, senha;
    int quantidade;
    int c;
    int t;

    int a1, a2, a3, a4, a5;

    int b1, b2, b3, b4, b5;

    printf("Bem vinda(o) ao Numle\n");

    printf("Digite a semente para sortear a senha (0 a 10000): ");

    scanf("%d", &semente);

    semente = semente % 134456;

    senha = ((8121 * semente + 28411) % 134456) % 100000;

    printf("Quantidade de tentativas(1 a 10): ");
    scanf("%d", &quantidade);

    for (c = 0; c < quantidade; c++)
    {

        a1 = (senha / 10000);
        a2 = ((senha % 10000) / 1000);
        a3 = ((senha % 1000) / 100);
        a4 = ((senha % 100) / 10);
        a5 = (senha % 10);

        printf("Digite a tentativa (0 a 99999): ");
        scanf("%d", &t);
        b1 = t / 10000;
        b2 = (t % 10000) / 1000;
        b3 = (t % 1000) / 100;
        b4 = (t % 100) / 10;
        b5 = t % 10;

        if (t == senha)
        {
            printf("Voce acertou! A senha eh de fato %d", senha);
            return 0;
        }

        if (b1 == a1)
        {
            a1 = -1;
            b1 = -1;
        }

        if (b2 == a2)
        {
            a2 = -2;
            b2 = -2;
        }

        if (b3 == a3)
        {
            a3 = -3;
            b3 = -3;
        }

        if (b4 == a4)
        {
            a4 = -4;
            b4 = -4;
        }

        if (b5 == a5)
        {
            a5 = -5;
            b5 = -5;
        }

        if (a1 == b1)
        {
            printf("Primeiro digito certo!\n");
            a1 = -1;
            b1 = -10;
        }
        if (b1 == a2)
        {
            printf("Primeiro digito em posicao incorreta.\n");
            a2 = -11;
        }
        else if (b1 == a3)
        {
            printf("Primeiro digito em posicao incorreta.\n");
            a3 = -11;
        }
        else if (b1 == a4)
        {
            printf("Primeiro digito em posicao incorreta.\n");
            a4 = -11;
        }
        else if (b1 == a5)
        {
            printf("Primeiro digito em posicao incorreta.\n");
            a5 = -11;
        }

        if (b2 == a2)
        {
            printf("Segundo digito certo!\n");
            a2 = -2;
            b2 = -20;
        }
        if (b2 == a1)
        {
            printf("Segundo digito em posicao incorreta.\n");
            a1 = -21;
        }
        else if (b2 == a3)
        {
            printf("Segundo digito em posicao incorreta.\n");
            a3 = -21;
        }
        else if (b2 == a4)
        {
            printf("Segundo digito em posicao incorreta.\n");
            a4 = -21;
        }
        else if (b2 == a5)
        {
            printf("Segundo digito em posicao incorreta.\n");
            a5 = -21;
        }

        if (b3 == a3)
        {
            printf("Terceiro digito certo!\n");
            a3 = -3;
            b3 = -30;
        }
        if (b3 == a1)
        {
            printf("Terceiro digito em posicao incorreta.\n");
            a1 = -31;
        }
        else if (b3 == a2)
        {
            printf("Terceiro digito em posicao incorreta.\n");
            a2 = -31;
        }

        else if (b3 == a4)
        {
            printf("Terceiro digito em posicao incorreta.\n");
            a4 = -31;
        }
        else if (b3 == a5)
        {
            printf("Terceiro digito em posicao incorreta.\n");
            a5 = -31;
        }

        if (b4 == a4)
        {
            printf("Quarto digito certo!\n");
            a4 = -4;
            b4 = -40;
        }
        if (b4 == a1)
        {
            printf("Quarto digito em posicao incorreta.\n");
            a1 = -41;
        }
        else if (b4 == a2)
        {
            printf("Quarto digito em posicao incorreta.\n");
            a2 = -41;
        }

        else if (b4 == a3)
        {
            printf("Quarto digito em posicao incorreta.\n");
            a3 = -41;
        }
        else if (b4 == a5)
        {
            printf("Quarto digito em posicao incorreta.\n");
            a5 = -41;
        }

        if (b5 == a5)
        {
            printf("Quinto digito certo!\n");
            a5 = -5;
            b5 = -50;
        }
        if (b5 == a1)
        {
            printf("Quinto digito em posicao incorreta.\n");
            a1 = -51;
        }
        else if (b5 == a2)
        {
            printf("Quinto digito em posicao incorreta.\n");
            a2 = -51;
        }

        else if (b5 == a3)
        {
            printf("Quinto digito em posicao incorreta.\n");
            a3 = -51;
        }

        else if (b5 == a4)
        {
            printf("Quinto digito em posicao incorreta.\n");
            a4 = -51;
        }
    }

    printf("Voce perdeu! A senha era %d", senha);

    return 0;
}