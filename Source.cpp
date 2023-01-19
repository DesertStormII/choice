#include <iostream>
using namespace std;
int main()
{
    int x, NumOfFunction, k;
    cout << "Please enter x =";
    cin >> x;
    cout << endl << "Choose number of any function(1,2,3) --- ";
    cin >> NumOfFunction;
    switch (NumOfFunction)
    {
    case 1:
        k = -2*x*2 - 4;
        cout << " Answer" << k;
        break;
    case 2:
        k = 5*x + 2;
        cout << " Answer" << k;
        break;
    case 3:
        k = 5 - 3*x;
        cout << " Answer" << k;
        break;
    default:
        cout << "Choose on of this numbers (1,2,3)";

    }

    return 0;
}