//Problem 1 : Forknight
#include <bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define PI = arccos(-1)
typedef long long ll;
typedef long double ld;
const int INF=1e9;
const ll LINF=1e18;
const int mod = 1e9 + 7;

vector<pair<int,int>>directions = {{-2,1},{-2,-1},{2,1},{2,-1},{-1,2},{-1,-2},{1,2},{1,-2}};

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
char arr[5][8];
pair<int,int>pos;
for(int i=0;i<5;++i){
    for(int j=0;j<8;++j){
    cin>>arr[i][j];
    if(arr[i][j]=='K') pos={i,j};
    }
}
int count=0;
for(int i=0;i<directions.size();++i){
    int x=pos.first+directions[i].first,y=pos.second+directions[i].second;
    if(arr[x][y]=='#' && x>=0 && x<5 && y>=0 && y<8) count++;
}
if(count>=2) cout<<"YES";
else cout<<"NO";

return 0;
}