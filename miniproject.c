#include <stdio.h>
int main() {
    int n, sum;
    //Digital Root : digital root is the ssingle digit value obtained by repeatedly summing the digits of a number untail only one digit remains
    //Logic: take aninteger number as input from the user

    printf("Enter a number: ");
    scanf("%d", &n);
    //check whether the number is greater then 9
    while (n > 9) {  
        //initialize a variable sum to 0        
        sum = 0;
        while (n > 0) {  
            //extract each digit of the number using the modulus operator and add the extracted digit of sum    
            sum = sum + (n % 10);
            //remove the last digit from the number using division
            n = n / 10;
        }
        n = sum;            
    }
    printf("Digital Root = %d", n);
    return 0;
}
//Enter a number: 5789
//Digital Root = 2
