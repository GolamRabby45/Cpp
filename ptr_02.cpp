#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){

    int a{100}, b{200};

    swap(&a, &b);

    cout << a << endl << b << endl;
    return 0;
}