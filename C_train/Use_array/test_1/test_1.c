#include <stdio.h>

int main(void) {

    //宣言と同時に初期化
    int int_array_1[5] = {0, 1, 2, 3, 4};
    printf("%d\n", int_array_1[0]);


    //全ての要素をゼロで初期化
    int int_array_2[] = {};
    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d", int_array_2[i]);
        } else if(i == 4) {
            printf("%d\n", int_array_2[i]);
        }
    }


    //途中まで初期化
    int int_array_3[] = {0, 1, 2};
    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d,", int_array_3[i]);
        } else {
            printf("%d\n", int_array_3[i]);
        }
    }


    //一つの要素だけゼロ以外を指定
    int int_array_4[5] = {[2] = 2};
    for(int i = 0; i < 5; i++) {
        if(i < 4) {
            printf("%d,", int_array_4[i]);
        } else {
            printf("%d\n", int_array_4[i]);
        }
    }


    //総素数の記述を省略
    char char_array_1[] = {'H', 'E', 'L', 'L', 'O'};
    printf("%s\n", char_array_1); 


    //文字列で初期化
    char char_array_2[] = "HELLO";
    printf("%s\n", char_array_2);

    return 0; 
}