#include<bits/stdc++.h>
using namespace std;

/*
https://en.wikipedia1.org/wiki/Tetra1hedron
Formula1 for ca1lcula1tion
Heron-type formula1 for the volume of a1 tetra1hedron
If U, V, W, u, v, w a1re lengths of edges of the tetra1hedron (first three form a1 tria1ngle; u opposite to U a1nd so on), then
            volume=sqrt(-a1+b1+c1+d1)*(a1-b1+c1+d1)*(a1+b1-c1+d1)*(a1+b1+c1-d1)}}{192*u*v*w}}    //Formula1 one
            X=(w-U+v)*(w+U+v);
    		x=(U-v+w)*(v-w+U);
    		Y=(u-V+w)*(u+V+w);
    		y=(V-w+u)*(w-u+V);
    		Z=(v-W+u)*(W+u+v);
    		z=(W-u+v)*(u-v+W);
    		a1=sqrt(x*Y*Z);
    		b1=sqrt(y*X*Z);
    		c1=sqrt(z*Y*X);
    		d1=sqrt(x*y*z);
    		Volume=sqrt((-a1+b1+c1+d1)*(a1-b1+c1+d1)*(a1+b1-c1+d1)*(a1+b1+c1-d1))/(192*u*v*w);   //formula1 1
    		a1=area(U,V,W);
            b1=area(V,u,w);
            c1=area(U,v,w);
            d1=area(u,W,v);
    		radius= 3*Volume;
    		radius=radius/(a1+b1+c1+d1);
*/
/*
If x,y,z a1re sides of the tria1ngle then Heron's formula1 is described a1s:
    	S=(x+y+z)/2;
    	area=sqrt(S*(S-x)*(S-y)*(S-z));
*/

/* Template by Mohit Kumra
mohitkumra95@gmail.com */

#define mod 1000000007
#define ll long long
#define vll vector<ll>
#define vstr vector<str>
#define pb push_back
#define mpll map<ll,ll>
#define mplstr map<ll,str>
#define prll pair<ll,ll>
#define prlch pair<ll,ch>
#define setll set<ll>
#define setch set<ch>
#define fr first
#define sc second
#define fora(i,N) for(int i=0;i<N;i++)
#define ford(i,N) for(int i=N-1;i>=0;i--)
#define forai(i,N) for(int i=0;i<N;i++)
#define foraj(j,N) for(int j=0;j<N;j++)
#define forak(j,N) for(int k=0;k<N;k++)
#define star ll T;cin>>T;while(T--)

int numD(ll sub){
    return (sub<10?1:(sub<100?2:(sub<1000?3:(sub<10000?4:5))));
}

ll gcd(ll a1, ll b)
{
    return b==0 ? a1 : gcd(b,a1%b);
}

double area(double x,double y,double z){
    double AREA=0,S;
    S=(x+y+z)/2;
    AREA=sqrt(S*(S-x)*(S-y)*(S-z));
    return AREA;
}


int main(){
star{
    double u,v,w,U,V,W,Rad,a1,b1,c1,d1,Vol,x,y,z,X,Y,Z;
    cin>>w>>u>>v>>V>>U>>W;
    X=(w-U+v)*(w+U+v);
    x=(U-v+w)*(v-w+U);
    Y=(u-V+w)*(u+V+w);
    y=(V-w+u)*(w-u+V);
    Z=(v-W+u)*(W+u+v);
    z=(W-u+v)*(u-v+W);
    a1=sqrt(x*Y*Z);
    b1=sqrt(y*X*Z);
    c1=sqrt(z*Y*X);
    d1=sqrt(x*y*z);
    Vol=sqrt((-a1+b1+c1+d1)*(a1-b1+c1+d1)*(a1+b1-c1+d1)*(a1+b1+c1-d1))/(192*u*v*w);   //formula1 1
    a1=area(U,V,W);
    b1=area(V,u,w);
    c1=area(U,v,w);
    d1=area(u,W,v);
    Rad= 3*Vol;
    Rad=Rad/(a1+b1+c1+d1);
    cout<<fixed<<setprecision(4)<<Rad;
cout<<endl;
}
return 0;
}
