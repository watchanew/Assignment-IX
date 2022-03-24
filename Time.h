#include<iomanip>

class TIME{
private:
	int h,m,s;
  char ch;
public:
	void getTime();
	void display();
  TIME subtract(TIME);
};

void TIME::getTime(){
  int hour, min, sec, sumtime, summin, sumhour;
  cout<<"Example input: hh:mm:ss\n";
  cin>>hour>>ch>>min>>ch>>sec;
  sumtime = (hour*3600)+(min*60)+sec;
  summin = sumtime/60;
  sumhour = summin/60;
  s = sumtime%60;
  m = summin%60;
  if(sumhour>=24){
    h = sumhour%24;
  } 
  else h = sumhour;
}

TIME TIME::subtract(TIME t){
  TIME dt;
  int diffhour, diffmin, diffsec, s1, s2;
  s1 = (h*3600)+(m*60)+s;
  s2 = (t.h*3600)+(t.m*60)+t.s;
  if(s1>s2){
    diffsec = s1-s2;
  }
  else diffsec = s2-s1;
  diffmin = diffsec/60;
  diffhour = diffmin/60;
  dt.s = diffsec%60;
  dt.m = diffmin%60;
  dt.h = diffhour;
  return dt;
}

void TIME::display(){
   cout<<setw(2)<<setfill('0')<<h;
   cout<<":";
   cout<<setw(2)<<setfill('0')<<m;
   cout<<":";
   cout<<setw(2)<<setfill('0')<<s;
   cout<<endl;  
}