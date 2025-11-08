#include <iostream>
#include <cmath>
using namespace std;

int main() {
    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);

    int x, y;
    cin >> x >> y;

    int dist = 0;
    int prev = x;

    for (int i = 0;; i++) {
        int target = x + pow(-2, i);

        if ((prev <= y && y <= target) || (prev >= y && y >= target)) {
            dist += abs(y - prev);
            break;
        } 
        else{
            dist += abs(target - prev);
            prev = target;
        }
    }

    cout << dist << endl;
    return 0;
}
