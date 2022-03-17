#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void){
    
    // TODO: Solicite o valor inicial ao usuário
    // TODO: Solicite o valor final ao usuário
    // TODO: Calcule o número de anos até o limite
    // TODO: Imprima o número de anos

//pedir numero inicial de lhamas    
    int numLhamasI;
    int numLhamasF; 
    int anos = 0;
    
do{
    numLhamasI = get_int("Qual o numero inicial da populacao: ");
}
while(numLhamasI < 9);

//pedir numero final de lhamas
do{
    numLhamasF = get_int("Qual o numero final da populacao: ");
}
while(numLhamasF < numLhamasI);

// enquanto o inicio for maior que o final, o calculo sera feito e o numero de anos vai passar
while(numLhamasI < numLhamasF) {
        numLhamasI += (numLhamasI / 3 - numLhamasI / 4);
        anos++;
        
        if(numLhamasI >= numLhamasF){
            break;
        }
}
   printf("O numero de anos sera: %i\n", anos);

    
}
