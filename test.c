#include <stdio.h>
int fib(int i)
{
	if(i == 0){
		return 0;
	}
    	if (i == 1){
        	return 1;
	}
    	return fib(i - 1) + fib(i - 2);
}
 
int main()
{
    	int terms = 15;
	printf("Fib time\n");
	printf("%d\n", fib(terms));
    	return 0;
}
