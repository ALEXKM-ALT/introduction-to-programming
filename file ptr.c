#include <stdio.h>
#include <stdlib.h>

int main (){
	int number;
	FILE *fptr;
	
	fptr = fopen("d:\\users\\ALEX\\desktop\\c programs\\sample.txt","w");
	
	
	if (fptr == NULL) {
		printf("Error opening the file");
		exit(1);
	}
	printf("enter a number");
	scanf("%d", &number);
	
	
	fprintf(fptr, "%d" , number);
	fclose(fptr);
	
	return 0;
}