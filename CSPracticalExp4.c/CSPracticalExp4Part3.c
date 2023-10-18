#include<stdio.h>
int main(){
    int n,i;
    double number, max= -9999999999.0;
    printf("Enter the number of elements = ");
    scanf("%d",&n);
    for(i=0;i<n;++i){
        printf("Enter the number %d = ", i+1);
        scanf("%lf",&number);
        if(number>max){
            max=number;
        }
        }
        printf("The maximum number is %lf\n", max);
        return 0;
    }