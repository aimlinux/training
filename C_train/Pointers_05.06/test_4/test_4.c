#include <stdio.h>

int main(void) {
	int num = 1; // int型変数
    int *p_num; // int型ポインタ変数
    p_num = &num; // ポインタ変数p_numに変数numアドレスを代入
    
    int **pp_num; // int型ポインタ変数のポインタ
    pp_num = &p_num; // ポインタ変数のポインタpp_numにポインタ変数p_numのアドレスを代入
    

	printf("int型変数numの値:%d\n", num);
    printf("int型ポインタ変数p_num:%p\n", p_num);
	printf("int型ポインタ変数のポインタpp_num:%p\n", pp_num);

	return 0;

}


