#include<iostream>
#include<iomanip>

using namespace std;

int partition(int A[],int p,int q){
    int i,key,temp;
    i=p;
    key=A[p];
    for(int j=p+1;j<q;j++){
            if(A[j]<key){
                         i+=1;
                         temp=A[i];
                         A[i]=A[j];
                         A[j]=temp;
                         }
            }
    temp=A[i];
    A[i]=A[p];
    A[p]=temp;
    return i;
    }

void quicksort(int A[],int p,int q){
     int r;
     if(p<q){
             r=partition(A,p,q); 
             quicksort(A,p,r);
             quicksort(A,r+1,q);
             }
     }
int main(){
int T;
long long int N,K,n;
float avg;
cin>>T;
while(T--){
	float sum=0.0;
	avg=0.0;
	cin>>N;
	cin>>K;
	if(K==0){
		for(int i=0;i<N;i++){
		cin>>n;
		sum+=n;				
		}
		avg=(float)(sum/N);	    
        cout.setf(ios::fixed);
        cout<<setprecision(6)<<avg<<endl;
    }
	else{
	int A[N];
    for(int i=0;i<N;i++){
	cin>>A[i];
	}
	quicksort(A,0,N);
	for(int i=K;i<N-K;i++){
		sum+=A[i];
		}
	N-=(2*K);
	avg=(float)(sum/N);
    cout.setf(ios::fixed);
    cout<<setprecision(6)<<avg<<endl;	
     	}
}
system("pause");
return 0;
}

/*
#include<iostream>
/*#include<set>
#include<iomanip>
using namespace std;

int main(){
int T;
set<int> s;
set<int>::iterator it,it1;
long long N,K,n;
float avg;
cin>>T;
while(T--){
	long long int k1,k2=0;
	float sum=0.0;
	cin>>N;
	cin>>K;
	k1=K;
	if(K==0){
		for(int i=0;i<N;i++){
		cin>>n;
		sum+=n;				
		}
		avg=(float)(sum/N);
		//printf("%f",avg);
        cout.setf(ios::fixed);
        cout << setprecision(6) << avg << endl;
	}
	else{
	for(int i=0;i<N;i++){
	cin>>n;
	s.insert(n);
	}
	for(it=s.begin();it!=s.end();it++){
		if(k1>0){
                 k1--;
                 continue;
                 }
        else if(k2==(N-K-1)){
             break;
             }
        else{
             sum+=*it;
             }
		k2++;
	    }
	N-=(2*K);
    avg=(float)(sum/N);
	//printf("%f",avg);
    
        cout.setf(ios::fixed);
        cout << setprecision(6) << avg << endl;
     	}
}
system("pause");
return 0;
}

#include <iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    set<int>::iterator it;
    int n;
    cin>>n;
    s.insert(n);
    it=s.begin();
    cout<<*it<<endl;
    system("pause");
    return 0;
    }
*/
/*
#include <iostream>
using namespace std;

class Adder1{
   public:
      // constructor
      Adder1(int i = 0)
      {
        total1 = i;
      }
      // interface to outside world
      void addNum1(int number)
      {
          total1 += number;
      }
      // interface to outside world
      int getTotal1()
      {
          return total1;
      };
   private:
      // hidden data from outside world
      int total1;
};
int main( )
{
   Adder1 a;
   
   a.addNum1(10);
   a.addNum1(20);
   a.addNum1(30);

   cout << "Total " << a.getTotal1() <<endl;
 system("pause");
   return 0;
}

/*#include <iostream>
#include<list>

using namespace std;

list<int>*adj;
struct Graph{
	int V;
};

Graph * create(int V){
	Graph *graph1=new Graph;
	graph1->V=V;
	adj=new list<int> [V];
	return graph1;
}

void addEdge(int v,int w){
	adj[v].push_back(w);
}

int bfs(int s,Graph *graph){
int count=0;
int v=graph->V;
bool visited[v];
for(int i=0;i<v;i++){
	visited[i]=false;
}
list<int> q;
list<int> ::iterator it;
count=1;
visited[s]=true;
q.push_back(s);
	while(!q.empty()){
		s=q.front();
		q.pop_front();
		for(it=adj[s].begin();it!=adj[s].end();it++){
			if(!visited[*it]){
				visited[*it]=true;
				q.push_back(*it);
				count++;
			}
		}
	}
return count;
	
}
int main()
{
	int T,E,X,Y,s,numcit=0;
	//cin>>T;
	/*while(T--){
		cin>>E;
		list<int> edge;
		list<int>::iterator it;
		for(int i=0;i<E;i++){
          cin>>X;
          edge.push_back(X);
		  cin>>Y;
		  edge.push_back(Y);
                }
        /*Graph *graph=new Graph;
		graph=create(E);
		for(it=edge.begin();it!=edge.end();it++){
			cout<<" "<<*it<<endl;
			        }
		
        //numcit=bfs(s,graph);
		cout<<numcit<<" ";
	}
	int i=1;
	for(;i<=32768;i++)
	cout<<i;*/
    /*int i=0;
    switch(i)
    {
        case 0:
            i++;
            printf("%d..",i);
        case 1:
            printf("%d..",i);
        case 1:
            printf("%d..",i);
    }
   system("pause");
     return 0;

}
*/
