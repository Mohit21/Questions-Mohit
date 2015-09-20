#include <iostream>
using namespace std;
 
int findCommonElement(int A[], int B[], int C[], int m, int n, int o)
{
   int i=0,j=0,k=0;
 
    while (i<m&&j<n&&k<o)
    {
         if (A[i] == B[j] && B[j] ==C[k]){   
                    cout<<A[i]<<" ";
                    i++;
                    j++; 
                    k++;
                     }
         else if (A[i]<B[j])
             i++;
         else if (B[j]<C[k])
             j++;
         else
             k++;
    }
}
 
int main()
{
    int A[] = {1, 5, 10, 20, 40, 80},m;
    int B[] = {6, 7, 20, 80, 100},n;
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120},o;
    m = sizeof(A)/sizeof(A[0]);
    n = sizeof(B)/sizeof(B[0]);
    o = sizeof(C)/sizeof(C[0]); 
    cout << "Common Elements are:";
    findCommonElement(A,B,C,m,n,o);
    cout<<endl;
    system("pause");
    return 0;
}
