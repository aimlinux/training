//このソースコードのみコピーペーストしてます...

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m, n;
	m = 5;
	n = 3;

	int **nums1;
	nums1 = malloc(sizeof(int *) * n); // ｎ行個分のアドレスを保持する領域を確保

	for(int i = 0; i < n; i++) {
		nums1[i] = malloc(sizeof(int) * m); // 1行分のデータを保持する領域を確保
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			nums1[i][j] = i * m + j; // 初期化
			if(j < m -1) {
				printf("%d,", nums1[i][j]);
			} else {
				printf("%d\n", nums1[i][j]);
			}
		}
	}

    // メモリ解放
	for(int i = 0; i < n; i++) {
		free(nums1[i]);
	}
	free(nums1);

	int **nums2, *arr;
	nums2 = malloc(sizeof(int *) * n); // ｎ行個分のアドレスを保持する領域を確保
	arr = malloc(sizeof(int) * m * n); // m×n個のデータを保持する一連の領域を確保

	for(int i = 0; i < n; i++) {
		nums2[i] = arr + i * m;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			nums2[i][j] = i * m + j; // 初期化
			if(j < m -1) {
				printf("%d,", nums2[i][j]);
			} else {
				printf("%d\n", nums2[i][j]);
			}
		}
	}

	// メモリ解放
	free(arr);
	free(nums2);

	return 0;
}