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

    int i,j,k;
    int n,mov;
    int a[10001];
    int sum=0;
    while(1){
        cin >> n;
        if(n==-1) break;
        sum=0;
        for(i=0;i<n;i++){
            cin >> a[i];
            sum+=a[i];
        }
        if(sum%n!=0) {
            cout << -1 << endl;
        }
        else{
            mov=0;
            sum=sum/n;
            for(i=0;i<n;i++){
                if(a[i]>sum)
                mov+=(a[i]-sum);
            }
            cout << mov << endl;
        }
    } 
    
	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}