/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos: 
Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. 
Armazene em uma variável inteira (simples) a soma entre os valores das posições
 A[0], A[1] e A[5] do vetor e mostre na tela esta soma. 
Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. 
Mostre na tela cada valor do vetor A, um em cada linha.*/
#include <iostream>

using namespace std;

void add(int vetor[6],int tam){
    for (int i = 0; i < tam; i++)
    {
        cout<<"digite: ";
        cin>>vetor[i];
        if (i==4)
        {
            vetor[i]=100;
        }
        
    }
}

int somatorio(int vetor[6],int tam){
    int soma=0;
    for (int i = 0; i < tam; i++)
    {
        if (i<2||i==5)
        {
            soma+=vetor[i];
        }
        
    }
    return soma;
}

void mostrar(int vetor[6],int tam){
    for (int i = 0; i < tam; i++)
    {
        cout<<vetor[i]<<" ";
    }
    
} 

int main(){
    
   int vetor[6];
   add(vetor,6);
   int s=somatorio(vetor,6);
   mostrar(vetor,6);
    return 0;
}