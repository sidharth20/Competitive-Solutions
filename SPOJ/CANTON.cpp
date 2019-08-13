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

bool odd_or_even(long a){
	if(a % 2 == 0){
		return true;
	} else {
		return false;
	}
}

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,num,sum=0;
        scanf("%d",&num);
        for(i=1;;i++)
        {
            sum+=i;
            if(sum>=num)
                break;
        }
        int temp=num-(sum-i);
        int total=i+1;
        if(i%2==0)
            printf("TERM %d IS %d/%d\n",num,temp,total-temp);
        else
            printf("TERM %d IS %d/%d\n",num,total-temp,temp);
    }
    
	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}