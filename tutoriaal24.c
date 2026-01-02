#include<stdio.h>
int square(int x){
return x*x;
}
float area(int r){
    return 3.14*square(r);
}
int main(){
    int r;  
scanf("%d", &r);
    int ans= area(r);
    printf("%d", ans);
    return 0;
}
