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

    int t; cin >> t;
    while(t--){
    	int rows, columns;
    	cin >> rows >> columns;

    	int original [rows][columns];
    	int dp [rows][columns];

    	//input
    	for(int i = 0; i<rows; i++){
    		for (int j = 0; j < columns; j++)
    		{
    			cin >> original[i][j];
    		}
    	}

    	//copying last row
    	for (int i = 0; i < columns; i++)
    	{
    		dp[rows-1][i] = original[rows-1][i];
    	}

    	//logic
    	for(int i = rows-2; i>=0; i--){
    		for(int j = 0; j<columns; j++){
    			int more = j+1;
    			int equal = j;
    			int less = j-1;

    			if(j == 0){
    				dp[i][j] = original[i][j] + max(dp[i+1][equal], dp[i+1][more]);
    			}
    			else if ( j == columns-1){
    				dp[i][j] = original[i][j] + max(dp[i+1][less], dp[i+1][equal]);

    			} else {
    			dp[i][j] = original[i][j] + max(dp[i+1][less], max(dp[i+1][equal], dp[i+1][more]));
    			}
    		}
    	}
    	    
    
		// for (int i = 0; i < columns; ++i)
  //   	{
  //   		cout << dp[0][i] << " ";
  //   	}
    	
    	
    	sort(dp[0], dp[0]+(columns));
    	cout << dp[0][columns-1] <<endl;
    
		// for (int i = 0; i < columns; ++i)
  //   	{
  //   		cout << dp[0][i] << " ";
  //   	}


    	
    }  




    
	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}