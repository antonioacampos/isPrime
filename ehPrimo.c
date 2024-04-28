#include<stdio.h>
#include<stdlib.h>

int ehPrimo(int num){
    if (num<=1)
        return 0;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
            return 0;    
    }
    return 1;
}

int main(){
    int result = ehPrimo(11);
    printf("%d",result);
    return 0;
}