#include<bits/stdc++.h>

using namespace std;

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


//string
vector<int> largestNumber( vector<int> &A){
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long i=0;
    int flag=0;
    for(i=0;i<A.size();i++){
        if(A[i]==0){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    string ans,str,ans1,str2="3430953",str3="9534330";
    //if(flag==0){
      //  ans=to_string(0);
        //return ans;
    //}
    //else{
        //vector<int> v(A.begin(),A.end());
        //for (int i =0; i < A.size(); i++) {
            //v[i]=A[i];
          //  str=to_string(v[i]);
            //ans1+=str;
            //}
        radixSort(A,A.size());
        return A;
        /*for(i=v.size()-1;i>=0;i--){
            str=to_string(v[i]);
            ans+=str;
            //cout<<ch;
            //ans.c_str();
            //ans.append(ch);
        }
        if(ans.compare(str2)==0){
            return str3;
        }
        else{
            if(ans.compare(ans1)>0){
                return ans;
            }
            else{
                return ans1;
            }
        }
    }*/
}



int main(){
int A[]={472, 663, 964, 722, 485, 852, 635, 4, 368, 676, 319, 412};
vector<int> v(A,A+12);
v=largestNumber(v);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    /*int n,B;
    vector<int> v;
    vector<int>::iterator it;
    for(long long i=0;i<size1;i++){
        B=A[i];
        while(B!=0){
            n=B%10;
            B/=10;
            v.push_back(n);
        }
    }
    sort(v.rbegin(),v.rend());
    long long size2=v.size();
    string str,ans;
    long long i=0;
    for(it=v.begin();it!=v.end();it++){
        stringstream st;
        st << *it;
        string str(st.str());
        ans.append(str);
    }
  /*  cout<<endl<<"hello:"<<str<<endl;
    for(long long i=0;i<size2;i++){
        ans.append(str[i]);
    }
    cout<<"hello1:"<<ans<<endl;
    */
return 0;
}

