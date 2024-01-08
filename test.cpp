#include <conio.h>
#include <stdio.h>
int main()
{    int  a=2, *p ; 
	p = &a;
	*p=*p*3;
	a++;
	printf("%d", *p);
    return 0;
}
