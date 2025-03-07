#include "Employee.h"


Employee::Employee(int id, const std::string& name, double salary, const std::string& role, const std::string& status)
: m_employeeID(id), m_name(name), m_salary(salary), m_role(role), m_status(status) {}

void Employee::updateRole(const std::string& newRole) {
    m_role = newRole;
}

void Employee::updateStatus(const std::string& newStatus) {
    m_status = newStatus;
}

int Employee::getEmployeeID() const {
    return m_employeeID;
}

std::string Employee::getName() const {
    return m_name;
}


void Employee::displayEmployeeDetails() const {
    std::cout << "Employee ID: " << m_employeeID << ", Name: " << m_name
              << ", Salary: " << m_salary << ", Role: " << m_role
              << ", Status: " << m_status << std::endl;
}
