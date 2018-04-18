#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define NUM 30
int fibonacci(int n);
int main() {
	int n;
	printf("Introduce el orde del numero:");
	scanf("%d",&n);
	printf("Fibonacci de orden %d es %d\n",n,fibonacci(n));
	system("pause");
}
int fibonacci(int n) {
	int vector[NUM] = { 0,1 };
	for (int i = 0;i < NUM;i++) {
		vector[i + 2] = vector[i] + vector[i + 1];
	}
	return vector[n];
}
