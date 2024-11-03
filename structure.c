#include<stdio.h>
#include<string.h>
#include<string.h>
struct student{

char name[40];
int phone;
char reg_no[20];
char email [50];
float height;
}
student1, student2;


int main(){
	strcpy(student1.name,"Alex Kinyua Mwangi");
	student1.height =7.1;
	strcpy(student1.reg_no, "ct101\g\23719\24");
	strcpy(student1.email, "mwangialexkinyua8@gmail.com");
	student1.phone = 0740164414;
	
printf("name: %s \n", student1.name);
printf("height: %f \n", student1.height);
printf("reg-no: %s \n", student1.reg_no);
printf("email: %s\n", student1.email);
printf("pnone: %d \n", student1.phone);

return 0;
}                     