#include <stdio.h>
#include <string.h>

char id[50],pass[50];
int x=3;

int main(){
	system("cls");
	printf("kesempatan anda tinggal %i kali lagi\n", x);
	x--;
	printf("Masukkan ID\t\t:");
	gets(id);
	printf("Masukkan Password\t:");
	gets(pass);
	if(strcmp(id,"admin")==0 && strcmp(pass,"admin")==0){
		printf("Login Sukses\n");
		system("pause");
	}
	else{
		if(x>0){
			if(strcmp(id,"admin")!=0  || strcmp(pass,"admin")!=0){
				printf("ID dan Password salah, Silahkan coba lagi!");
				system("pause");
				main();
			}
		}
		else{
			printf("Login gagal!! kesempatan anda telah habis!!");
			system("exit");
		}
	}
}
