#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    set<int> s;
    vector<int> v;
    set<int>::iterator it;
    vector<int>::iterator it1;
    int A[]={1, 2, 1, 3, 4, 2, 3},k,k1;
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"\nsizeof of array!!:"<<n;
    cout<<"\nEnter the value for k:";
    fflush(stdin);
    cin>>k;
    k1=k;
    for(int i=0;i<=(n-k);i++){
            for(int j=i;j<k1;j++){
                    s.insert(A[j]);                    
                    v.push_back(A[j]);
                    }
            k1++;
            cout<<"\n-->Distinct elements:"<<s.size()<<endl;
            for(it=s.begin();it!=s.end();it++){
                  cout<<"-->"<<*it;
                  }
            cout<<"\n-->Sub-array:"<<endl;
            for(it1=v.begin();it1!=v.end();it1++){
                                               cout<<"-->"<<*it1;
                                               }
            s.clear();
            v.clear();
            cout<<"\n";
            }
    system("pause");
    return 0;
    }
