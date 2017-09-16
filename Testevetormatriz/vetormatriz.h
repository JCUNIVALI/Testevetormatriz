#ifndef VETORMATRIZ_H
#define VETORMATRIZ_H
#define TAMANHO_MATRIZ 5
#define ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL 1
#define ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA 2
#define ESCOPO_BUSCA_MATRIZ_DIAGONAIS 3
#define ESCOPO_BUSCA_MATRIZ_COMPLETA 4

void bubbleSort(int vetor[], int tamanho, bool ordenacaoCrescente) {
	for (int y = 0; y < tamanho - 1; y++) {
		for (int x = 0; x < tamanho - 1; x++) {
			if (vetor[x] > vetor[x + 1] && ordenacaoCrescente) {
				int aux = vetor[x];
				vetor[x] = vetor[x + 1];
				vetor[x + 1] = aux;
			}
			if (vetor[x] < vetor[x + 1] && !ordenacaoCrescente) {
				int aux = vetor[x];
				vetor[x] = vetor[x + 1];
				vetor[x + 1] = aux;
			}
		}
	}
}

int maiorValorEmVetor(int vetor[], int tamanho) {
	int maior = 0;
	for (int x = 0; x < tamanho; x++) {
		if (x == 0)
			maior = vetor[x];
		if (vetor[x] > maior)
			maior = vetor[x];
	}
	return maior;
}

int menorValorEmVetor(int vetor[], int tamanho) {
	int menor = 0;
	for (int x = 0; x < tamanho; x++) {
		if (x == 0)
			menor = vetor[x];
		if (vetor[x] < menor)
			menor = vetor[x];
	}
	return menor;
}

int maiorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {
	int maior = 0;
	if (escopoBusca == ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL) {
		for (int l = 0; l < TAMANHO_MATRIZ; l++) {
			for (int c = 0; c < TAMANHO_MATRIZ; c++) {
				if (l == c) {
					if (l == 0)
						maior = matriz[l][c];
					if (matriz[l][c] > maior)
						maior = matriz[l][c];
				}
			}
		}
	}
	if (escopoBusca == ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA) {
		for (int l = 0; l < TAMANHO_MATRIZ; l++) {
			for (int c = 0; c < TAMANHO_MATRIZ; c++) {
				if (l + c == TAMANHO_MATRIZ - 1) {
					if (l == 0 && c == TAMANHO_MATRIZ)
						maior = matriz[l][c];
					if (matriz[l][c] > maior)
						maior = matriz[l][c];
				}
			}
		}
	}
	if (escopoBusca == ESCOPO_BUSCA_MATRIZ_DIAGONAIS) {
		for (int l = 0; l < TAMANHO_MATRIZ; l++) {
			for (int c = 0; c < TAMANHO_MATRIZ; c++) {
				if (l == c || l + c == TAMANHO_MATRIZ - 1) {
					if (l == 0 & c == 0)
						maior = matriz[l][c];
					if (matriz[l][c] > maior)
						maior = matriz[l][c];
				}
			}
		}
	}
	if (escopoBusca == ESCOPO_BUSCA_MATRIZ_COMPLETA) {
		for (int l = 0; l < TAMANHO_MATRIZ; l++) {
			for (int c = 0; c < TAMANHO_MATRIZ; c++) {
				if (l == 0 && c == 0)
					maior = matriz[l][c];
				if (matriz[l][c] > maior)
					maior = matriz[l][c];
			}
		}
	}
	return maior;
}

int menorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {
	int menor = 0;
	if (escopoBusca == ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL) {
		for (int l = 0; l < TAMANHO_MATRIZ; l++) {
			for (int c = 0; c < TAMANHO_MATRIZ; c++) {
				if (l == c) {
					if (l == 0)
						menor = matriz[l][c];
					if (matriz[l][c]<menor)
						menor = matriz[l][c];
				}
			}
		}
	}
	if (escopoBusca == ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA) {
		for (int l = 0; l < TAMANHO_MATRIZ; l++) {
			for (int c = 0; c < TAMANHO_MATRIZ; c++) {
				if (l + c == TAMANHO_MATRIZ - 1) {
					if (l == 0 && c == TAMANHO_MATRIZ)
						menor = matriz[l][c];
					if (matriz[l][c]<menor)
						menor = matriz[l][c];
				}
			}
		}
	}
	if (escopoBusca == ESCOPO_BUSCA_MATRIZ_DIAGONAIS) {
		for (int l = 0; l < TAMANHO_MATRIZ; l++) {
			for (int c = 0; c < TAMANHO_MATRIZ; c++) {
				if (l == c || l + c == TAMANHO_MATRIZ - 1) {
					if (l == 0 && c == 0)
						menor = matriz[l][c];
					if (matriz[l][c]<menor)
						menor = matriz[l][c];
				}
			}
		}
	}
	if (escopoBusca == ESCOPO_BUSCA_MATRIZ_COMPLETA) {
		for (int l = 0; l < TAMANHO_MATRIZ; l++) {
			for (int c = 0; c < TAMANHO_MATRIZ; c++) {
				if (l == 0 && c == 0)
					menor = matriz[l][c];
				if (matriz[l][c]<menor)
					menor = matriz[l][c];
			}
		}
	}
	return menor;
}
#endif
