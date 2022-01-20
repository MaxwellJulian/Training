#include <stdio.h>
#include <string.h>
main(){
	
	char kalimat[50],input;
	int a, b, c=0;
	
	printf("Masukkan kalimat: ");
	gets(kalimat);
	printf("Huruf yang ingin dihitung:");
	scanf("%c",&input);
	a = strlen(kalimat);
	
	for(b=0;b<=a-1;b++){
		if(kalimat[b]==input){
			c++;
		}
	}
	printf("Huruf %c  ada %d buah", input,c);
}
