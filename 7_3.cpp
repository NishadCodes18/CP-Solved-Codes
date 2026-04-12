#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {8, 3, 5, 2, 9, 1};
    int n = vec.size();

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        rotate(upper_bound(vec.begin(), it, *it), it, next(it));
    }

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}