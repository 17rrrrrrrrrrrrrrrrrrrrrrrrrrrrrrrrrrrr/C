#include<iostream>
using namespace std;

class myTime{
	private:
		int hour;
		int minuate;
		bool validTime(int h,int m);
	public:
		int setTime(int h,int m);
		int getHour(){return hour;}
		int getMinuate(){return minuate;}
		void validTime();
};
bool myTime::validTime(int h,int m){
	if(h<0||h>23)return false;
	if(m<0||m>59)return false;
	return true;
}
bool myTime::setTime(int h,int m){
	if(validTime(h,m)){
		hour=h;
		minuate=m;
		return true;
	}
	else return false;
}
void myTime::printTime(){
	cout<<hour<<":"<<minuate<<;"\n";
}
