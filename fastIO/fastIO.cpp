
#include <iostream>
#include <bits/stdc++.h>

// Important TIPS
//
// It is recommended to use cout << “\n”; instead of cout << endl.

using namespace std;

void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
 
    number = 0;
 
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
 
        // extract the next character from the buffer
        c = getchar();
    }
 
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}
 
void enableFastIO()
{
    ios_base::sync_with_stdio(false);   // Disable backwards compatability scanf(), printf() sync with cin.
    cin.tie(NULL);                      // Disable sync with cout. WARNING: May lead to problems with frequent switch btwn cin&cout
}

// Function Call
int main()
{
    enableFastIO();

    int number;
    fastscan(number);
    cout << number << "\n";
    return 0;
}