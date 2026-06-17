#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int binary, decimal = 0, remainder, i = 0;

       cout << "Enter a binary a binary number:";
          cin >> binary;

            int temp = binary;
   
    // Convert binary to decimal
             while (temp != 0) {
                    remainder = temp % 10;
                      decimal += remainder * pow(2, i);
                      temp /= 10;
                      i++; 
    }

             cout << "Decimal = " << decimal << endl;
         cout << "Hexadecimal = " << hex << decimal << endl;
        cout << "Octal = " << oct <<decimal << endl;

    return 0;
}
