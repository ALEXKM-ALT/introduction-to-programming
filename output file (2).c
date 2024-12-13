#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch[200];
FILE *fp;
fp = fopen("alex.txt","r");
fgets(ch,200,fp);
printf("%s",ch);

if (fp == NULL) {
		printf("Error opening the file");
	exit(1);
	}
else
{
	printf("opened successfully");
}
	return 0;
}