#include<iostream>
#include<stdlib>


using namespace std;

class Func{
int no;

public :
    void fun(int n,int no){
    int first = n;
    int sec = n+1;

   cout<<first<<" "<<sec<<" ";
    int count=0;
        while(count!=no-2){
            int third=first+sec;
            cout<<third<<" ";
            first=sec;
            sec=third;
            count++;
        }
        cout<<"\n";
}

int fun(int n){
    if(n==0){
        return 1;
    }
    else
        return(n*fun(n-1));
    }


};

int main(){
    int no;

do{
    cout<<"1. Print Fib series\n";
    cout<<"2. Print Factorial\n";
    cout<<"3. Exit\n";
    cin>>no;
    switch(no){
    case 1:

            Func fib;
            int n,no;
            cout<<"Enter the starting point and total no\n";
            cin>>n>>no;
            fib.fun(n,no);

        break;

    case 2:
            Func fact;
            cout<<"Enter the no \n";
            cin>>no;
            cout<<"The Factorial is "<<fact.fun(no)<<"\n";

            break;
    case 3:
        exit(1 );
    }

}while(no<3);

system("pause");
return 0;

}
