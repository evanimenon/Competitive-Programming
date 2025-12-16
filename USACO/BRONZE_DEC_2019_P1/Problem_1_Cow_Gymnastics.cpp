#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int k, n;

    cin>>k>>n;

    vector<vector<int>> pos(k,vector<int>(n+1));

    for(int i=0; i<k;i++){
        for(int j=0;j<n;j++){
            int cow;
            cin>>cow;
            pos[i][cow]=j;
        }
    }

    int ans=0;

    for(int a=1;a<n+1;a++){
        for(int b=1;b<n+1;b++){
            if(a==b)continue;

            bool ok=true;
            for(int s=0; s<k; s++){
                if(pos[s][a]>pos[s][b]){
                    ok=false;
                    break;
                }
            }
            if(ok){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}