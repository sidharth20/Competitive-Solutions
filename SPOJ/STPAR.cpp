#include <bits/stdc++.h>

using namespace std;

#define pb 									push_back
#define ll 									long long 
#define ull 								unsigned long long
#define ui 									unsigned int
#define us 									unsigned short
#define INF 								1001001001
#define PI 									3.1415926535897932384626
#define mp 									make_pair
#define fi 									first
#define se 									second
#define pb 									push_back
#define sz(a) 								int((a).size())
#define all(c) 								c.begin(), c.end()
#define sz(a)								int((a).size())
#define trs(container, it) 					for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
//This one is for set,map etc.
#define present(container, element) 		(container.find(element) != container.end())
//This one is for vectors
#define cpresent(container, element) 		(find(all(container),element) != container.end())
#define tr(c,i) 							for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)


typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 




int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

       int n,flag=1,x;
   scanf("%d",&n);
   while(n)
   {
      flag=1;
      stack<int> s;
      vector<int> v;
      for(int i=0;i<n;++i)
      {
         scanf("%d",&x);
         
         while(s.size() && s.top()<x)
         {
            
            v.push_back(s.top());
            s.pop();
         }   
         s.push(x);
      }   
      
      
      while(s.size())
      {
         v.push_back(s.top());
         s.pop();
      }
      
      
      for(int i=0;i<v.size();++i)
      {
         if(v[i]!=i+1)
         {
            flag=0;
            break;
         }
      }
      if(flag)
         printf("yes\n");
      else
         printf("no\n");
      scanf("%d",&n);   
   }
   return 0;	

	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}