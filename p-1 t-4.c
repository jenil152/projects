#include<stdio.h>

main()

{
	int gs,bs,hra,da,ta;
	
	printf("Enter your base salary :");
	scanf("%d",&bs);
	
	printf("Enter your hra :");
	scanf("%d",&hra);
	
	printf("Enter your da :");
	scanf("%d",&da);
	
	printf("Enter your ta :");
	scanf("%d",&ta);
	
	hra=hra*bs/100;
	da=da*bs/100;
	ta=ta*bs/100;
	
	gs=bs+hra+da+ta;
	
	printf("Gross salary=%d",gs);
}
