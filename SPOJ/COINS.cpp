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

	long v[1000000001];
	v[1]=1;
	v[2]=2;
	v[3]=3;
	v[4]=4;
	v[5]=5;
	v[6]=6;
	v[7]=7;
	v[8]=8;
	v[9]=9;
	
	for(ll i = 10; i < 1000000001; i++){
		ll divide_by_two, divide_by_three, divide_by_four;
		divide_by_two = int(i/2);
		divide_by_three = int(i/3);
		divide_by_four = int(i/4);
		ll sum;
		sum = v[divide_by_four] + v[divide_by_three] + v[divide_by_two];
		if( i < sum ){
			v[i] = sum;
		} else {
			v[i] = i;
		}
	}

    ll a;

    while( cin >> a){
    	cout << v[a] << endl;
    } 
    
	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}