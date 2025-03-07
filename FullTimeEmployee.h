#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "Employee.h"

class FullTimeEmployee : public Employee {
public:
    FullTimeEmployee(int id, const std::string& name, double salary);
    double calculateSalary() override;
    void promote() override;
    void performanceReview(int score) override;
};

#endif // FULLTIMEEMPLOYEE_H
