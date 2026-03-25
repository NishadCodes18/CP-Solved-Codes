#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {8, 3, 5, 2, 9, 1};

    sort(vec.begin(), vec.end());

    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}