#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter Array Size as Positive Integer Value:)" << endl ;

    cin >> n;

    if(n<=0){
        return 0;
    }


    int array[n];

    cout << "Input " << n << " Integer elements now :)" << endl;

    for(int i = 0 ; i<n ; i++)
        cin >> array[i];


    if(n==1){
        cout << "Max and Min Value is - " << array[0] << endl;
    }


    int maxVal = array[0];
    int minVal = array[0];

    for(int i = 1 ; i<n ; i++){
        maxVal = max(maxVal, array[i]);
        minVal = min(minVal, array[i]);
    }

    cout << "Max Value is - " << maxVal << endl;
    cout << "Max Value is - " << minVal << endl;

    return 0;
}