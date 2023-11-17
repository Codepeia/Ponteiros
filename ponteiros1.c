#include<stdio.h>


main(){
    //declaracao e inicializacao da variavel ponteiro

    int numero = 10;
    
    //declaracao do ponteiro
    //é uma variavel que armazena a referencia do endereco de outra variavel, ou seja, aponta para um endereco de memoria.
    int *x = NULL;

    //inicializar o ponteiro
    x = &numero;

    //visualizacao dos enderecos de memoria da variavel
    printf("Endereco de memoria de numero: %d", &numero);
    //visualizacao dos enderecos de memoria do ponteiro
    printf("\nEndereco de memoria de do ponteiro x: %d", &x);

    //visualizacao do conteudo da variavel numero;
     printf("\n\nConteudo da variavel numero: %d", numero);

     //visualizacao do conteudo da variavel ponteiro;
     printf("\n\nConteudo ddo ponteiro x: %d", x);

}