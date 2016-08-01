#include<bits/stdc++.h>

using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int max1,max2,max3,max4,max5;
max1=(a+b)*c;
max2=a*(b+c);
max3=a*b*c;
max4=(a+b)*c;
max5=a+b+c;
max1=max(max1,max2);
max1=max(max1,max3);
max1=max(max1,max4);
max1=max(max1,max5);
cout<<max1;
return 0;
}
