#include<stdio.h>
#include<stdlib.h>


int main(){

	char alphabet='A'; 
	
	printf("alphabet = %c\n",alphabet);
	
	//Setting a bit
	alphabet |= 1<<1;
	
	printf("alphabet = %c\n",alphabet);	
	
	//Clearing a bit
	alphabet &=~ (1<<1);
	
	printf("alphabet = %c\n",alphabet);
	
	//Toggling a bit
	alphabet ^= 1<<1; 
	
	printf("alphabet = %c\n",alphabet);
	
	getchar();
	return 0;
} 
