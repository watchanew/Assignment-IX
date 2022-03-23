#include <iostream>
using  namespace std;
#include "Time.h"

int main(){
  struct Time t1,t2,t3;
  cout<<"What time was it?\n";
  t1 = getTime(t1); // รับค่าเวลาเข้ามา
  cout<<"\nWhat time is it now?\n";
  t2 = getTime(t2);
  t3 = subtract(t2,t1);
  cout<<"Time diff is ";
  cout<<setfill('0')<<setw(2)<<t3.h<<":";
  cout<<setfill('0')<<t3.m<<":";
  cout<<setfill('0')<<t3.s;
  //T1={15:20:30}
  //T2={5:15:10}
}
  
//display ด้วย
