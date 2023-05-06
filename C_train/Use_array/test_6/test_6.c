//配列の長さを取得する

#include <stdio.h>

int main(void) {

    int arr[3] = {100000, 111, 11};

    int arr_num = sizeof(arr);
    printf("arrayのバイト数 : %d\n", arr_num);

    //配列のバイト数の総数を一つ当たりの配列のバイト数で割ると配列の要素数が求められる。
    int arr_num_num = sizeof(arr) / sizeof(arr[0]);
    printf("arrayの要素数 : %d\n", arr_num_num);

    return 9;
}