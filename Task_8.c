#include <stdio.h>
#include <stdlib.h>

// Иван Генадьевич, спасибо огромное за такую задачу! Настолько беспомощным я себя никогда еще не чуствовал. 
// Эта задача не просто если культорно выражаться разработало мне мозги, но и заставила часа 3 учить новые функции в Си и в целом чутка углубиться в динамическое программировние,а также узнать что в Си в отличчи от плюсов нет sort.
// В обем и целом, спасибо огромное!

int compare(const void *a, const void *b) { //функция для сравнения. (const void *a, const void *b) - заданные аргументы функции а и б, для вычеслениеих разницы.
    return (*(int*)a - *(int*)b); // эта функция нужна для qsort в дальнейшем.
}

int main() {
    int num, i;
    int *arr, *arr2; //* это указатель чтобы сохранить адрес памяти в другой переменной.
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int)); //malloc это функция для динамического выделения памяти во время выполнения программы.
    arr2 = (int*)malloc(num * sizeof(int)); // sizeof(int) - возвращает размер в байтах.

    for (i = 0; i < num; i++) { // цикл для заполнения массива 1.
        scanf("%d", &arr[i]);
    }

    qsort(arr, num, sizeof(int), compare); //Т.к C нет функции сорт, пришлось пользоваться этим чудом. Это функция быстрой сортировки. Порядок аргументов: массив который хотим отсортировать; кол-во элементов в нем; его размер; функция для сравнения двух элементов массива, по сути главный элемент qsort, т.к без него программа не будет понимать, что больше, что меньше. 

    arr2[1] = arr[1] - arr[0]; //разница между элементами списка

    if (num > 2) { //ну и соответсвенно если элементов 2, то все легко. Если больше то нужен цикл.
        arr2[2] = arr[2] - arr[0]; //еще разница
        for (i = 3; i < num; i++) { //цикл для создание конечного массива
            arr2[i] = (arr2[i-2] < arr2[i-1] ? arr2[i-2] : arr2[i-1]) + arr[i] - arr[i-1];
        }
    }
    
    printf("%d", arr2[num - 1]); //ответ
    free(arr); //функция free нужна для освобождения памяти, ее обязательно выполнить если использовался malloc()
    free(arr2);

    return 0;

}
//Кратко: если не считать мою закопанную самооценку, было интересно.
//Спасибо за задачу и 3 часа жизни потраченных с пользой. :)