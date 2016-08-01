#include <iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int T,N,K;
    string str;
    set<int> s;
    
    cin>>T;
    while(T--){
    	cin>>N;
    	cin>>K;
    	
    	cin>>str;
    	s.insert(str.size());
    	if(s.size()>1){
    		cout<<"Not possible"<<endl;
    	}
    	else{
    		cout<<"Possible"<<endl;
    	}
    }
    system("pause");
    return 0;
}
