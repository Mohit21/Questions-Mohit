#include <iostream>
#include<cstring>
using namespace std;
void permute(char* a, int i, int n)
{
    if(i==n)
    {
        cout<<a<<endl;
    }
    else
    {
        for(int j=i; j<n; j++)
        {
            swap(a[i],a[j]);
            permute(a,i+1,n);
            swap(a[j],a[i]);
        }
    }
}
int main()
{
	char a[1000];		
	cin>>a;
    	int n = sizeof(a)/sizeof(a[0]);
	permute(a,0,n-1);
	return 0;
}
