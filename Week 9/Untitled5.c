void input(int x){ 
	if (x > 0){ 
	printf("Nama : "); gets(mhs.nama); 
	printf("NIM : "); gets(mhs.nim); 
	x=x-3; 
	input(x); 
	} 
}
