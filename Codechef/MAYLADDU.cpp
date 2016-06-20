#include<iostream>
#include<string.h>
using namespace std;

int main(){
int T,rnk,sev,act;
cin>>T;
while(T--){
    string str,str1;
    long long int rwdSum=0,count1=0;
    cin>>act;
    cin>>str;
    if(str.compare("INDIAN")==0){
        for(int i=0;i<act;i++){
            cin>>str1;
            if(str1.compare("CONTEST_WON")==0){
                cin>>rnk;
                if(rnk<=20){
                    rwdSum+=300;
                    rnk=20-rnk;
                    rwdSum+=rnk;
                }
                else{
                    rwdSum+=300;
                }
            }
            else if(str1.compare("TOP_CONTRIBUTOR")==0){
                rwdSum+=300;
            }
            else if(str1.compare("BUG_FOUND")==0){
                cin>>sev;
                if(sev>=50 && sev<=1000){
                    rwdSum+=sev;
                }
            }
            else if(str1.compare("CONTEST_HOSTED")==0){
                rwdSum+=50;
            }
        }
        while(rwdSum>=200){
            rwdSum-=200;
            count1++;
        }
    }
    else if(str.compare("NON_INDIAN")==0){
            for(int i=0;i<act;i++){
            cin>>str1;
            if(str1.compare("CONTEST_WON")==0){
                cin>>rnk;
                if(rnk<=20){
                    rwdSum+=300;
                    rnk=20-rnk;
                    rwdSum+=rnk;
                }
                else{
                    rwdSum+=300;
                }
            }
            else if(str1.compare("TOP_CONTRIBUTOR")==0){
                rwdSum+=300;
            }
            else if(str1.compare("BUG_FOUND")==0){
                cin>>sev;
                if(sev>=50 && sev<=1000){
                    rwdSum+=sev;
                }
            }
            else if(str1.compare("CONTEST_HOSTED")==0){
                rwdSum+=50;
            }
        }

        while(rwdSum>=400){
            rwdSum-=400;
            count1++;
        }
    }
    cout<<count1<<endl;
}
return 0;
}
