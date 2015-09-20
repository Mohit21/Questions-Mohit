#include<iostream>

using namespace std;

int main(){
    
    int i =0;
    int &j=i;
    i=7;
    j=2;
    cout<<"i:"<<i<<endl<<"j:"<<j<<endl;
    
    system("pause");
    return 0;
    }
