#include<iostream>
#include<list>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;
list<int> *adj;
list<int>::iterator list1;

vector<int> v2;     
vector<int>::iterator it,it1;

struct Graph{
       int v;
       int par;
       };
int V;       
Graph *createGraph(int v){
     Graph* graph=new Graph;
     graph->v=v;
     V=v;
     adj=new list<int>[v];
     return graph;
     }
       
void addEdge(int s,int d){
     adj[s].push_back(d);
     //par=s;
     }

void dfsUtil(bool visited[],int s){
     visited[s]=true;
     v2.push_back(s);
     cout<<"-->"<<s+1;
     list<int>::iterator it;
     for(it=adj[s].begin();it!=adj[s].end();it++){
                                                 if(!visited[*it]){
                                                                   dfsUtil(visited,*it);
                                                                   }
                                                 }
    }    

void dfs(int s){
    bool visited[V];
    for(int i=0;i<V;i++){
            visited[i]=false;
            }
    dfsUtil(visited,s);
    }
    
int main(){
    int v,a,b,q,x,y;
    cin>>v;
    Graph *graph;
    graph=createGraph(v);
    int tp[v],bp[v];     
    

    for(int i=0;i<v-1;i++){
            cin>>a>>b;
            addEdge(a-1,b-1);
            }
    cin>>q;
    dfs(0);
    int a1=0,b1=v-1,pos=0;
    for(it=v2.begin();it!=v2.end();it++){
                                         pos=*it;
                                         pos-=1;
                                         tp[pos]=a1++;
                                         bp[pos]=b1--;
                                         }
    cout<<endl;
    for(int i=0;i<v;i++){
                          cout<<"-->"<<tp[i];
    cout<<endl;                                     }
                                         
    for(int i=0;i<q;i++){
            cin>>x>>y;
            if(x<y){
                    //it=find(v2.begin(),v2.end(),x-1);
                    //if(it!=v2.end()){
                    if((tp[x-1]<tp[y-1])&&(bp[x-1]>bp[y-1])){
                                cout<<x<<" taught "<<y;
                                }
                    else{
                     cout<<"No idea";
                     }
                    }
            else{
                 if((tp[x-1]<tp[y-1])&&(bp[x-1]>bp[y-1])){
                                cout<<y<<" taught "<<x;
                                }
                    else{
                     cout<<"No idea";
                     }
                //it=find(v2.begin(),v2.end(),y-1);
                //if(it!=v2.end()){
              //    if(){
                //                cout<<x<<" taught "<<y;
                  //              }
                //else{
                  //   cout<<"No idea";
                    // }
                }
            cout<<endl;
          }
    v2.clear();
    //tp.clear();
    //bp.clear();
    system("pause");
    return 0;
}
/*
#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
 
using namespace std;
list<int> *adj;
 
vector<int> v2;     
vector<int>::iterator it,it1;
 
struct Graph{
       int v;
       };
int V;       
Graph *createGraph(int v){
     Graph* graph=new Graph;
     graph->v=v;
     V=v;
     adj=new list<int>[v];
     return graph;
     }
       
void addEdge(int s,int d){
     adj[s].push_back(d);
     }
     
void dfsUtil(bool visited[],int s){
     visited[s]=true;
     v2.push_back(s);
     //cout<<s<<"-->";
    list<int>::iterator it;
    for(it=adj[s].begin();it!=adj[s].end();it++){
                                                 if(!visited[*it]){
                                                                   dfsUtil(visited,*it);
                                                                   }
                                                 }
    }    
 
void dfs(int s){
    bool visited[V];
    for(int i=0;i<V;i++){
            visited[i]=false;
            }
    dfsUtil(visited,s);
    }
    
int main(){
    int v,a,b,q,x,y;
    cin>>v;
  
    Graph *graph;
    graph=createGraph(v);
    for(int i=0;i<v-1;i++){
            cin>>a>>b;
            addEdge(a-1,b-1);
            }
    cin>>q;
    for(int i=0;i<q;i++){
            cin>>x>>y;
            if(x>y){
                    dfs(y-1);
                    it=find(v2.begin(),v2.end(),x-1);
                    it1=find(v2.begin(),v2.end(),y-1);
                    if(it!=v2.end() && it1!=v2.end()){
                                    //if(it-it1>1){
                                                 cout<<y<<" taught "<<x;
                                      //                          }      
                                    //else{
                   //                      cout<<x<<" taught "<<y;
                                      //   }
                    }
                    else{
                         cout<<"No idea";
                    }
            }
            else{
                 dfs(x-1);
                it=find(v2.begin(),v2.end(),x-1);
                it1=find(v2.begin(),v2.end(),y-1);
                if(it!=v2.end() && it1!=v2.end()){
                                cout<<x<<" taught "<<y;
                                }
                else{
                     cout<<"No idea";
                     }
                }
            v2.clear();
            cout<<endl;
          }
    system("pause");
    return 0;
    }

*/
