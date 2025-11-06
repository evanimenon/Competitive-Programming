#include <iostream>
#include <set>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    int n;
    cin>>n;

    multiset<tuple<int,char,int>> log;

    for(int i=0;i<n;i++){
        int day,diff;
        string s;
        cin>>day>>s>>diff;
        char name = s[0];
        log.insert(make_tuple(day,name,diff));
    }

    int B=7, E=7, M=7;

    auto display= [&](int B, int E, int M){
        int maxcow=max({B,E,M});
        return make_tuple(B==maxcow, E==maxcow, M==maxcow);
    };

    auto shown=display(B,E,M);
    int count=0;


    for(auto entry:log){
        char name=get<1>(entry);
        int diff=get<2>(entry);

        if(name=='B') B+=diff;
        else if(name=='E') E+=diff;
        else if(name=='M') M+=diff;

        auto now=display(B,E,M);
        if(now!=shown){
            count++;
            shown=now;
        }
    }
    cout<<count<<'\n';

    return 0;

}