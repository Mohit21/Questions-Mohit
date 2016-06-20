#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
vector<long long int>v;
vector<long long int>::iterator it;
long long int N,n;
int T,minsum,min;
cin>>T;
while(T--){
	minsum=0;
	cin>>N;
	for(int i=0;i<N;i++){
	cin>>n;
	v.push_back(n);	
	}
	it=v.begin();
	min=*it;
	for(it=v.begin()+1;it!=v.end();it++){
		if(min>*it){
			min=*it;
		}
	}
	minsum=N*min;
	cout<<minsum<<"\n";
	v.clear();
    }
 system("pause");
return 0;
} 
/*#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int getminsum(vector<long long int> v1){
    vector<long long int>::iterator it,it1;
    int sum=0;
    for(it=v1.begin;it!=v1.end;it++){
                                       for(it1=it+1;it1!=v1.end;it1++){
                                                                       if(*it1>*it){
                                                                                    *it1-=*it;
                                                                                    }
                                                                       }
                                       }
    for(it=v1.begin();it!=v1.end();it++){
                                       sum+=*it;
                                       }
    return sum;
    }

int main(){
    vector<long long int> v;
    int T;
    long long int N,i,minsum,n;
    cin>>T;
    while(T--){
               minsum=0;
               cin>>N;
           for(i=0;i<N;i++){
                            cin>>n;
                            v.push_back(n);
                   }
           minsum=getminsum(v);
           cout<<minsum<<"\n";
                   }
    system("pause");
    return 0;
    
    }
*/
