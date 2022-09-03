#define MAX 100

typedef struct garagem {
	int posicao;
	char nomeCarro[15];
	int tempoHora;

}Garagem;

typedef struct lista Lista;

Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_lista_final(Lista* li, Garagem garagem);
int insere_lista_inicio(Lista* li, Garagem garagem);
int insere_lista_ordenada(Lista* li, Garagem garagem);
int remove_lista_final(Lista* li);
int remove_inicio(Lista* li);
int remove_lista(Lista* li, int mat);
void imprimir_lista(Lista* li);
void pesquisar_lista();
int consulta_conteudo(Lista* li, int posicao, Garagem *garagem);





