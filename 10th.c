#include <stdio.h>
int add(int, int,int);
 void main()
{
    int a =1, b = 2, c=9,d;
    c=add(a,b,c);
    printf("d=%d",c);
}
int add(int a,int b,int c)
{
    return (a+b+c);

}