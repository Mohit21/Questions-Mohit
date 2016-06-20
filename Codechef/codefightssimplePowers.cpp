#include<iostream>
#include<string.h>
#include<set>
#include<vector>
#include<cmath>
#include<cstdlib>
using namespace std;
/*
int Simple_powers(int a, int b){
    long long x;
    vector<int> v;
    vector<int>::reverse_iterator rit;  
    x=((int)((pow((double)a,b))+(pow((double)b,a)))%1000000007);
    cout<<x<<endl;
    int mod;
    char mod1;
    while(x!=0){
        mod=x%2;
        x/=2;
        v.push_back(mod);
    }
    long long res=0,k;
    int i=0;
    for(rit=v.rbegin();rit!=v.rend();rit++){
        k=*rit;
        k*=3;
        res+=(int)(pow((double)k,i));
        i++;
    }
    return res;
}
*/

int Simple_powers(int a, int b){
    long long x;
    //vector<int> v;
    //vector<int>::reverse_iterator rit;  
    int stack[1000000],size;
    x=((int)((pow((double)a,b))+(pow((double)b,a)))%1000000007);
    //cout<<x<<endl;
    int mod,i=0;
    char mod1;
    while(x!=0){
        mod=x%2;
        x/=2;
        stack[i++]=mod;
    }
    long long res=0,k;
    //for(rit=v.rbegin();rit!=v.rend();rit++){
     for(int j=i-1;j>=0;j--){
        //k=*rit;
        k=stack[j];
        k*=3;
        res+=(int)(pow((double)k,i));
        //i++;
    }
    return res;
}


int main(){
int a,b;
cin>>a>>b;
cout<<Simple_powers(a,b);
system("pause");
return 0;
}
