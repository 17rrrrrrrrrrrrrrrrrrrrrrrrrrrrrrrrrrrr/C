#include<iostream> 
using namespace std;

class myTime{
	public:
	int hour;
	int minutes;
	void pnintTime();
};
void myTime::pnintTime(){ 
    cout<<hour<<":"<<minute<<"\n";
} 
int main(){
	myTime now,open;
	now.hour=9;
	now.minute=11;
	cout<<"現在時間:";
	now.pnintTime();
	open.hour=6;
	open.minute=10;
	cout<<"開張時間:";
	open.pnintTime();
}
