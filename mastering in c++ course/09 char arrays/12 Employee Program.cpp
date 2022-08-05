/*
Help our factory in managing his employees. Create a program that does the following: ○ Display the following choices: ■ Enter your choice: ■ 1) Add new employee ■ 2) Print all employees ■ 3) Delete by age ■ 4) Update Salary by name
○ You will keep the program running forever. Display the choices and user input from 1 to 4
● For choice 1: Allow the manager to enter information of an employee ○ Ask user to input: Name, Age, Salary and Gender letter ○ Add the information to your database
● For choice 2: Print all employees. Line per employee ● For choice 3: User enter to values, start age and end age ○ Find all employees with: start_age <= age <= end_age and remove them
● For choice 4: User enter name, then salary ○ Find the employee and update his salary
*/


#include <iostream>
using namespace std;

int main(){

    int employees_num=0;
    string names[1000];
    int ages[1000]={0};         // assume maximum nomber of employees=1000
    int salaries[1000]={0};
    string genders;



    while (true){
        cout << "Enter your choice: " << endl
            << "1) Add new employee" << endl
            << "2) Print all employee" << endl
            << "3) Delete by age" << endl
            << "4) Update Salary by name" << endl;

        int input;      cin >> input;

        if(input == 1){
            employees_num++;
            cout << "Enter name: ";
            string employee_name;   cin >> employee_name;
            names[employees_num -1]=employee_name;

            cout << "Enter age: ";
            int employee_age;       cin >> employee_age;
            ages[employees_num -1]=employee_age;

            cout << "Enter salary: ";
            int employee_salary;    cin >> employee_salary;
            salaries[employees_num -1]=employee_salary;

            cout << "Enter gender(M/F): ";
            char employee_gender;   cin >> employee_gender;
            genders += employee_gender;

            cout << endl;
        }

        else if(input ==2){
            for(int i=0 ; i<20 ; i++)   cout << "*";
            cout << endl;
            if (employees_num == 0)     cout << "There is no employees";
            else{
                for(int i=0 ; i<employees_num ; i++){
                    cout << names[i] << " ";
                    cout << ages[i] << " ";
                    cout << salaries[i] << " ";
                    cout << genders[i] << endl;
                }
            }
            cout << endl;
        }

        else if(input == 3){
            cout << "Enter start and end age" << endl;
            int start_age , end_age;
            cin >> start_age >> end_age;

            for(int i=0 ; i<employees_num ; i++){
                if( start_age <= ages[i] && ages[i] <= end_age){
                    for(int j=i ; j<employees_num ; j++){
                        names[j]=names[j+1];
                        ages[j]=ages[j+1];
                        salaries[j]=salaries[j+1];
                        genders[j]=genders[j+1];
                        employees_num--;
                    }
                }
            }
        }

        else if(input == 4){
            cout << "Enter the name and salary: ";
            string employee_name;   cin >> employee_name;
            int salary;             cin >> salary;

            for(int i=0 ; i<employees_num ; i++){
                if(names[i] == employee_name){
                    salaries[i]=salary;
                }
            }
        }

        else if( 1 > input || input > 4){
            cout << "try again" << endl;
        }
    }
    return 0;
}
