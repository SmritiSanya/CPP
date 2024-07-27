#include<stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int knapsack(int n, int weights[], int values[], int capacity) {
    int i, w;
    int dp[n + 1][capacity + 1];

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            }
            else if (weights[i - 1] <= w) {
                dp[i][w] = MAX(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            }
            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
}

int main() {
    int n, capacity, i;

    scanf("%d", &n);

    int weights[n], values[n];

    for (i = 0; i < n; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }

    scanf("%d", &capacity);

    printf("%d\n", knapsack(n, weights, values, capacity));

    return 0;
}
