#include<stdio.h>
main()
{
	float gs,bs,hra,da,ta;
	printf ("enter your bacis salary\n");
	scanf("%f",&bs);
	
	printf("enter hra=");
	scanf("%f",&hra);
	
	printf("enter da=");
	scanf("%f",&da);
	
	printf("enter ta=");
	scanf("%f",&ta);
	
	hra=(hra*bs)/100;
    da=(da*bs)/100;
    ta=(ta*bs)/100;
    gs=bs,hra,da,ta,
    
    printf("gross salary%f\n",&gs);
    return 0;
	}



 