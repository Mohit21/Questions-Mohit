/*
Problem Statement

This problem is a programming version of Problem 10 from projecteuler.net

The sum of the primes below 10 is 2+3+5+7=17.

Find the sum of all the primes not greater than given N.

Input Format 
The first line contains an integer T i.e. number of the test cases. 
The next T lines will contains an integer N.

Output Format 
Print the value corresponding to each test case in seperate line.

Constraints 
1=T=104 
1=N=106

Sample Input

2
5
10
Sample Output

10
17
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int prime2[100000],t,n,i,prime=1,m,j,k,q=0;
    cin>>t;
    while(t!=0){
        cin>>n;
        if(n>0){
                
        prime=0;
        for(int i=1;i<n;i++){
                                 k=0;                                
                                 j=1;
                                 while(j<=i){                                                   
                                             if(i%j==0)
                                                         k++;                                            
                                            j++;
                                            }
                                            if(k==2){
                                                      prime+=i;
                                                      }   
                                           }
                                           }
                             else{
                                    continue;
                                  }                                                                    
                
                             
        prime2[q]=prime;
        q++;
        t--;
    }
    m=0;
    while(m<q){
        cout<<prime2[m]<<endl;
        m++;
    }
    system("pause");
    return 0;
}
