//unfinished
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;
    set<int> streetlights = {0,x};
    // multiset<int> 
    string street(x-1, '0');
    street = '1'+street+'1';
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>> t;
        street[t]='1';

        int longest=0,current=0;
        for (char c: street)
        {
            if (c=='0'){
                current++;
                if(current>longest){
                    longest=current;
                }

            }
            else{
                current=0;
            }
        }
        cout<< longest+1<< " ";

        
    }
}

// 00000000
// 00100000
// 00100100
// 01100100

// 3, 6, 2

// (2,5)
// (5,2)-> 
// (2,3,2)
// (1,6)-> (1,0,3,2)

