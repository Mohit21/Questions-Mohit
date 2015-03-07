/*
Insertion-Sort
Complexity
Best case:O(n)
Avg case:O(n^2)
worst case:O(n^2)
*/

#include<iostream>
using namespace std;

void insertionSort(int a[],int size){
     int key,i;
     for(int j=1;j<size;j++){
             key=a[j];
             i=j-1;
             while(i>=0 && a[i]>key)
             {
                                  a[i+1]=a[i];
                                  i=i-1;
                                  }
              a[i+1]=key;
             }
     }     
int main(){
    system("cls");
    int a[20],size;
    cout<<"\nEnter the size of array:";
    cin>>size;
    cout<<"\nEnter the values:";
    for(int i=0;i<size;i++){
            cin>>a[i];
            }
    cout<<"\nThe Arary u entered is:";
    for(int i=0;i<size;i++){
            cout<<"-->"<<a[i];
            }
    insertionSort(a,size);
    cout<<"\nThe sorted array is:";
    for(int i=0;i<size;i++){
            cout<<"-->";
            cout<<a[i];
            }
    system("pause");
    return 0;
    }
