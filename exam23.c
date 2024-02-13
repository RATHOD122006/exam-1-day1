#include<stdio.h>
main()
{
	int a,b,c,d;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);

	if (a>b & a>c & a>d){
		printf("a is max");
	} else if (b>c & b>d){
		printf("b is max");
	} else if (c>d){
		printf("c is max");
	} else {
		printf("d is max");
	}
}