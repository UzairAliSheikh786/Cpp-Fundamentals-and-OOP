#include<iostream>
using namespace std;

int main() {
    int n[10], maxVal,sum=0;

    maxVal = n[0];
    
    for(int i = 0; i < 10; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> n[i];
         if(n[i] > maxVal) {
            maxVal = n[i];
        }
        sum=sum+n[i];
    }

   



    cout << "The Maximum Value is: " << maxVal << endl;
    cout << "The Total Sum is: " << sum << endl;
    return 0;
}
