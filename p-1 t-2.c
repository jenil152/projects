#include<stdio.h>

main()

{
	int a,b;
	printf("Enter value a=");
	scanf("%d",&a);
	
	printf("Enter value b=");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping value a=%d&b=%d",a,b);
}
