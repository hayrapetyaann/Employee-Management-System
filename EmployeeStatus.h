#ifndef EMPLOYEESTATUS_H
#define EMPLOYEESTATUS_H

#include <string>

class EmployeeStatus {
public:
    static const std::string ACTIVE;
    static const std::string ON_LEAVE;
    static const std::string INACTIVE;
    static const std::string RETIRED;
};

const std::string EmployeeStatus::ACTIVE = "Active";
const std::string EmployeeStatus::ON_LEAVE = "On Leave";
const std::string EmployeeStatus::INACTIVE = "Inactive";
const std::string EmployeeStatus::RETIRED = "Retired";

#endif // EMPLOYEESTATUS_H
