#include <iostream>
using namespace std;
int main() {
    char s[] = "Hello welcome";
    int count=1,i;
    for (i=0;i<13;i++) {  
        if (s[i]==' ')
            count++;
    }
    cout << "Words: " << count;
    return 0;
}