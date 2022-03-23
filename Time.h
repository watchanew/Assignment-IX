#include<iomanip>

class TIME{
private:
	int h,m,s;
public:
	 void set_time(int,int,int);
	 void display();
	 //void add_min(int);
};

void TIME::set_time(int hour, int min, int sec) {
    h = hour;
    m = min;
    s = sec;
}

void TIME::display(){
   cout<<setw(2)<<setfill('0')<<h;
   cout<<":"
   cout<<setw(2)<<setfill('0')<<m;
   cout<<":"
   cout<<setw(2)<<setfill('0')<<s;
   cout<<endl;  
 
}