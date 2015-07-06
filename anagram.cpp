/*
Check whether two strings are anagram of each other
Write a function to check whether two given strings are anagram of each other or not. 
An anagram of a string is another string that contains same characters, only the order of characters can be different.
For example, “abcd” and “dabc” are anagram of each other
*/

#include<iostream>
#include<cmath>
#define max 256
using namespace std;

bool anagram(char A[],int n1,char B[],int n2){
     int count1[max],count2[max],i;
     for(i=0;i<max;i++){
             count1[i]=0;
             count2[i]=0;
             }
     for(i=0;A[i]!='\0'&&B[i]!='\0';i++){
             count1[A[i]]++;
             count2[B[i]]++;
             }
     for(int i=0;i<max;i++)
             if(count1[i]!=count2[i])
                             return false;
             return true;
             
     }


int main(){
    int len1,len2;
    char ch1[]="mohit kumra";
    char ch2[]="tihom armuk";
    len1=sizeof(ch1)/sizeof(ch1[0]);    
    len2=sizeof(ch2)/sizeof(ch2[0]);
    cout<<"\nTwo strings are:"<<endl;
    puts(ch1);
    cout<<endl;
    puts(ch2);
    if(len1==len2){
                   if(anagram(ch1,len1,ch2,len2)){
                                   cout<<"\nThe two Stirngs are ANAGRAMS!!"<<endl;
                                   }
                   else{
                       cout<<"\nThe two Stirngs are Not ANAGRAMS!!";
                       }
                   }
    else{
         cout<<"\nThe two Stirngs are Not ANAGRAMS!!";
         }
    system("pause");
    return 0;
    }
