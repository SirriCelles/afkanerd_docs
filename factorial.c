#include <stdio.h>
 int factorial(int);

 int factorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        return (n * int factorial(int n-1));
    }

int main(){
    printf("the factorial of 0 is = %d",factorial(0));
    return 0;
}
