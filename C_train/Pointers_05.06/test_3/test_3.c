#include <stdio.h>

int main(void) {
    
    char str[] = "HelloWorld";
    int i_array[] = {0, 1, 2, 3, 4};
    float f_array[] = {0.0f, 0.1f, 0.2f, 0.3f, 0.4f};     
    double d_array[] = {0.0, 0.1, 0.2, 0.3, 0.4};

    char *p_char = str;
    int *p_int = i_array;
    float *p_float = f_array;
    double *p_double = d_array;

    printf("char型ポインタ変数p_chr:%p, アドレス先の値:%c\n", p_char, *p_char);
    printf("char型配列要素str[0]のアドレス:%p, アドレス先の値:%c\n", &str[0], *(&str[0]));
    printf("char型ポインタ変数(p_chr + 1):%p, アドレス先の値:%c\n", p_char + 1, *(p_char + 1));
    printf("char型配列要素str[1]のアドレス:%p, アドレス先の値:%c\n", &str[1], *(&str[1]));

    printf("int型ポインタ変数p_int:%p, アドレス先の値:%d\n", p_int, *p_int);
    printf("int型配列要素i_arr[0]のアドレス:%p, アドレス先の値:%d\n", &i_array[0], *(&i_array[0]));
    printf("int型ポインタ変数(p_int + 1):%p, アドレス先の値:%d\n", p_int + 1, *(p_int + 1));
    printf("int型配列要素i_arr[1]のアドレス:%p, アドレス先の値:%d\n", &i_array[1], *(&i_array[1]));
    
    printf("float型ポインタ変数p_flt:%p, アドレス先の値:%.1f\n", p_float, *p_float);
    printf("float型配列要素f_arr[0]のアドレス:%p, アドレス先の値:%.1f\n", &f_array[0], *(&f_array[0]));
    printf("float型ポインタ変数(p_flt + 1):%p, アドレス先の値:%.1f\n", p_float + 1, *(p_float + 1));
    printf("float型配列要素f_arr[1]のアドレス:%p, アドレス先の値:%.1f\n", &f_array[1], *(&f_array[1]));
    
    printf("double型ポインタ変数p_dbl:%p, アドレス先の値:%.1lf\n", p_double, *p_double);
    printf("double型配列要素d_arr[0]のアドレス:%p, アドレス先の値:%.1lf\n", &d_array[0], *(&d_array[0]));
    printf("double型ポインタ変数(p_dbl + 1):%p, アドレス先の値:%.1lf\n", p_double + 1, *(p_double + 1));
    printf("double型配列要素d_arr[1]のアドレス:%p, アドレス先の値:%.1lf\n", &d_array[1], *(&d_array[1]));


    return 0;

}