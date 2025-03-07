#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H


#include "Employee.h"

class PartTimeEmployee : public Employee {
private:
    int m_hoursWorked;
    double m_hourlyWage;
public:
    PartTimeEmployee(int id, const std::string& name, int hoursWorked, double hourlyWage);
    double calculateSalary() override;
    void promote() override;   
    void performanceReview(int score) override;
};

#endif // PARTTIMEEMPLOYEE_H
