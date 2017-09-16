// Testevetormatriz.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "vetormatriz.h"
#include <time.h>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	const int tamanhovetor = 10, tamanhomatriz = 5;
	int vetor[tamanhovetor], matriz[tamanhomatriz][tamanhomatriz];
	cout << "Vetor desordenado: " << endl;
	for (int indice = 0; indice < tamanhovetor; indice++) {
		vetor[indice] = rand() % 100;
		cout << vetor[indice] << "\t";
	}
	bubbleSort(vetor, tamanhovetor, true);
	cout <<endl<< "Vetor ordenado crescente: " << endl;
	for (int indice = 0; indice < tamanhovetor; indice++)
		cout << vetor[indice]<<"\t";
	bubbleSort(vetor, tamanhovetor, false);
	cout << endl << "Vetor ordenado decrescente: " << endl;
	for (int indice = 0; indice < tamanhovetor; indice++)
		cout << vetor[indice] << "\t";
	cout << endl << "Maior valor no vetor: " << endl;
	cout<<maiorValorEmVetor(vetor, tamanhovetor)<<endl;
	cout << "Menor valor no vetor: " << endl;
	cout << menorValorEmVetor(vetor, tamanhovetor)<<endl<<endl;
	
	for (int linha = 0; linha < tamanhomatriz; linha++) {
		for (int coluna = 0; coluna < tamanhomatriz; coluna++) {
			matriz[linha][coluna] = rand() % 200;
			cout << matriz[linha][coluna]<<"\t";
		}
		cout << endl;
	}
	cout << endl << "Maior valor na diagonal principal da matriz: " << endl<<maiorValorEmMatriz(matriz,ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL)<<endl;
	cout << "Maior valor na diagonal secundária da matriz: " << endl << maiorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA) << endl;
	cout << "Maior valor encontrado entre a DP e a DS: " << endl << maiorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONAIS) << endl;
	cout << "Menor valor na diagonal principal da matriz: " << endl << menorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL) << endl;
	cout << "Menor valor na diagonal secundária da matriz: " << endl << menorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA) << endl;
	cout << "Menor valor encontrado entre a DP e a DS: " << endl << menorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_DIAGONAIS);
	
    return 0;
}

