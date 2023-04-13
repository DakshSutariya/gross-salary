#include<stdio.h>

main()

{
	int gs,bs,hra,da,ta;
	
	printf("value of bs=");
	scanf("%d",&bs);
	
	printf("value of hra=");
	scanf("%d",&hra);
	
	printf("value of da=");
	scanf("%d",&da);
	
	printf("value of ta=");
	scanf("%d",&ta);
	
	hra=hra*bs/100;
	da=da*bs/100;
	ta=ta*bs/100;
	
	gs=bs+hra+da+ta;
	
	printf("gross salary = %d",gs);
	
}
