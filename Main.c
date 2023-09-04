// C Program to print first n terms of Fibonacci series using recursion
// C Program to print the Fibonacci series using recursion
#include <stdio.h>

int prev1 = 1;
int prev2 = 0;
void fib(int n)
{
	if (n < 3) {
		return;
	}
	int fn = prev1 + prev2;
	prev2 = prev1;
	prev1 = fn;
	printf("%d ", fn);
	return fib(n - 1);
}
void printFib(int n)
{
	if (n < 1) {
		printf("Invalid number of terms\n");
	}
	else if (n == 1) {
		printf("%d ", 0);
	}
	else if (n == 2) {
		printf("%d %d", 0, 1);
	}
	else {
		printf("%d %d ", 0, 1);
		fib(n);
	}
	return;
}

int main()
{
	int n;
  printf("Enter Your Number : ");
  scanf("%d",&n);
	printFib(n);
	return 0;
}