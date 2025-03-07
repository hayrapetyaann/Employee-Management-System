#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee {
protected:
    int m_employeeID;
    std::string m_name;
    double m_salary;
    std::string m_role;
    std::string m_status;

public:
    Employee(int id, const std::string& name, double salary, const std::string& role, const std::string& status);

    virtual ~Employee() = default;

    virtual double calculateSalary() = 0;
    virtual void promote() = 0;
    virtual void performanceReview(int score) = 0;

    void updateRole(const std::string& newRole);
    void updateStatus(const std::string& newStatus);
    virtual void displayEmployeeDetails() const;

    int getEmployeeID() const;
    std::string getName() const;
};

#endif
