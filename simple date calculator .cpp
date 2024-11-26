#include<iostream>
using namespace std;

class date {

private:
	int year, month, day;
	
	
public:

	int get_year() {
		return year;
	}

	int get_month() {
		return month;
	}

	int get_day() {
		return day;
	}

	void set_year(int y) {
		year = y;
	}
	void set_month(int m) {
		month = m;
	}

	void set_day(int d) {
		day = d;
	}

	date(){}

	date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}

	int to_days() {
		return year * 365 + month * 30 + day;
	}



	void dispDiff(date& d2) {
		int diff = this->to_days() - d2.to_days();

		int dy = diff / 365;
		 diff = diff % 365;
		int dm = diff / 30;
		 diff = diff % 30;
		int dd = diff;

		cout << dy << " years and " << dm << " months and " << dd << " days"<<endl;
	}
};

int main(int argc, char* argv[])
{

	date d1;
	d1.set_year(atoi(argv[1]));
	d1.set_month(atoi(argv[2]));
	d1.set_day(atoi(argv[3]));
	
	date d2;
	d2.set_year(atoi(argv[4]));
	d2.set_month(atoi(argv[5]));
	d2.set_day(atoi(argv[6]));

	d1.dispDiff(d2);


	system("pause");
	return 0;
}