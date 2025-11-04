#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> distn;
    int n;
    cin >>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        distn.insert(x);
    }

    cout << distn.size();
}

