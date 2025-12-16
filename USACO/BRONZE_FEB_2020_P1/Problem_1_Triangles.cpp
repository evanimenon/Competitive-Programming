#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>
int main(){

    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n;
    cin>>n;
    
    vector<pair<int,int>> coords(n);

    for(int i=0;i<n; i++){
        cin>> coords[i].first >> coords[i].second;
    }

    long long maxa=0;
    for(int i=0;i<n;i++){
        int x=coords[i].first;
        int y=coords[i].second;

        int maxh=0, maxb=0;
        for(int j=0;j<n;j++){
            if(x==coords[j].first){
                int h=abs(y-coords[j].second);
                maxh=max(maxh,h);
            }
            
        }

        for(int k=0;k<n;k++){
            if(y==coords[k].second){
                int b=abs(x-coords[k].first);
                maxb=max(maxb,b);
            }
        }

        long long a= maxh*maxb;
        maxa=max(maxa,a);
    }
    cout<<maxa;
}