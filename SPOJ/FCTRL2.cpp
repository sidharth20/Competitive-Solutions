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

    int t;
    scanf("%d", &t);
    while(t--){
    int n;
    scanf("%d",&n);
    int a[200];
    int m=1;
    a[0]=1;
    int temp=0, x=0;
    int i,j;

    m=1;
    for(i=1;i<=n;i++){
        temp = 0;
        for(j=0;j<m;j++){
            x = a[j]*i + temp;
            a[j]= x%10;
            temp = x/10;
        }
        while(temp>0){
            m++;
            a[m-1]= temp%10;
            temp = temp /10;
           
        }
    }
  
    for(i=m-1;i>=0;i--){
        printf("%d",a[i]);
    }
    printf("\n");
    }
    return 0;
    
	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}