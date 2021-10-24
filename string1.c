//Arrays and pointers
//STRINGS
#include<stdio.h>
#include<string.h>

int main(){
	char password1[20], password2[20], name[20];
	printf("Enter the password: ");
	gets(password1);
	
	printf("Verify the password: ");
	gets(password2);
	strcpy(name, password1);
	puts(name);
	
	int a= strcmp(password1, password2);
	if(a==0){
		printf("Account created successfully");
	}
	
	else{
		printf("Enter correct details");
	}
	
//	int i;
//	for(i=0;name[i]!='\0';i++)
//	{
//	}
//	printf("%d", i);
	
	return 0;
}

//String manipulation
//length of a string - strlen
//comparing strings - strcmp
//string concatenation(joining) - strcat
//copying strings - strcpy
