/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of a given number N?

Input Format 
First line contains T, the number of test cases. This is followed by T lines each containing an integer N.

Output Format 
For each test case, display the largest prime factor of N.

Sample Input

2
10
17
Sample Output

5
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
        prime=0;
        for(int i=1;i<=n;i++){
                             k=0;
                             if(n%i==0){                                
                                 j=1;
                                 while(j<=i){                                                   
                                             if(i%j==0)
                                                         k++;                                            
                                            j++;
                                            }
                                            if(k==2){
                                                      prime=i;
                                                      }              }
                             else{
                                    continue;
                                  }                                                                    
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
