#include<stdio.h>
int main(){
    int age, income;
    char loanstatus;
    
	// input
	   printf("age");
    scanf("%d",&age);
    
	// check loan qualification
    if (age>=21 &&income>=21000) 
	{loanstatus = 'Yes';};
    {loanstatus ='No';};
	
	//output
  printf("conglatulations you qualify to get a loan");

  return 0;
}