#include <iostream>
#include <string>
#include <vector>

using namespace std;

int *create_array(size_t size, int init_value);

int main() {

    int *arr = create_array(100, 20);

    delete [] arr;
   

    vector<string> str {"Golam", "Rabby", "1203045"};

    for(auto &s: str)
    {
        s = "funny";
    }

    for(auto &i: str)
    {
        cout << i;
    }

    return 0;
}

// function pointer implementation
int *create_array(size_t size, int init_value)
{
    int *new_storage {nullptr};

    new_storage = new int[size];
    
    for(size_t i = 0; i < size; i++)
    {
        *(new_storage + i) = init_value;
    }
    return new_storage;
}