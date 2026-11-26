#include <stdio.h>
#include "selectSort.c"

void selectionSort(int a[], int size);

int main(void) {
	int i, list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++) {
		printf("%3d ", list[i]);
	}
	printf("\n<<<<<<<<<< 선택 정렬 수행 >>>>>>>>>>\n");
	selectionSort(list, size);
	
	getchar(); return 0;
}