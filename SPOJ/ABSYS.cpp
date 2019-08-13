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

int convert(string s){
 
 
  int result=0;
  for(int i=0;i<s.size();i++){
       result=result*10+(s[i]-'0');
  }
  return result;
}

void solve(string s1,string s2,string s3){
    
  int result;
  if(s3.find("machula")!=std::string::npos){
 
       int num1=convert(s1);
       int num2=convert(s2);
       result=num1+num2;
       cout<<num1<<" + "<<num2<<" = "<<result<< endl;
  }
  else if(s2.find("machula")!=std::string::npos){
       int num1=convert(s1);
       int num2=convert(s3);
       result=num2-num1;
       cout<<num1<<" + "<<result<<" = "<<num2<< endl;
 
  }
  else
  {
       int num1=convert(s2);
       int num2=convert(s3);
       result=num2-num1;
       cout<<result<<" + "<<num1<<" = "<<num2 << endl;
  }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; cin >> t;
    while(t--){
		string a,b,c,d,e;
		cin >> a >> b >> c >> d >> e;
		solve(a,c,e);
    }
    
	#ifndef ONLINE_JUDGE
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec\n";
	#endif
}