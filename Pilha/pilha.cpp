#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"
#include <iostream>
using namespace std;

int main(){
    no *pilha = NULL;
    no *topo = NULL;
    char maisum;
    int opcao;
    
  		menu();
  		
  		switch(opcao){
    	case 1:
    		
    	do{
	        push(&pilha, &topo);
	        printf("Inserir mais um (S/N)? ");
	        fflush(stdin);
	        scanf("%c", &maisum);
    	}while(maisum == 'S' || maisum == 's');
    		break;
    		
    	case 2:
			pop(&pilha, &topo);	
    		break;
    		
    	case 3:
    		
    		int valor;
    		printf("Digite o valor para procurar na lista:");
    		scanf("%c",&valor);
    		

    		break;
    		
    	case 4:
    		
		break;
		
		case 5:
			
			imprime(pilha);
			
		break;
	}
  	
	
    system("PAUSE");
    return 0;
}


