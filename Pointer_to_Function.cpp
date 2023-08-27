
#include <iostream>
using namespace std;

// Code Challenge:

// Write a C++ program that defines two functions: add and subtract.           done
// Each function takes two integer parameters and returns the sum and          done 
// difference of the two numbers, respectively. 
// Create a function that takes two integers and a function pointer as arguments,  Done 
// and uses the function pointer to apply the specified operation to the integers. Print the result.

// Hint: The function pointer can point to either the add or subtract function.  Done 


int add_function(int a, int b){
    int c = a + b;
    return c; 
}

int subtract_function(int a, int c){
    int x = a - c; 
    return x; 
}

int calculate(int a, int b, int(*func)(int, int)){
    int c = (*func)(a,b);
    return c; 
 }

void main_menu (){
    cout << "Main Menu " << endl; 
    cout << "Select from the following: " << endl; 
    cout << "1. Add." << endl;
    cout << "2. Subtract." << endl; 
}

int main(){

int choice, a, b;

cout << "Please enter the first integer: " ;
cin >> a;
cout << "" << endl;
cout << "Please eneter the second integer: ";
cin >> b;
cout << "" << endl; 

main_menu();
cout << "" << endl;
cin >> choice;


// declare the function pointers for add() and subtract() 

int(*add)(int, int) = add_function; 

int(*subtract)(int, int) = subtract_function;

if (choice == 1){
    int x = calculate(a,b, add_function);
    cout << "" << endl;
    cout << "The sum of the two integers is " << x << "." << endl; 
    cout << "" << endl;
}

else if (choice == 2){
    int y = calculate(a, b, subtract_function);
    cout << "" << endl;
    cout << "The difference of the two integers is " << y << "." << endl;
    cout << "" << endl; 
}
else 
    cout << "Invalid enry. " << endl;



    return 0;
}