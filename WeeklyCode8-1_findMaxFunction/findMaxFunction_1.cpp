#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isMax(int, int);
int main() {
	int num[5], i;
	printf("Inter 5 number : ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	//	for(i=0;i<5;i++){
	//		printf("%d",num[i]);
	//	}
	printf("Maximum Number : %d", isMax(isMax(isMax(num[0], num[1]), isMax(num[2], num[3])), num[4]));
	return 0;
}

int isMax(int x, int y) {
	if (x > y)		return x;
	else		return y;
}