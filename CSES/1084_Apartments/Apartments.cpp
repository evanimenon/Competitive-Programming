#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m,k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);


    for (int i=0;i<n; i++){
        cin >>a[i];
    }

    for (int j=0;j<m; j++){
        cin >>b[j];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int i=0, j=0, count=0;
    while(i<n && j<m){
        int desire=a[i];
        int size=b[j];
        int lower=desire-k, upper=desire+k;

        if(size<lower){
            j++;
        }
        else if(size>upper){
            i++;
        }

        else if (size<lower || size>upper){
            j+=1;
        }
        else{
            count++; i++; j++;
        }
        
    }
    cout << count;
}




