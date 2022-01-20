#include <stdio.h>
int a[100];
int j,t,i,n,cari,idx,low,high, mid;


main (){
    printf("Banyak angka : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("Angka %d : ",i);
        scanf("%d",&a[i]);
    }

    printf("Angka yang dicari : ");
    scanf("%d",&cari);

    low=1;
    high=n;
    idx=0;
    while ((low<=high) && (idx==0)){
        mid=(low+high)/2;
        if (a[mid]==cari)
        idx=mid;

        else if (a[mid]<cari)
        low=mid+1;

        else high=mid-1;
    }

    for(i=1; i<=(n-1); i++)
    {
        for(j=n; j>=(i+1); j--)
        {
            if(a[j-1]>a[j])
            {
                t=a[j-1];
                a[j-1] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\nAngka yang sudah terrurut : ");
    for(i=1; i<=n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    if (idx!=0)
    printf("Angka %d ditemukan pada urutan ke-%d",cari,idx);
    else printf("Data tidak ditemukan");

    return 0;
}