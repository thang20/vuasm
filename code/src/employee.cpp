#include"../include/employee.h"
int Employee::count = 0;
Employee::Employee(){
    this->name = "no name";
    this->rate = 1.0;
    this->id = count++;
}
Employee::Employee(const string &name, const double &rate){
    this->name = name;
    this->rate = rate;
    this->id = count++;
}
void Employee::display() const{
    cout << "id : " << id << endl;
    cout << "name : " << name << endl;
    cout << "salary : " << salary() << endl;
    
}
void Employee::setRate(const double &rate){
    this->rate = rate;
}
Employee::~Employee(){

}