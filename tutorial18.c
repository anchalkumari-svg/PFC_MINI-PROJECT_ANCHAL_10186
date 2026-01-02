#include<stdio.h>
int main(){
    int i, j;
    int n;
    scanf("%d", &n);
    for(int i=2; i <= 5; i++){
        for(int j=1; j <= i; j++){
            printf("* ");
    }
    for(int i= 1; i >= n)
    printf("\n");
}
return 0; 
}