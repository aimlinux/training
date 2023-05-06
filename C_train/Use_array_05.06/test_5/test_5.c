//文字列を配列で宣言する


#include <stdio.h>

int main(void) {
    // 文字の配列で初期化
    char char_arr1[] = {'H', 'e', 'l', 'l', 'o'};
    printf("%s\n", char_arr1);

    // 文字列で初期化
    char char_arr2[16] = "Hello";
    printf("%s\n", char_arr2);
    
    // 文字列のポインタ変数で宣言
    char *str = "Hello"; 
    printf("%s", str);
    
    return 0;
}
