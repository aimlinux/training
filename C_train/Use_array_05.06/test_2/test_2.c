#include <stdio.h>

int main(void) {

    int int_array_1[5] = {0, 1, 2, 3, 4};
    for(int i = 0; i < 5; i++) {
        int_array_1[i] = 4 - i;
        printf("%d", int_array_1[i]);
    }
    printf("\n");


    int int_array_2[5] = {};
    int_array_2[2] = 3;
    for(int i = 0; i < 5; i++) {
        printf("%d", int_array_2[i]);
    }
    printf("\n");


    char char_array[] = "HELLO";
    //シングルクォーテーションにする
    char_array[0] = 'h';
    printf("%s\n", char_array);

    return 0; 
}