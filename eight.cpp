#include <iostream>
using namespace std;

int main() {
    int n,num;
    cin >> n;
int sum = 0;

    for (int i = 1; i <= n; i++) {
        
        cin>>num;
        sum = sum+num;
    }

    cout << sum;
    

    return 0;
}