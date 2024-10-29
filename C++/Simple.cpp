#include<iostream>
using namespace std;
int main(){
    cout << "Welcome To C Programmimg\n";

    int a = 123;
    cout << a << endl;

    char b = 'M';
    cout << b << endl;

    int size = sizeof(a);
    cout <<"Size of a:" << size << endl;

    int number;
    cout << "Enter Number:"-1;
    cin >> number;
    if(number > 0){
        cout << "Positive Number" << endl;
    }
    else if(number < 0){
        cout << "Negative Number" << endl;
    }
    else{
        cout << "Zero Number" << endl;
    }
}