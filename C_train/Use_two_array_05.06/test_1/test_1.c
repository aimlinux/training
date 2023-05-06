//二次元配列について

#include <stdio.h>

int main(void) {
    //二次元配列の第一要素は省略できる
    int num1[][5] = {{0, 1, 2, 3, 4}, {1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", num1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");


    int num2[10][11];

    int i = 0;
    for (int j = 0; j < 10; j++) {
        for (int k = 0; k < 11; k++) {
            num2[j][k] = i;
            printf("%d, ", num2[j][k]);
            i++;
        }
    }
    printf("\n");
    printf("\n");


    
    // 文字列の配列（char型の二次元配列）
    char cities[][16] = {"aim",
                                                    "aim", 
                                                    "aim"};
    
    for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 16; j++) {
			if(j < 15) {
				printf("%c,", cities[i][j]);
			} else {
				printf("%c\n", cities[i][j]);
			}
		}
    }

    return 0; 
}