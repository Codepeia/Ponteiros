#include<stdio.h>


main(){

    //declaracao variavel
    int num;

    //declaração ponteiro
    int *p, *p2;

    num = 20;
    p = &num;
    p2 = p;

    *p = 30;//alterando o conteudo da variavel num atraves do ponteiro

    printf("\nconteudo de p: %d",*p);

    *p2 = 50;

    printf("Valor de num: %d",num);
    printf("\nconteudo de p: %d",*p);
    printf("\nconteudo de p2: %d",*p2);





}