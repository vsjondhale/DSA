#include <iostream>

using namespace std;

//Check number of pairs in an array such a that product is grater than sum a[i] * a[j] > a[i] + a[j]

checkPairs() {
    int arrayCheck[3] = {3, 4, 5};
    int n = sizeof(arrayCheck) / sizeof(int);
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i - 1; j >= 0; j--) {
            if(arrayCheck[i] * arrayCheck[j] > arrayCheck[i] + arrayCheck[j]) {
                count++;
            }
        }
    }
    cout<< "\nCount value: " << count;
}

int main()
{

    cout << "@@ Hello World\n";

    checkPairs();
    return 0;
}
