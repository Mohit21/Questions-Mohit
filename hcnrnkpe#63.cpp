/*
This problem is a programming version of Problem 63 from projecteuler.net
The 5-digit number, 16807=7^5, is also a fifth power. Similarly, the 9-digit number, 134217728=8^9, is a ninth power.
Given N, print the N-digit positive integers which are also an Nth power?

Sample Input

2
Sample Output

16
25
36
49
64
81
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<math.h>

using namespace std;

int main() {
    system("cls");
    long unsigned int N,k,N1,n,n1;
    cin>>N;
    for(unsigned int i=1;i<=10000000;i++){
            N1=N;
            n=1;
            while(N1!=0){
                         n=n*i;
                         N1--;
                         }
            n1=n;
            k=0;
            while(n!=0){
                         n=n/10;
                         k++;
                        }             
            if(k==N){
                    cout<<n1<<endl;
                     }
            else if(k<N){
                     continue;
                     }
            else{
                 break;
                 }
            }
            system("pause");
    return 0;
}
