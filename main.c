#include<stdio.h>
#include "main.h"
int main()
{
	sum();
	diff();
	return 0;
}
void sum()
{
	int a=10,b=20,sum;
	sum=a+b;
	printf("\nSum : %d\n",sum);

}

void diff()
{
	int diff = 10-20;
        printf("\nDiff : %d\n",diff);

}
