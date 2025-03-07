#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"

class Intern : public Employee {
public:
    Intern(int id, std::string name, double stipend);

    double calculateSalary() override;
    void promote() override;
    void performanceReview(int score) override;
};

#endif // INTERN_H
