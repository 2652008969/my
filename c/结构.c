#include<stdio.h>
void main(){
	struct part{// ���� part�ṹ���� 
		int a;
	};
	struct part part1={2},part2={3};// ��part�ṹ���͸�ֵ 
	printf("%d",part1.a);
	printf("%d",part2.a);
}