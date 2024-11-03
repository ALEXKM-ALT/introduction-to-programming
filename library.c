#include<stdio.h> //stardard i/0 functions like printf, scanf, fopen
#include<stdlib.h> //stardard library functions like exist
int main(){
	int number; //declare an integer variable to hold the number readfrom the file
	file *fptr; //declare a file pointer to handle the file operation
	//*fptr: this is the pointer to a file. a pointer just holds the memory adress of where something is stored.
	//attemp to open a file named "program.txt" in read mode ("r").
	// the file path proided is for a windows system (c driver).
	// the condition checks if the file pointer returns null (i.e., the file could be opened).
	fptr = fopen("c:\\users\\Alex\\desktop\\c programs\\ sample.txt","r");
	if (fptr == null) {
		//if the file could not be opened, display an error message
		printf("error opening the file!");
		// exist the program with a non-zero status code to indicate an error
		exit(1);
	}
	//read an integer from the file and store it in the variable 'num'
	//fscanf reads the formatted input from the file. in this case, it reads an integer (%d)
	fscanf(fptr, "%d", $number);
	
	//print the value of 'num' that was read from the file
	printf("value of n = %d", number);
	
	//close the file after reading is done to free up system resources
	fclose(fptr);
	
	//return 0 to indicate successful completion of the program
	return 0;
}
	
	
}
#include<stdio.h> //stardard i/0 functions like printf, scanf, fopen
#include<stdlib.h> //stardard library functions like exist
int main(){
	int number //declare an integer variable to hold the number readfrom the file
	file *fptr; //declare a file pointer to handle the file operation
	//*fptr: this is the pointer to a file. a pointer just holds the memory adress of where something is stored.

	//attemp to open a file named "program.txt" in read mode ("r").
	// the file path proided is for a windows system (c driver).
	// the condition checks if the file pointer returns null (i.e., the file could be opened).
	fptr = fopen("c:\\users\\Alex\\desktop\\c programs\\ sample.txt","r")
	if (fptr == null) {
		//if the file could not be opened, display an error message
		printf("error opening the file!");
		// exist the program with a non-zero status code to indicate an error
		exit(1);
	}
	//read an integer from the file and store it in the variable 'num'
	//fscanf reads the formatted input from the file. in this case, it reads an integer (%d)
	fscanf(fptr, "%d", $number);
	
	//print the value of 'num' that was read from the file
	printf("value of n = %d", number);
	
	//close the file after reading is done to free up system resources
	fclose(fptr);
	
	//return 0 to indicate successful completion of the program
}
	
	
}