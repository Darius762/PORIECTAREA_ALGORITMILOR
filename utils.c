int max(int a, int b) {
    return (a > b) ? a : b;
}

int cutRodRec(int *prices, int length) {
    if (length <= 0)
        return 0;

    int maxVal = -1;
    for (int i = 0; i < length; i++) {
        int val = prices[i] + cutRodRec(prices, length - i - 1);
        maxVal = max(maxVal, val);
    }

    return maxVal;
}

int cutRodDP(int *prices, int length) {
    int *dp = (int*) malloc((length + 1) * sizeof(int));
    dp[0] = 0;

    for (int i = 1; i <= length; i++) {
        int maxVal = -1;
        for (int j = 0; j < i; j++) {
            maxVal = max(maxVal, prices[j] + dp[i - j - 1]);
        }
        dp[i] = maxVal;
    }

    int maxIncome = dp[length];
    free(dp);

    return maxIncome;
}
void generare_date_nontriviale(int n, int vector[]) {
    srand(time(NULL)); // Initializare generator de numere aleatoare

    for (int i = 0; i < n; i++) {
        vector[i] = rand(); // Generare valori aleatoare
    }
