#include <stdio.h>
#define N 20

char nama[N][20];
int i, j, k, l;

main()
{
    int jml;
    char jumlah[10];
           
    printf("Jumlah string = ");
    gets(jumlah);
    jml=atoi(jumlah);
           

    for (i=0;i<jml;i++){
        printf("String %d\t: ",i+1);
        gets(&nama[i][0]);
        }
           
        bubble(jml);
           

        printf("\nHasil pengurutan: ");
        for (i=0;i<jml;i++){
            printf("%-1s ",&nama[i][0]);
            }
}

bubble(n)
int n;
{
char temp;
for (i=1;i<=n;i++){
    for (j=i;j<n;j++){
        for (l=0;l<20;l++){
             if (nama[i-1][l]<nama[j][l]){
                break;
            }
            if (nama[i-1][l]>nama[j][l]){
                for (k=0;k<20;k++){
                    temp=nama[i-1][k];
                    nama[i-1][k]=nama[j][k];
                    nama[j][k]=temp;
                    }
                    break;
                }
            }
        }
    }
}
