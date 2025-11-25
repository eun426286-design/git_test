#include <stdio.h>

extern int add(int a, int b);
extern int sub(int a, int b);

int main() {
	int num1, num2, res;
	num1 = 10;
	num2 = 20;
		
	res = add(num 1, num2);
	printf("%d + %d = %d\n", num1, num2, res);
	res = sub(num1, num2);
	printf("%d - %d = %d\n", num1, num2, res);
}
