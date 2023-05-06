#include <stdio.h>

int main(void) {
    int num;
    printf("num : "); 
    scanf("%d", &num);
    int *p_num = &num;

    printf("%d\n", num);
    printf("%p\n", p_num);

    return 0;
}