#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) { //цикл для считывания и затем подчета положительных значений
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}