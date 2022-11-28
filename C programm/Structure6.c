#include<stdio.h>

struct book
{
    char title[20];
    char auther[20];
    int pages;
    float price;
};

int main();
{
    struct book Cbook
    Cbook.title = "The power of positive attitude";
    Cbook.auther = "S Mukund";
    Cbook.pages = 500;
    Cbook.price = 406.67;

    printf("%s by %s is of %f ruppes",Cbook.title, Cbook.auther, Cbook.price);

}