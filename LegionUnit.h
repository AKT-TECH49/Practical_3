#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H


class LegionUnit
{

  protected:
      int health;
      int defense;
      int position;

  public:
  LegionUnit(int health, int defense);
     virtual void move()= 0;//this will be implemented in the derived classes 
     virtual void  attack() = 0;
     virtual void retreat()=0; //implemented differently in derived classes 
     void defend();
     bool isAlive();
     void takeDamage(int damage);
     virtual std::string getType() const = 0;
};

#endif