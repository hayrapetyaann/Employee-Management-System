#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(int id, const std::string& name, double salary) 
                    : Employee(id, name, salary, "Full-Time", "Active") {}

double FullTimeEmployee::calculateSalary() {
    return m_salary;
}

void FullTimeEmployee::promote() {
    m_role = "Junior " + m_role;
    m_salary += 990 ; 
}

void FullTimeEmployee::performanceReview(int score) {
    if (score >= 4) {
        m_salary += m_salary * 0.1;  
    }
}
