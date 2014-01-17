class Manager;

class Employee
   {
   private:
      int ID;
      char* name;
      Manager* boss;
      int hours;
   protected:
   public:
      Employee(int id, char* named);
      ~Employee();
      void setBoss(Manager* newBoss);
      void work(int numOfHours);
      void report();
      int getHours();
      int getID();
      char* getName() const;
   };