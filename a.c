#include <stdio.h>
int foo(int a,int b)
{
    return a+b;
}

int main()
{
    int a = foo(7,8) + foo(9,10);
    printf("%d\n",a);
    return 0;
}
