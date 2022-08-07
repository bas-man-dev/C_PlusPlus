#include <iostream>
using std::string;

/* changes on the last class file 
starting to 'Encapsulate' the class. Making getters and setters etc*/

class Employee {
    /* although these can be assumed to be private without declaring them, declaring these 'private makes it more readable*/
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }

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

    employee_1.setAge(45);
    std::cout << employee_1.getName() << " is " << employee_1.getAge() << " years old." << std::endl;

    return 0;
}