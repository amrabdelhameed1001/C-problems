/*
Develop a function that allows user to do the following (menu options): ○ Add 2 numbers ○ Subtract 2 numbers ○ Multiply 2 numbers ○ Divide 2 numbers ○ End the program
● Consider the following functions: ○ Function to read 2 double numbers - by reference ○ 4 functions, one for each operation. Don’t divide by zero! ○ Function to display the menu of the 5 options - read number and return it. ■ User should enter number from 1 to 5. If not, display error message ■ If exit, end the program by printing how many operations were done
*/
#include <iostream>
using namespace std;

void read(double &a , double &b){
    cout << "a= ";
    cin >> a;

    cout << "b= ";
    cin >> b;

}

void add(double a , double b){
    cout << "a+b = " << a+b << endl;
}

void subtract(double a , double b){
    cout << "a-b = " << a-b << endl;
}

void multiply(double a , double b){
    cout << "a*b = " << a*b << endl;
}

void division(double a , double b){
    if(b==0)
        cout << "divided by zero error\n";
    else
        cout << "a/b = " << a/b << endl;
}

int option(){
    cout << "press 1 to add" << endl
        << "press 2 to subtract" << endl
        << "press 3 to multiply" << endl
        << "press 4 to divide" << endl
        << "press 5 to exit" << endl;

    int operation;
    cin >> operation;

    if(operation < 1 || operation > 5){
        cout << "try again";
        option();
    }

    return operation;
}

int main(){
    int n=0;

    int operation = option();

    while(operation !=5){

        n++;

        double a ,  b;
        read(a,b);
        if(operation == 1)      add(a,b);
        else if(operation ==2)  subtract(a,b);
        else if(operation ==3)  multiply(a,b);
        else if(operation ==4)  division(a,b);
        operation=option();
    }

    cout << "Number of operation = " << n;



    return 0;
}
