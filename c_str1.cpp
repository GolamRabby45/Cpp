#include <iostream>
#include <vector>
#include <cstring>
#include<string>
#include<cctype> // for character-based functions

using namespace std;

int main() {
    char first_name [100] {};
    char last_name [100] {};
    char full_name [200] {};
    char temp_name[200] {};

    cout << "************* ostream & istream regarding C-string****" << endl;
    cout << "Enter your first name: " << endl;
    cin.getline(first_name, 50);

    cout << "Enter your last name: " << endl;
    cin.getline(last_name, 50);

    cout << "Your full name is: " << first_name << " " <<  last_name << endl;



    cout << "Your full name: " << endl;
    cin.getline(full_name, 50);

    cout << "your temp name: " << endl;
    cin.getline(temp_name, 50);
    
    //strcpy(temp_name, full_name);

    if(strcmp(temp_name, full_name) == 0){
        cout << "given names are same: " << endl;}
    else {
        cout << "given typed names are not same: " << endl;}

    int i = strlen(full_name);
    cout << "the length is: " << i << endl;

    for(size_t i =0; i < strlen(full_name); i++)
    {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "full name is: " << full_name << endl;

    return 0; 
}