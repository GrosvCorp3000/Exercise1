#include "Employee.h"
#include <cstring>
#include <iostream>
#include "Manager.h"

Employee::Employee(int id, char* named)
   {
   ID = id;
   name = new char[strlen(named)+1];
   strcpy(name, named);
   boss = 0;
   hours = 0;
   }


Employee::~Employee()
   {
   if(name!=NULL)
      delete [] name;
	  name = NULL;
   }

void Employee::setBoss(Manager* newBoss)
   {
   boss = newBoss;
   }

void Employee::work(int numOfHours)
   {
   hours += numOfHours;
   }

void Employee::report()
   {
   if(boss)
      {
      boss->getWorkerHours(this);
      hours = 0;
      }
   }

int Employee::getHours()
   {
   return hours;
   }

int Employee::getID()
   {
   return ID;
   }

char* Employee::getName() const
{
	return name;
}


