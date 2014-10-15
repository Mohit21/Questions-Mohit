#include<iostream>
#include<math.h>
using namespace std;

int main()
{
printf("\n\n");
    int rows=5,i,j,space,r;
    r=rows;
    printf("\n\n\t\t\t\tDiamond BC's");
    printf("\n\n");
    for(i=0;i<=rows;++i)
    {
                       for(space=rows-i;space>0;space--)
                       printf(" ");
                       for(j=0;j<2*i-1;++j)
                       printf("*");
                       printf("\n");
                       }
     for(i=rows-1;i>=1;--i)
    {
                        for(space=0;space<rows-i;++space)
                        printf(" ");
                        for(j=0;j<2*i-1;++j)
                        printf("*");
                        //for(j=0;j<i-1;++j)
                        //printf("*");
                        printf("\n");
    }
    system("pause");
    return 0;
    }
