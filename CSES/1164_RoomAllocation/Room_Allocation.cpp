#include <iostream>
#include <vector>
#include <set>
#include <tuple>

using namespace std;

int main(){
    int n;
    cin >>n;

    multiset<tuple<int, int, int>>arrdep;


    for(int i=0;i<n;i++){
        int arr,dep;
        cin>>arr>>dep;
        arrdep.insert(make_tuple(arr,dep,i));
    }

    set<pair<int,int>> occ;//dep,room id

    // for (auto t:arrdep) {
    //     cout << get<0>(t) << " " << get<1>(t) << "\n";
    // }

    vector<int> freerooms;

    vector<int> ans(n);

    int count=0;

    // for (auto t : arrdep) {
    //     //
    // }

    for(multiset<tuple<int, int,int>>::iterator it=arrdep.begin();
        it!=arrdep.end(); 
        it++){
            int a=get<0>(*it), d=get<1>(*it), 
                idx=get<2>(*it);
        

        while(!occ.empty() &&(*occ.begin()).first<a){
            int freedroom=(*occ.begin()).second;
            occ.erase(occ.begin());
            freerooms.push_back(freedroom);
        }

        int roomid;

        if(!freerooms.empty()){
            roomid=freerooms.back();
            freerooms.pop_back();
        }
        else{
            roomid=count++;
        }

        ans[idx]=roomid;
        occ.insert(make_pair(d, roomid));

    }

    cout<<count<<'\n';

    for(int i=0; i<n; i++){
        cout<<ans[i]+1<<' ';

    }

    cout<<'\n';
    return 0;

}
