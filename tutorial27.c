#include<stdio.h>
int main(){
    int i, j;
     char ch='A';
     int n;
     scanf("%d", n);
    for(int i=1; i <= n; i++){
        for(int j=1; j <= i; j++){
            printf("%c ", ch);
            ch++;
        
        }
        printf("\n");
        ch++;
        
    }
        return 0;
}