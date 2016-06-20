#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

int main(){
string str1,str2;
int T;
cin>>T;
while(T--){
	int activity;
	cin>>activity;
	cin>>str1;
	long long sum=0;
    int count=0;
	if(str1.compare("INDIAN")==0){
		for(int i=0;i<activity;i++){
			cin>>str2;
			if(str2.compare("CONTEST_WON")==0){
				int rank;	
				cin>>rank;
				if(rank>=1&&rank<=20){
					sum=sum+300+(20-rank);
				}
				else{
					sum+=300;
				}
			}
			else if(str2.compare("TOP_CONTRIBUTOR")==0){
                 sum+=300;
                 }
            else if(str2.compare("BUG_FOUND")==0){
                 int sever;
                 cin>>sever;
                 if(sever>=50&&sever<=1000){
                                            sum+=sever;
                                            }
                 }
            else if(str2.compare("CONTEST_HOSTED")==0){
                 sum+=50;
                 }
		}
		while(sum>=200){
                        sum-=200;
                        count++;
                        }
         cout<<count;
	}
	else if(str1.compare("NON_INDIAN")==0){
	     for(int i=0;i<activity;i++){
			cin>>str2;
			if(str2.compare("CONTEST_WON")==0){
				int rank;	
				cin>>rank;
				if(rank>=1&&rank<=20){
					sum=sum+300+(20-rank);
				}
				else{
					sum+=300;
				}
			}
			else if(str2.compare("TOP_CONTRIBUTOR")==0){
                 sum+=300;
                 }
            else if(str2.compare("BUG_FOUND")==0){
                 int sever;
                 cin>>sever;
                 if(sever>=50&&sever<=1000){
                                            sum+=sever;
                                            }
                 }
            else if(str2.compare("CONTEST_HOSTED")==0){
                 sum+=50;
                 }
		}
		
		while(sum>=400){
                        sum-=400;
                        count++;
                        }
         cout<<count;
	}
    cout<<endl;
}

system("pause");
return 0;
}
