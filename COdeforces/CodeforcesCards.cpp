#include<iostream>
#include<vector>
#include<cstring>
#include<sstream>
using namespace std;

string to_string(int i)
{
    stringstream ss;
    ss << i;
    return ss.str();
}
void countSort(vector<int> &arr, int n, int exp)
{
    int output[n];
    int i, count[10] = {0};

    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

 int getMax(vector<int> &arr, int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < mx)
            mx = arr[i];
    return mx;
}

// Radix Sort
void radixSort(vector<int> &arr, int n)
{
    int m = getMax(arr, n);

    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

string largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string ans,str,ans1;

    vector<int> v(A.begin(),A.end());
    for (int i =0; i < A.size(); i++) {
            v[i]=A[i];
            str=to_string(v[i]);
            ans1+=str;
    }
    cout<<endl<<endl;
    radixSort(v,v.size());
    for (int i =0; i < v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    //string ans(v.rbegin(),v.rend());
    long long i=0;
    char ch;
    for(i=v.size()-1;i>=0;i--){
        str=to_string(v[i]);
        ans+=str;
        //cout<<ch;
        //ans.c_str();
        //ans.append(ch);
    }
    if(ans.compare(ans1)>0){
        return ans;
    }
    else{
        return ans1;
    }
    //return ans;
}

int main(){
int ar[]={472, 663, 964, 722, 485, 852, 635, 4, 368, 676, 319, 412};
int n=sizeof(ar)/sizeof(ar[0]);
vector<int> A(ar,ar+n);
cout<<largestNumber(A);
return 0;
}
