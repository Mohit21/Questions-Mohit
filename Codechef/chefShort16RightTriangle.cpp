#include<bits/stdc++.h>

using namespace std;

int main(){
    long long T;
    cin>>T;
    while(T--){
            double H,S,h2,sum,deter,sub,B1,H1,h1;
            vector<double> v;
            vector<double>::iterator it;
            v.clear();
            cin>>H>>S;
            h1=pow(H,2);
            deter= ((h1) - (4*S));
            if(deter<0){
                cout<<-1;
            }
            else{
                H1=(sqrt(h1+(4*S))+sqrt(h1-(4*S)))/2;
                B1=(2*S)/H1;
                v.push_back(H);
                v.push_back(H1);
                v.push_back(B1);
                sort(v.begin(),v.end());
                for(it=v.begin();it!=v.end();it++){
                    cout<<fixed<<setprecision(6)<<*it<<" ";
                }
           }

            cout<<endl;
            }
return 0;
}

/*
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long T;
    cin>>T;
    while(T--){
            double H,S,h2,deter,s1,h1,x1,x2,B1,H1;
            vector<double> v;
            vector<double>::iterator it;
            cin>>H>>S;
            s1=pow(S,2);
            h1=pow(H,2);
            h2=pow(H,4);
            deter= ((h2) - (4*4*s1));
            if (deter > 0) {
                x1 = (h1 + sqrt(deter)) / (2*1);
                x2 = (h1 - sqrt(deter)) / (2*1);
                if(x1>=0 &&x2<0){
                    H1=sqrt(x1);
                    B1=(2*S)/H1;
                }
                else if(x1<0 && x2>=0){
                    H1=sqrt(x1);
                    B1=(2*S)/H1;
                }
                else{
                    if(x1>x2){
                        H1=sqrt(x1);
                        B1=(2*S)/H1;
                    }
                    else{
                        H1=sqrt(x1);
                        B1=(2*S)/H1;
                    }
                }
                v.push_back(H);
                v.push_back(B1);
                v.push_back(H1);
                sort(v.begin(),v.end());
                for(it=v.begin();it!=v.end();it++){
                    cout<<fixed<<setprecision(6)<<*it<<" ";
                }
            }
            else if (deter == 0) {
                x1 = (-h1 + sqrt(deter)) / (2*1);
                H1=sqrt(x1);
                B1=(2*S)/H1;
                if(H1==0){
                    cout<<-1;
                }
                else{
                    v.push_back(H);
                    v.push_back(B1);
                    v.push_back(H1);
                    sort(v.begin(),v.end());
                    for(it=v.begin();it!=v.end();it++){
                        cout<<fixed<<setprecision(6)<<*it<<" ";
                    }
                }
            }
            else {
                cout<<-1;
            }
    cout<<endl;
    v.clear();
    }
return 0;
}
*/
