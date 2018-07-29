#include <stdio.h>
#include <conio.h>
void main()
{
    int num,r;
    clrscr();
    printf("\n enter the value");
    scanf("%d",&num);
    r=num%2;
    if(r==0)
    printf("\nYes and it is an even number",num);
    else
    printf("\nNo and it is an odd number",num);
    getch();
}
