#include <iostream>
#include <cstring>
using namespace std;
int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    memset(arr, 1, 20);
    for(int i : arr) {
        cout << i << " ";
    }
    return 0;
}