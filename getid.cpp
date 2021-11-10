#include "getid.h"
Getid::Getid(){
 id = ++count;
}
int Getid::count=0;

int Getid::get_id(){
  return id;
}