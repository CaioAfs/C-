# Lista Ligada || Lista Encadeada 
 
![](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1b/C_language_linked_list.png/438px-C_language_linked_list.png)



## O que é uma lista?

Segundo o Wikipédia uma lista é:
>Uma **lista encadeada** ou **lista ligada** é uma [estrutura de dados](https://pt.wikipedia.org/wiki/Estrutura_de_dados "Estrutura de dados") linear e dinâmica. Ela é composta por várias células que estão interligadas através de [ponteiros](https://pt.wikipedia.org/wiki/Ponteiro_(programa%C3%A7%C3%A3o) "Ponteiro (programação)"), ou seja, cada célula possui um ponteiro que aponta para o [endereço de memória](https://pt.wikipedia.org/wiki/Endere%C3%A7o_(mem%C3%B3ria) "Endereço (memória)") da próxima célula.
>
Dessa Maneira, podemos utilizar das listas para guardar dados de forma **sequencial**, diferente dos **arrays e matrizes** a lista utiliza de ponteiros e a declaração é um monstro de sete cabeças no inicio. Mas como estamos preparando o terreno, vamos primeiro aprender o que é struct.

## Struct

Segundo o Wikipedia :

>Um **struct** em C (e muitos derivados) é uma declaração [de tipo de dado composto](https://en.wikipedia.org/wiki/Composite_data_type "Tipo de dados compostos") (ou [registro](https://en.wikipedia.org/wiki/Record_(computer_science) "Record (ciência da computação)") ) que define uma lista de variáveis ​​agrupadas fisicamente sob um nome em um bloco de memória, permitindo que as diferentes variáveis ​​sejam acessadas por meio de um único [ponteiro](https://en.wikipedia.org/wiki/Pointer_(computer_programming) "Ponteiro (programação de computador)") ou pelo nome declarado struct que retorna o mesmo endereço.
>
Ok...Vamos tentar entender com exemplos.
Pense em uma fruta e essa fruta possui cor e peso, ou uma pessoa que apenas precisamos da idade e tamanho. Ficaria assim:
```
Struct tipo_fruta{  |	Struct tipo_pessoa{		|				
 char cor[10];		|	 int idade;				| =>      Nesse caso eu tenho um
 float peso;		|	 float tamanho;			| =>	  tipo de dado fruta e pessoa.
};					|	};						|
```
Para declarar é bem simples:
```
struct tipo_fruta maça; | struct tipo_pessoa pedro; |
```

## Ponteiro
Segundo o Wikipedia:
>Em [programação](https://pt.wikipedia.org/wiki/Programa%C3%A7%C3%A3o_de_computadores "Programação de computadores"), um **ponteiro** ou **apontador** é um [tipo de dado](https://pt.wikipedia.org/wiki/Tipo_de_dado "Tipo de dado") de uma [linguagem de programação](https://pt.wikipedia.org/wiki/Linguagem_de_programa%C3%A7%C3%A3o "Linguagem de programação") cujo valor se refere diretamente a um outro valor alocado em outra [área da memória](https://pt.wikipedia.org/wiki/Mem%C3%B3ria_(computador) "Memória (computador)"), através de seu [endereço](https://pt.wikipedia.org/wiki/Endere%C3%A7o_(mem%C3%B3ria) "Endereço (memória)"). Um ponteiro é uma simples implementação do tipo [referência](https://pt.wikipedia.org/wiki/Refer%C3%AAncia_(ci%C3%AAncia_da_computa%C3%A7%C3%A3o)) da [Ciência da computação](https://pt.wikipedia.org/wiki/Ci%C3%AAncia_da_computa%C3%A7%C3%A3o "Ciência da computação").
>
![Qual é a diferença entre um ponteiro e uma referência no C++? - Quora](https://qph.fs.quoracdn.net/main-qimg-a81105b7b125fe50cad407639661894a)
Como vemos na imagem acima, o ponteiro **a** tem seu conteúdo preenchido com o endereço de memória da variável **b**.

# Iniciando a lista
Para iniciar a lista primeiro preciso criar o struct,vou usar como exemoplo um struct com um valor e um ponteiro.
```
// Construção do tipo abstrato de dados tipo_pessoal 

struct tipo_pessoa {  
 char *nome;  
 int idade;  
 float peso;  
};  
  
// Definição do identificador tPessoa 
typedef struct tipo_pessoa tPessoa;
```
