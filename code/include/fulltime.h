#pragma once

#include <iostream>
#include <string>
#include "employee.h"


using namespace std;
class Fulltime : public Employee
{

public:
    Fulltime();
    Fulltime(const string &name, const double &rate);
    double salary() const;
   
};

