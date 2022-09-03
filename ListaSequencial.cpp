#include<iostream>
#include "ListaSequencia.c"

using namespace std;

int main(){
	
	
	Lista *li;
	li = cria_lista();
	int tamanho = tamanho_lista(li);
	int cheia = lista_cheia(li);
	int vazia = lista_vazia(li);
	
	
	Garagem garagem;
	cout << "Digite posicao: " << endl; 
	cin >> garagem.posicao;
	getchar();
	
	cout << "Digite o nome carro: " << endl; 
	gets(garagem.nomeCarro); 
	
	cout << "Digite o tempo hora: " << endl; 
	cin >> garagem.tempoHora;
	
	insere_lista_final(li,garagem);
	
	imprimir_lista(li);

	libera_lista(li);

	system("pause");
	return 0;

}


