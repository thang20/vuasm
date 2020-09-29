#include"../include/fulltime.h"
Fulltime::Fulltime():Employee()
{
}
Fulltime::Fulltime(const string &name, const double &rate):Employee(name, rate)
{
}
double Fulltime::salary() const
{
    return rate * BASIC;
}