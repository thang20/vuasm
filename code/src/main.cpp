#include <iostream>
#include"../include/employee.h"
#include"../include/fulltime.h"
#include"../include/parttime.h"
#include"../include/hourly.h"

int main(int argc, char *argv[])
{
	Employee *emp1 = new Fulltime("thang", 500);
	emp1->display();
	
	Employee *emp2 = new Parttime("truong", 500);
	emp1->display();

	Employee *emp3 = new Hourly("duc", 500, 5.0);
	emp1->display();
	
}