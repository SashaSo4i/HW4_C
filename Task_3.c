#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char ASSword[100];
    int upper = 0, punctmark = 0, lower = 0, digit = 0;
    bool asca = false, length = false;
    scanf("%s", &ASSword);
    for (int i=0; i < strlen(ASSword); i++) { //смыслл цикла заключается в сбора инфы о "массиве", после все сложить и получить ответ.
        if ((ASSword[i] >= 33) && (ASSword[i] <= 126)) {
            asca = true;
        } 
        if ((strlen(ASSword) > 7 && strlen(ASSword) < 15)) {
            length = true;
        }
        if (isalpha(ASSword[i])) {
            upper = 1;
        }
        if (islower(ASSword[i])) {
            lower = 1;   
        }
        if (isdigit(ASSword[i])) {
            digit = 1;
        }
        if (ispunct(ASSword[i])) {
            punctmark = 1;
        }
    }
    if (asca == true && length == true && (lower + digit + upper + punctmark) > 2) {
        printf("TtRrUuEe");
    }
    else {
        printf("fignya (NnOo)");
    }
     //решение состоит из множества функций проверки символов с библиотеками ситайп. Кнч возможно и другое решение с диапазонами, но его еще надо расписывать.
    return 0;
}

// вот пример второго решения: 

// int main() {
//     char ASSword[100];
//     int upper = 0, punctmark = 0, lower = 0, digit = 0;
//     bool asca = false, length = false;
//     scanf("%s", &ASSword);
//     for (int i=0; i < strlen(ASSword); i++) { 
//         if ((ASSword[i] >= 33) && (ASSword[i] <= 126)) {
//             asca = true;
//         } 
//         if ((strlen(ASSword) > 7 && strlen(ASSword) < 15)) {
//             length = true;
//         }
//         if (ASSword[i] >= 'A' && ASSword[i] <= 'Z') { 
//             upper = 1;
//         }
//         if(ASSword[i] >= 'a' && ASSword[i] <= 'z') {
//             lower = 1;
//         }
//         if(ASSword[i] >= '0' && ASSword[i] <= '9') {
//             digit = 1;
//         }
//         if (ispunct(ASSword[i])) {
//             punctmark = 1;
//         }
//     }
//     if (asca == true && length == true && (lower + digit + upper + punctmark) > 2) {
//         printf("TtRrUuEe");
//     }
//     else {
//         printf("fignya (NnOo)");
//     }
// 
//     return 0;
// }