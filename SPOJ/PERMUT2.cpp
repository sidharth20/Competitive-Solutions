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

    
    while(1){
    	int n; cin >> n;
    	long arr[n];
    	int i;
    	for (i = 1; i <= n; i++)
    	{
    		cin >> arr[i];
    	}
    	for (i = 1; i <= n; ++i)
    	{
    		if(i!=arr[arr[i]]){
    			break;
    		}
    	}
    		
    	i--;
    	if(n==0)
    		{break;}
    	else if(i==n)
        	printf("ambiguous\n");
    	else
        	printf("not ambiguous\n");
    }	

    
    


	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}