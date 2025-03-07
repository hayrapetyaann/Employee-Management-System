#include "Utility.h"
#include <iostream>
#include <limits>

void displayAllEmployees(const std::vector<Employee*>& employees) {
    for (auto& emp : employees) {
        emp->displayEmployeeDetails();
    }
}

Employee* searchEmployeeByID(const std::vector<Employee*>& employees, int employeeID) {
    for (auto& emp : employees) {
        if (emp->getEmployeeID() == employeeID) {
            return emp; 
        }
    }
    return nullptr;  
}

int getValidIntegerInput(const std::string& prompt) {
    int input;
    while (true) {
        std::cout << prompt; 
        std::cin >> input;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer.\n";
        } else {
            return input; 
        }
    }
}
