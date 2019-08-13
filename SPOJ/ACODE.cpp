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

char str[5002];

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


   cin >> str;
   while(str[0]!='0')
   {
      int len=strlen(str);
      long long dp[len+1]={0};
      dp[0]=1;
      int i=1; 
      while(i<len)
      {
         int num=(str[i-1]-'0')*10;
         num+=str[i]-'0';
         
         if(str[i]-'0')
         {
            dp[i]=dp[i-1];
         }   
         if(num>9 && num<=26)   
         {
            dp[i]+=dp[i-2<0?0:i-2];
         }
         
         i++;   
      }
      cout << dp[len-1] << endl;
      cin >> str;
   }
   return 0;

	


	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}