#include <stdio.h>
#include <string.h>

int main(void) {

    int int_array_1[5] = {0, 1, 2, 3, 4};
    int int_array_2[0];
    int int_array_3[0];

    //要素を一個ずつコピー（深い深いコピー）
    for (int i = 0; i < 5; i++) {
        int_array_2[i] = int_array_1[i];
        printf("%d", int_array_2[i]);
    }
    printf("\n");


    //memcpy関数を使用（深いコピー）
    memcpy(int_array_3, int_array_1, sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        printf("%d", int_array_3[i]);
    }
    printf("\n");



    //浅いコピー
    //浅いコピーでは参照先が同じですのでコピー元の配列の要素の値が変わると、コピー先の配列の要素の値も変わります。
    //深いコピーでは参照先が異なるのでコピー元の配列の要素の値が変わっても、コピー先の配列の要素の値が変わることはありません。
    int *array;
    //配列の時は&は付けなくていいのかな？
    array = int_array_1;
    for (int i; i < 5; i++) {
        printf("%d", array[i]);
    }
    printf("\n");

    return 0; 
}