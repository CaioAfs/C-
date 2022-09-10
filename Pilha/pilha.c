#include "pilha.h"



int tam;

void inicializa(no *pilha, no *topo) {
    tam = 0;
    printf("Pilha inicializada!\n");
    printf("Inicio.: %d\n", pilha);
    printf("Topo...: %d\n", topo);
    printf("Tamanho: %d\n", tam);
}

void push(no **pilha, no **topo){
    no *novo = (no *)malloc(sizeof(no));
    if(tam == MAX) {
        printf("Pilha cheia!\n");
        return;       
    }
    
    if(!novo) {
        printf("Heap overflow!\n");
        return;          
    }
    
    if(novo) {
        printf("Valor: ");
        scanf("%d", &novo->codigo);
        novo->prox = NULL;
        
        if(!(*pilha)) {
            *pilha = novo;
            *topo = novo;
        }
        else {
            (*topo)->prox = novo;
            *topo = novo;
        }
        tam++;  
    }   
    return;
}

void imprime(no *pilha){
    printf("Tamanho da pilha: %d\n", tam);
    int vetor[tam];
    int i;
    for(i = 0; i < tam; i++) {
        vetor[i] = pilha->codigo;
        pilha = pilha->prox;
    }
    
	printf("\nPilha na ordem de push: ");
    for(i = 0; i < tam; i++)
        printf("%d ", vetor[i]);
        
    printf("\nPilha na ordem de pop: ");
    for(i = tam-1; i >= 0; i--)               
        printf("%d ", vetor[i]);
    printf("\n\n");
    return;
}                         

void menu(){
	
	int opcao;
	printf ( "---------------Menu---------------\n" ) ;
    printf ( "1 - Inserir valor.\n" ) ;
    printf ( "2 - Excluir valor final.\n" ) ;
    printf ( "3 - Validar valor existente.\n" ) ;
    printf ( "4 - Excluir toda lista.\n" ) ;
    printf ( "5 - Imprimir lista.\n" ) ;
    printf ( "----------------------------------\n" ) ;
    
    if(opcao = 1){
    	
	}
	                                                                                                                                         
}

void validar(no **pilha, no **topo){
	no *aux = *pilha;
	while(aux->prox != *topo)
        aux = aux->prox;
        
}

void pop(no **pilha, no **topo) {
    printf("\n");
    if(!(*pilha) && !(*topo)) {
        printf("Pilha vazia. Impossivel remover!\n");
        return;
    }
    
    no *aux = *pilha;
    if(*pilha == *topo) {
        *pilha = NULL;
        *topo = NULL;
        free(aux);
        tam--;
        return;
    }
    
    while(aux->prox != *topo)
        aux = aux->prox;
            
    *topo = aux;
    (*topo)->prox = NULL;
    free(aux->prox);
    
    tam--;  
    return;
}
