#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >>n;

    vector<int> hello(n);
    vector<int> byebye(n);

    for(int i=0; i<n;i++){
        cin>>hello[i]>> byebye[i];
    }
    sort(hello.begin(), hello.end());
    sort(byebye.begin(), byebye.end());

    int maxlilguys=0, currentlilguys=0;
    int a=0, b=0;

    while(a<n){
        if(hello[a]<byebye[b]){
            currentlilguys++;
            maxlilguys=max(maxlilguys, currentlilguys);
            a++;
        }
        else{
            currentlilguys--;
            b++;
        }
    }
    cout<<maxlilguys<<endl;

    return 0;
}