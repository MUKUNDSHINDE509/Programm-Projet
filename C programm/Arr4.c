#include<stdio.h>
int main()
{
    int a = 10;
    const int *ptr = &a;
    ptr=50;
    printf("The changed value of pointed object is %d",*ptr);
    return 0;
}