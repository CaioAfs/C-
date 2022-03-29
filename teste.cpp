#include<iostream>

typedef struct TipoNo{
    int chave;
    struct TipoNo *prox;
}No;

void imprimeLista(No *no){

    if(no == NULL){
        printf("Lista vazia");
    }

    No *aux = no;
    while(aux != NULL){
        printf("%d\n",aux->chave);
        aux= aux->prox;
    }
}

No* inserirNovoNo(No* listaOriginal,  int novaChave){

    No *novoNo = (No*)(malloc(sizeof(No*)));
    novoNo -> chave = novaChave;
    novoNo -> prox = listaOriginal;

    return novoNo;

}

void buscaChave(No *lista, int chave){

    int posicaoChave=0;
     No *aux = no;

    while(aux != NULL){
        if(aux -> chave == chave){
            return posicaoChave
        }else{
            aux = aux -> prox;
            posicaoChave++;
        }


}


int main(){
using namespace std;
    No* lista = NULL;

    lista = inserirNovoNo(lista,3);
    lista = inserirNovoNo(lista,2);
    lista = inserirNovoNo(lista,5);

    lista = inserirNovoNo(lista,6);
    lista = inserirNovoNo(lista,10);

    imprimeLista(lista);

    lista = excluirLista(lista,10);


    imprimeLista(lista);

}
