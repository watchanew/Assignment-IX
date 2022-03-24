#include<iomanip>

class TIME{
private:
	int h,m,s;
  char ch;
public:
	 void getTime();
	 void display();
	 //void add_min(int);
};


void TIME::getTime(){
  int hour, min, sec, sumtime, summin, sumhour;
  cin>>hour>>ch>>min>>ch>>sec;
  sumtime = (hour*3600)+(min*60)+sec;
  summin = sumtime/60;
  sumhour = summin/60;
  s = sumtime%60;
  m = summin%60;
  if(sumhour>=24){
    h = sumhour-24;
  } 
  else h = sumhour;
}

void TIME::display(){
   cout<<setw(2)<<setfill('0')<<h;
   cout<<":";
   cout<<setw(2)<<setfill('0')<<m;
   cout<<":";
   cout<<setw(2)<<setfill('0')<<s;
   cout<<endl;  
 
}