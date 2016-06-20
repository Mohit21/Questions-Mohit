#include<iostream>
#include<set>

using namespace std;
 
int main(){
int T;
cin>>T;
while(T--){	
	int N;
	set<long long int> s;
    set<long long int>::iterator it;
	cin>>N;
	long long int A[N],n;
	for(int i=0;i<N;i++){
		cin>>A[i];
		}
	long long int count=0,count1=0,sum=0;
	int flag=0;
	for(int i=0;i<N-2;i++){
		sum=A[i]+A[i+1];
		if(count==0 && (A[i+2]==sum)){
			count+=3;
			flag=0;
		}
		else if(A[i+2]==sum){
			++count;
			flag=0;
		}
		else{
             flag=1;
             //cout<<endl<<count<<endl;
             if(count1<count){
                             count1=count;
                             s.insert(count);
                             count=0;
                             
                             }
             else{
                  count=0;
                  }
             }
	} 
	if(flag==1){
	           cout<<count1<<endl;
               }
	else
	    cout<<count<<endl;
}
system("pause");
return 0;
}
 
