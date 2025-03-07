#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(int id, const std::string& name, int hoursWorked, double hourlyWage)
                    : Employee(id, name, 0, "Part-Time", "Active"), m_hoursWorked(hoursWorked), m_hourlyWage(hourlyWage) {}

double PartTimeEmployee::calculateSalary() {
    return m_salary * m_hourlyWage;
}


void PartTimeEmployee::promote() {
    m_role = "Full-Time";
    m_salary += 1500;  
}

void PartTimeEmployee::performanceReview(int score) {
    if (score >= 3) {
        m_hourlyWage += 2; 
    }
}
