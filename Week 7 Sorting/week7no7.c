#include <stdio.h>
 

int main(){
    int x= 7, y=8;
    while(1){
        x =x + y;
        y =x-y;
        x= x-y;
        printf(x);
    }
}