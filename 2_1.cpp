#include <iostream>
using namespace std;

int main() {
    int N, n;
    cout << "Enter number N: ";
    cin >> N;
    cout << "Enter bit position n (0-indexed): ";
    cin >> n;

    // Shift 1 to the left by n positions and AND it with N
    if ((N & (1 << n)) != 0) {
        cout << "Bit at position " << n << " is SET (1)" << endl;
    } else {
        cout << "Bit at position " << n << " is CLEAR (0)" << endl;
    }
    return 0;
}