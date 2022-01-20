#include <stdio.h>

int hasil(int a, int b, int c){
	if(b>0){
		printf("%i ", a);
		a*=c;
		b--;
		return hasil(a,b,c);
	}
	else return 0;
}

int main(){
	int x,y=3,z;
	printf("Masukkan Suku pertama: ");
	scanf("%i", &x);
	printf("Masukkan n Suku : ");
	scanf("%i", &z);
	hasil(x,z,y);
}
