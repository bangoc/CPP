#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>

class Observer;

class Subject {
public:
  virtual ~Subject() {}

  virtual void Attach(Observer*);
  virtual void Detach(Observer*);
  virtual void Notify();
protected:
  Subject() {}
private:
  std::list<Observer*> observers_;
};

#endif /* SUBJECT_H */
