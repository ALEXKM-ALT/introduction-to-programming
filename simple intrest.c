//program to calculate simple intrest
#include<stdio.h>
int main(){
    //declaring and initialization
    float principle, rate, time, intrest;
   
    //working simple intrest
	printf("enter principle");
    scanf("%f",&principle);
    printf("enter rate");
    scanf("%f",&rate);
    printf("enter time in years");
    scanf("%f",&time);
    // formula to calculate simple intrest
    intrest = (principle * rate *time);
    // formula to calculate simple intrest
    intrest=(principle*rate*time)/100;
    // print simple intrest
    printf("simple intrest is %f\n", intrest);
    
    return 0;
}