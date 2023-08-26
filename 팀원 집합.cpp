
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{   
    pair<int,int>a,b;
    int n;
    cin>>n;
    pair<int,int> p[100001]={};
    for(int i;i<n;i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n);
    for(int i;i<n;i++){
        cout<<p[i].second;
        if(p[i].first!=p[i + 1].first)cout<<endl;
    }
    
    return 0;
}