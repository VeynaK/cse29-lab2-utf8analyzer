#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

int  is_ascii(char string[]){
	for(int i =1; string[i] != '\0'; ++i){
		if((unsigned char) string[i] >127){
		       	return 0;
		}       	
	}
	return 1; 






}







int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: utf8analyzer \"<UTF-8 encoded string>\"\n");
        return 1;
    }
	char a[] = "My 🐩’s name is Erdős.";
	bool b = is_ascii(argv[1]);
	if(b == 0){
		printf("false\n");
	}
	else{
		printf("true\n");	
	}
	return 0; 
    // implement the UTF-8 analyzer here
}
