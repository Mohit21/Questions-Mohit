#include <iostream>
#include<vector>
#include<stack>

using namespace std;
bool checkPalin(long long K){
	long a,b=0,c=0;
	a=K;
	while(K!=0){
		b=K%10;
		c=(c*10)+b;
		K=K/10;
	}
	if(a==c)
	return true;
	else
	return false;
}
bool allN(int A[],int n){
     int flag=1;
     for(int i=0;i<n;i++){
              if(A[i]!=9){
                          flag=0;
                          }
              }
     if(flag==1){
                 cout<<"1";
                 for(int i=0;i<n-1;i++){
                         cout<<"0";
                         }
                       cout<<"1";            
                 }
     else
     return false;
     }

void genPalin(int A[],int n){
     int mid=n/2;
     bool leftside=false;
     int i=mid-1;
     int j=(n%2==0)?mid+1:mid;
     while(i>=0 && A[i]==A[j]){
                i--;
                j++;
                }
     if(i<0||A[i]<A[j]){
                            leftside=true;
                            }
     while(i>0){
                A[j]=A[i];
                i--;
                j++;
                }
     if(leftside==true){
                        int carry=1;
                        i=mid-1;
                        if(n%2==1){
                                   A[mid]=carry;
                                   carry=A[mid]/10;
                                   A[mid]%=10;
                                   j=mid+1;
                                   }
                        else{
                             j=mid;
                             }
                        while(i>=0){
                                    A[mid]=carry;
                                   carry=A[mid]/10;
                                   A[mid]%=10;
                                    A[j++]=A[i--];
                                    }
                        }     
     }
     
void print(int A[],int n){
     for(int i=0;i<n;i++){
              cout<<A[i];
              }
     }     
void Palin(int A[],int n){
     if(allN(A,n)){
              
              }
     else{
          genPalin(A,n);
          print(A,n);
          }
     }
int main() {
	// your code goes here
	long long T,K,size;
	stack<int> s;
	cin>>T;
	while(T--){
               size=0;
		       cin>>K;
		       if(checkPalin(K)==false){
                                        int K1=0;
                                        while(K!=0){
                                                    K1=K%10;
                                                    //cout<<K1<<endl;
                                                    s.push(K1);
                                                    size++;
                                                    }
              int A[size],i=0;
              for(int i=0;i<size;i++){
                                                 A[i++]=s.top();
                                                 s.pop();
                                                 cout<<endl;
                                                 cout<<A[i];
                                                 }
              Palin(A,size);                                
			}
		else{
			cout<<K<<endl;
            }
			
	}
    system("pause");
	return 0;
}
