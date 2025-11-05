#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(){
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);


    array<long long, 3> c,m;
    for(int i=0;i<3;i++){
        cin>> c[i]>> m[i];
    }

    for(int count=0;count<100;count++){
        int first=count%3;
        int next=(first+1)%3;
        long long milkpoured=min(m[first],c[next]-m[next]);
        m[first]-=milkpoured;
        m[next]+=milkpoured;

    }

    cout<<m[0]<<'\n'<<m[1]<<'\n'<<m[2]<<'\n';
    return 0;


}