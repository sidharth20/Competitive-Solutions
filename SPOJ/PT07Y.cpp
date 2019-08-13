#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //SPOJ philosopher's stone

    int t,row,col;
    vector < vector<int> > stones,v;
    std::vector<int> toprow;
    set <int> s;
    cin>>t;
    while(t--){
        
        cin>>row>>col;
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cin>>stones[i][j];
                v[i][j]=stones[i][j];
            }
        }
        for (int i = row-2; i >= 0; --i)
        {
            for (int j = 0; j < col; ++j)
            {
            if(j==0){
                v[i][0]+=max(v[i+1][0],v[i+1][1]);
            }
            else if(j==(col-1)){
                v[i][j]+=max(v[i+1][j-1],v[i+1][j]);
            }
            else
                v[i][j]+=max(v[i+1][j-1],max(v[i+1][j],v[i+1][j+1]));
            }
        }
        for (int i = 0; i < col; ++i)
        {
            toprow[i]=(v[0][i]);
        }
        sort(toprow.begin(), toprow.end());
        cout<<toprow[0]<<endl;
    }
    
    return 0;
}