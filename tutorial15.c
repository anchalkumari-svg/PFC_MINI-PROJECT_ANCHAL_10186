#include<stdio.h>
int main(){
    int i, j;int n;
    scanf("%d", &n);
    for(int i=n; i >= 1; i--){
        for(int j=1; j <= i; j++){
            if(j == 1 || j ==i || i == j)
                printf("* ");
        
        else {
            printf("  ");
        }
    }
       printf("\n");

    }
}

