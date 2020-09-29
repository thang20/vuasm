#pragma once

#include <iostream>
#include <string>
#include "employee.h"


using namespace std;
class Parttime : public Employee
{

public:
    Parttime();
    Parttime(const string &name , const double &rate);
    double salary() const;
};
