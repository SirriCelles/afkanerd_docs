#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100

int i, k;
float list[MAX];
void ReadValues(int);
float SumValues(int);

int main(){
    printf("Enter the number of elements you would like to sum\n");
    scanf("%d",&k);
    ReadValues(k);
    float answer = SumValues(k);
    printf("The sum of %d array elements is %f", k,answer);
return 0;
}

void ReadValues (int n){
    float j;
    i=0;
   while(i<n){
    printf("Enter number\n");
    scanf("%f",&j);
    list[i]=j;
    i++;
   }
}

float SumValues(int m){
    float sum=0.0;
    i=0;
    while(i<m){
        sum=sum+list[i];
        i=i+1;
    }
    return sum;
}
