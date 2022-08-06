#include <iostream>
using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void EmployeeInfo() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << Company << std::endl;
        std::cout << "Age: " << Age << std::endl;

    }

    Employee(string name, string company, int age) {

        Name = name;
        Company = company;
        Age = age;
    }

};

int main() {
    Employee employee_1 = Employee("Bas Maw", "Kaizen Esse", 35);
    employee_1.EmployeeInfo();
    Employee employee_2 = Employee("Dana", "Dana Nails", 25);
    employee_2.EmployeeInfo();


    return 0;
}