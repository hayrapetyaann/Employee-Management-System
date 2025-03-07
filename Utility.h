#ifndef UTILITY_H
#define UTILITY_H

#include "Employee.h"
#include <vector>
#include <string>

void displayAllEmployees(const std::vector<Employee*>& employees);
Employee* searchEmployeeByID(const std::vector<Employee*>& employees, int employeeID);
int getValidIntegerInput(const std::string& prompt);

#endif // UTILITY_H
