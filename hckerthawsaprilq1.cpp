#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	long int t,a=0,k=0,ans[10000],l,m=1,n=1;
	int f=0;
    char str[1000];
    cin>>t;
	while(t!=0){
                int len=0;
    fflush(stdin);
		gets(str);
		while(str[a]!='\0'){
		len++;
		a++;
    }
    cout<<"\nlen="<<len;
		if(len==2){
			ans[k]=1;
			k++;
		}
		else{
			if(len%2==0&&len!=2){
				for(int i=0,j=(len/2);i<len/2,j<len;i++,j++){
					if(str[i]==str[j]){
							f=0;
					}
					else{
						f=1;
					}
				}
				if(f==0){
					ans[k]=0;
					k++;
				}
				else{
					ans[k]=1;
					k++;
				}
			}
			else{
				for(int i=0;i<len;i++){
                        for(int j=1;j<len;j++){
                                m=1;
                                if(str[i]==str[j]){
                                                   m++;
                                                   }
                                                   if(m==2){
                                                            n=0;
                                                            }
                                }
                                }
				if(n==0){
					ans[k]=0;
					k++;
				}
				else if(n==1){
					ans[k]=1;
					k++;
				}	
				}	
			}
		t--;
	}
	l=0;
	while(l<k){
		if(ans[l]==0){
			cout<<"Yes"<<endl;
		}
		else if(ans[l]==1){
			cout<<"No"<<endl;	
		}
		l++;
		
	}
	system("pause");
	return 0;
	
}
