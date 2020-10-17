#include <stdio.h>

int add(int, int);
int sub(int, int);

int main()
{

printf("Addition=%d",add(10,20));
printf("\nSubtraction=%d\n",sub(30, 5));

return 0;
}

int add(int a, int b)
{
return a+b;
}

int sub(int a, int b)
{
return a-b;
}
