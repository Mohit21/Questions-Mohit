/*
Bubble-Sort
Complexity
Best case:O(n)
Avg case:O(n^2)
worst case:O(n^2)
*/

#include<iostream>
using namespace std;

void bubbleSort(int a[],int size){
     int temp;
     for(int i=0;i<size;i++){
             for(int j=i+1;j<size;j++){
                     if(a[i]>a[j]){
                                   temp=a[i];
                                   a[i]=a[j];
                                   a[j]=temp;
                                   }
                                   
                     }
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
    bubbleSort(a,size);
    cout<<"\nThe sorted array is:";
    for(int i=0;i<size;i++){
            cout<<"-->";
            cout<<a[i];
            }
    system("pause");
    return 0;
    }
