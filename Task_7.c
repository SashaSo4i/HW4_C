#include <stdio.h>

int main() {
    int n, count_zero = 0, count_plus = 0, count_minus = 0; //счетчики
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) { //цикл для ввода и затем распределения по счетчикам
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            count_plus++;
        }
        if (arr[i] == 0) {
            count_zero++;
        }
        if (arr[i] < 0) {
            count_minus++;
        }
    }
    printf("%d %d %d", count_zero, count_plus, count_minus); //вывод

    return 0;
}