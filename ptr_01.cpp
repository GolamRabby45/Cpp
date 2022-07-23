#include <iostream>
#include <string>
#include <vector>

#define SIZE 100

using namespace std;



int main() {
    /*int *arr_ptr {nullptr};
    int size {};

    arr_ptr = new int [size]; // allocate array on the heap 
    delete [] arr_ptr;*/  // freeing the allocated storage 

    int scores [] {100, 200, 300, 400, -1};
    int *score {scores};

    /*for(size_t i = 0; i < 5; i++){
        cout << scores[i] << endl;
    }*/

    while(*score != -1){
        cout << *score << endl;
        score++;
    }

    return 0;
}
