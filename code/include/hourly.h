#pragma once

#include <iostream>
#include <string>
#include "employee.h"


using namespace std;
class Hourly : public Employee
{
private:
    double hours;
    
public:
    Hourly();
    Hourly(const string &name , const double &rate , const double &hours);
    double salary() const;
    void setHours(const double &hours);


    
};


