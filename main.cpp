#include <iostream>
using  namespace std;
#include "Time.h"

int main(){
  TIME t1,t2,t3;
  cout<<"What time was it?\n";
  t1.getTime(); // รับค่าเวลาเข้ามา
  cout<<"What time is it now?\n";
  t2.getTime();
  t3 = t2.subtract(t1);
  cout<<"Time diff is ";
  t3.display();
}
