#include <stdio.h>
#include <stdlib.h>

void alterBalances(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            arr[i] = 0;
        } else {
            int pos_sum = 0, neg_sum = 0;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > 0) {
                    pos_sum += arr[j];
                } else if (arr[j] < 0) {
                    neg_sum += arr[j];
                }
            }
            arr[i] = abs(pos_sum - neg_sum);
        }
    }
}

int main() {
    int n;
    printf("Enter number of customers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter balances of customers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    alterBalances(arr, n);

    printf("New balances: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}