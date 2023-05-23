#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool proximo = true;
    bool continuar = false;
    float total = 0;
    float pago = 0;
    printf("==============================\n");
    printf("VALOR TOTAL DA COMPRA\n");
    printf("==============================\n");
    printf("Valor: ");
    scanf("%f", &total);

    while ( total < 0) {
        printf("\n\n==============================\n");
        printf("Digite um valor valido\n");
        printf("==============================\n");
        scanf("%f", &total);
    }
    printf("\n");

    printf("==============================\n");
    printf("VALOR PAGO PELO CLIENTE\n");
    printf("==============================\n");
    printf("Valor: ");
    scanf("%f", &pago);

     while ( pago < 0) {
        printf("\n\n==============================\n");
        printf("Digite um valor valido\n");
        printf("==============================\n");
        scanf("%f", &pago);
    }
    printf("\n");

    float troco = pago - total;
    float troco_soma = 0;

    //reais:
    int c100r = 0;
    int c50r = 0;
    int c20r = 0;
    int c10r = 0;
    int c5r = 0;
    int c2r = 0;
    int c1r = 0;

    //Centavos:
    int c050c = 0;
    int c025c = 0;
    int c010c = 0;
    int c005c = 0;
    int c001c = 0;

    if ( troco == 0 ){
        printf("==============================\n");
        printf("Nao necessita de troco\n");
        printf("==============================");
        return 0;
    } else if ( troco < 0 ){
        printf("\n\n\n==============================\n");
        printf("Pagamento Incompleto\nObs: O valor PAGO foi menor que o VALOR TOTAL!!!\n");
        printf("==============================");
        return 0;
    }

    //Troco com notas de 100 reais:
    while ( proximo == true ){
        if( troco_soma + 100 <= troco ){
        troco_soma += 100;
        c100r++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com notas de 50 reais:
    while ( proximo == true ){
        if( troco_soma + 50 <= troco ){
        troco_soma += 50;
        c50r++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com notas de 20 reais:
    while ( proximo == true ){
        if( troco_soma + 20 <= troco ){
        troco_soma += 20;
        c20r++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com notas de 10 reais:
    while ( proximo == true ){
        if( troco_soma + 10 <= troco ){
        troco_soma += 10;
        c10r++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com notas de 5 reais:
    while ( proximo == true ){
        if( troco_soma + 5 <= troco ){
        troco_soma += 5;
        c5r++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com notas de 2 reais:
    while ( proximo == true ){
        if( troco_soma + 2 <= troco ){
        troco_soma += 2;
        c2r++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com notas de 1 reais:
    while ( proximo == true ){
        if( troco_soma + 1 <= troco ){
        troco_soma += 1;
        c1r++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com moedas de 50 centavos:
    while ( proximo == true ){
        if( troco_soma + 0.5 <= troco ){
        troco_soma += 0.5;
        c050c++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com moedas de 25 centavos:
    while ( proximo == true ){
        if( troco_soma + 0.25 <= troco ){
        troco_soma += 0.25;
        c025c++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com moedas de 10 centavos:
    while ( proximo == true ){
        if( troco_soma + 0.1 <= troco ){
        troco_soma += 0.1;
        c010c++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com moedas de 5 centavos:
    while ( proximo == true ){
        if( troco_soma + 0.05 <= troco ){
        troco_soma += 0.05;
        c005c++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    //Troco com moedas de 1 centavos:
    while ( proximo == true ){
        if( troco_soma + 0.01 <= troco ){
        troco_soma += 0.01;
        c001c++;
        continuar = true;
        } else
            continuar = false;

        if( continuar == false){
            proximo = false;
        }
    }
    proximo = true;

    printf("\n\n\nTroco: %.2f reais\n\n", troco);
    printf("==============================\n");
    printf("Sugestao de Troco: \n");

    if (c100r > 0){
        if(c100r == 1){
            printf("%i nota de 100 reais\n", c100r);
        }else
            printf("%i notas de 100 reais\n", c100r);
    }
    if (c50r > 0){
        if(c50r == 1){
            printf("%i nota de 50 reais\n", c50r);
        }else
            printf("%i notas de 50 reais\n", c50r);
    }
    if (c20r > 0){
        if(c20r == 1){
            printf("%i nota de 20 reais\n", c20r);
        }else
            printf("%i notas de 20 reais\n", c20r);
    }
    if (c10r > 0){
        if(c10r == 1){
            printf("%i nota de 10 reais\n", c10r);
        }else
            printf("%i notas de 10 reais\n", c10r);
    }
    if (c5r > 0){
        if(c5r == 1){
            printf("%i nota de 5 reais\n", c5r);
        }else
            printf("%i notas de 5 reais\n", c5r);
    }
    if (c2r > 0){
        if(c2r == 1){
            printf("%i nota de 2 real\n", c2r);
        }else
            printf("%i notas de 2 real\n", c2r);
    }
    if (c1r > 0){
        if(c1r == 1){
            printf("%i moeda de 1 real\n", c1r);
        }else
            printf("%i moedas de 1 real\n", c1r);
    }
    if (c050c > 0){
        if(c050c == 1){
            printf("%i moeda de 50 centavos\n", c050c);
        }else
            printf("%i moedas de 50 centavos\n", c050c);
    }
    if (c025c > 0){
        if(c025c == 1){
            printf("%i moeda de 25 centavos\n", c025c);
        }else
            printf("%i moedas de 25 centavos\n", c025c);
    }
    if (c010c > 0){
        if(c010c == 1){
            printf("%i moeda de 10 centavos\n", c010c);
        }else
            printf("%i moedas de 10 centavos\n", c010c);
    }
    if (c005c > 0){
        if(c005c == 1){
           printf("%i moeda de 5 centavos\n", c005c);
        }else
            printf("%i moedas de 5 centavos\n", c005c);
    }
    if (c001c > 0){
        if(c001c == 1){
            printf("%i moeda de 1 centavos\n", c001c);
        }else
            printf("%i moedas de 1 centavos\n", c001c);
    }
    printf("\n==============================");

    return 0;
}
