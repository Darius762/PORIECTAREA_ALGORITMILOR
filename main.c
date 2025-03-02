#include <stdio.h>
#include <stdlib.h>
//VARIANTA 1:

//Cod sursă C pentru algoritmul recursiv

int main() {
    int length;
    printf("Introdu lungimea tijei: ");
    scanf("%d", &length);

    int *prices = (int*) malloc(length * sizeof(int));
    printf("Introdu preturile pentru fiecare lungime de tija:\n");
    for (int i = 0; i < length; i++) {
        printf("Pret pentru lungimea %d: ", i + 1);
        scanf("%d", &prices[i]);
    }

    int maxIncome = cutRodRec(prices, length);
    printf("Venitul maxim obtinut este: %d\n", maxIncome);

    free(prices);

    return 0;

//VARIANTA 2:
//Cod sursă C pentru algoritmul de programare dinamică



    int length2;
    printf("Introdu lungimea tijei: ");
    scanf("%d", &length2);

    int *prices2 = (int*) malloc(length2 * sizeof(int));
    printf("Introdu preturile pentru fiecare lungime de tija:\n");
    for (int i = 0; i < length2; i++) {
        printf("Pret pentru lungimea %d: ", i + 1);
        scanf("%d", &prices2[i]);
    }

    int maxIncome2 = cutRodDP(prices2, length2);
    printf("Venitul maxim obtinut este: %d\n", maxIncome2);

    free(prices2);

    int lungime_vector = 1000000; // Lungimea vectorului de generat

    int* vector = malloc(lungime_vector * sizeof(int)); // Alocare memorie pentru vector

    if (vector == NULL) {
        printf("Alocarea de memorie a esuat");
        return 1;
    }

    generare_date_nontriviale(lungime_vector, vector);

    // Utilizati vectorul generat pentru testarea algoritmilor

    free(vector); // Eliberare memorie alocata pentru vector

    return 0;
}
