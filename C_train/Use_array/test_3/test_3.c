//ポインタでのアドレスアクセスについて

#include <stdio.h>

int main(void) {

    int int_arr1[5] = {0, 1, 2, 3, 4};
    int *p1;
    p1 = int_arr1; // p1 = &int_arr1[0];
    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d,", *(p1+i));
        } else {
            printf("%d\n", *(p1+i));
        }
    }

    char char_arr2[16] = "Hello";
    char *p2;
    p2 = char_arr2; // p2 = &char_arr2[0];
    int num = sizeof(char_arr2) / sizeof(char_arr2[0]);
    for(int i = 0; i < num; i++) {
        if(i < num - 1) {
            printf("%c,", *(p2+i));
        } else {
            printf("%c\n", *(p2+i));
        }
    }


    return 0; 
}
