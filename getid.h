#ifndef GETID_H_
#define GETID_H_
#include <iostream>
#include <string>
class Getid{
  public:
  Getid();
  int get_id();

    private:
    int id;
    static int count;
};



#endif //GETID_H_