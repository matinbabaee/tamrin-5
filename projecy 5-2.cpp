#include <iostream>
using namespace std;
int main() {
    int x ,y;
    cout << "vared konid x and y: ";
    cin >> x >>y;
    for (int i = 1; i <= x; ++i) {
        for (int j = 1; j <= y; ++j) {
            cout << i << "*" << j << ": " << i*j << endl;
        }
    }
}
