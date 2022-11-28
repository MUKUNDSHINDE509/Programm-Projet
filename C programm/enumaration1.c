#include<stdio.h>

enum colour {red,green=red,blue=green};

int main();
{

    printf("The valu of enumaration constant are %d%d%d",red,green,blue);
};    