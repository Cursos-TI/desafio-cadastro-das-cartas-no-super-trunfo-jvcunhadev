#include <stdio.h>

    int main(){
        char nome_estado1[50];
        char cod_carta1[30];
        char nome_cidade1[50];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int pontos1;

        

        char nome_estado2[50];
        char cod_carta2[30];
        char nome_cidade2[50];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int pontos2;

        
        printf("Carta 1 \n");
        printf("Qual Estado da sua carta?: ");
        scanf("%s", nome_estado1);
        printf("Qual Codigo da sua carta?: ");
        scanf("%s", cod_carta1);
        printf("Qual a cidade da sua Carta?: ");        
        scanf("%s", nome_cidade1);
        printf("Qual a população da sua Carta?: ");
        scanf(" %lu", &populacao1);
        printf("Qual a area da sua Carta?: ");
        scanf(" %f", &area1);
        printf("Qual o PIB da sua Carta?: ");
        scanf(" %f", &pib1);
        printf("Quantos pontos turisticos tem na sua Carta?: ");
        scanf(" %d", &pontos1);


        float densidade_populacional1 = (float)populacao1/area1;
        float pib_per_capita1 =  pib1/populacao1;
        float densidade_invertida1 = area1 /(float)populacao1;
        float super_poder1 = populacao1+area1+pib1+pontos1+densidade_populacional1+pib_per_capita1+densidade_invertida1;

        printf("Seu estado é :%s\n",nome_estado1);
        printf("Sua cod é :%s\n", cod_carta1);
        printf("Seu cidade é :%s\n",nome_cidade1);
        printf("Sua pupoluação é :%lu\n",populacao1);
        printf("Sua area é :%.2f\n",area1);
        printf("Seu pib é :%.2f \n",pib1);
        printf("Seu ponto turistico é :%d\n",pontos1);
        printf("Sua densidade populacional é:%.2f\n",densidade_populacional1);
        printf("Sua PIB per CAPITA é:%2f\n",pib_per_capita1);
        printf("Sua densidade invertida é:%f\n",densidade_invertida1);
        printf("Seu Super Poder é:%.2f\n",super_poder1);
    
        printf("Carta 2 \n");
        printf("Qual Estado da sua carta?: ");
        scanf("%s", nome_estado2);
        printf("Qual Codigo da sua carta?: ");
        scanf("%s", cod_carta2);
        printf("Qual a cidade da sua Carta?: ");        
        scanf("%s", nome_cidade2);
        printf("Qual a população da sua Carta?: ");
        scanf(" %lu", &populacao2);
        printf("Qual a area da sua Carta?: ");
        scanf(" %f", &area2);
        printf("Qual o PIB da sua Carta?: ");
        scanf(" %f", &pib2);
        printf("Quantos pontos turisticos tem na sua Carta?: ");
        scanf(" %d", &pontos2);

        float densidade_populacional2 = (float) populacao2/area2;
        float pib_per_capita2 = (float) pib2/populacao2;
        float densidade_invertida2 = area2/(float) populacao2;
        float super_poder2 = (float) populacao2+area2+pib2+pontos2+densidade_populacional2+pib_per_capita2+densidade_invertida2;

        printf("Seu estado é :%s\n",nome_estado2);
        printf("Sua cod é :%s\n", cod_carta2);
        printf("Seu cidade é :%s\n",nome_cidade2);
        printf("Sua pupoluação é :%lu\n",populacao2);
        printf("Sua area é :%.2f\n",area2);
        printf("Seu pib é :%.2f \n",pib2);
        printf("Seu ponto turistico é :%d\n",pontos2);
        printf("Sua densidade populacional é:%.2f\n",densidade_populacional2);
        printf("Sua PIB per CAPITA é:%.2f\n",pib_per_capita2);
        printf("Sua densidade invertida é:%f\n",densidade_invertida2);
        printf("Seu Super Poder é:%.2f\n",super_poder2);





        
        /*int ganhador_populacao;
        int ganhador_area;
        int ganhador_pib;
        int ganhador_pontos;
        int ganhador_densidade;
        int ganhador_pib_per_capita;
        int ganhador_super_poder;
        int ganhador_densidade_invertida;*/
        

        if (populacao1>populacao2)
        {
           printf("Carta 1 venceu \n"); 
        }else{
            printf("Carta 2 venceu \n");
        }


         if (area1>area2)
        {
           printf("Carta 1 venceu \n"); 
        }else{
             printf("Carta 2 venceu \n");
        }



         if (pib1>pib2)
        {
           printf("Carta 1 venceu \n"); 
        }else{
             printf("Carta 2 venceu \n");
        }


         if (pontos1>pontos2)
        {
            printf("Carta 1 venceu \n"); 
        }else{
            printf("Carta 2 venceu \n");
        }


         if (densidade_populacional1<densidade_populacional2)
        {
            printf("Carta 1 venceu \n"); 
        }else{
            printf("Carta 2 venceu \n");
        }


        if (pib_per_capita1>pib_per_capita2)
        {
           printf("Carta 1 venceu \n"); 
        }else{
            printf("Carta 2 venceu \n");
        }


        if (super_poder1>super_poder2)
        {
           printf("Carta 1 venceu \n"); 
        }else{
             printf("Carta 2 venceu \n");
        }


        if (densidade_invertida1<densidade_invertida2)
        {
           printf("Carta 1 venceu \n"); 
        }else{
            printf("Carta 2 venceu \n");
        }

        
    return 0;
}