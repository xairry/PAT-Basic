#include <string>
#include<cstring>
#include <stdio.h>
#include<iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    // temp variables
    int valid_n = 0;
   // char t_name[6];
    int t_year, t_month, t_day;
    string maxname,minname;
	int maxyear=0,maxmonth=0,maxday=0;
	int minyear=9999,minmonth=13,minday=32;
    // young and old
    string young_name, old_name;
    //int young_age = 2100000, old_age = 0;

    // now
    int now_year = 2014, now_month = 9, now_day = 6;
    long long now = 2014 * 10000 + now_month * 100 + now_day;

    for (int i=0; i<n; i++) {
    	char t_name[6];
    	//cin>>t_name;
        scanf("%s %d/%d/%d",&t_name, &t_year, &t_month, &t_day); 
        // if invalid
        //long long age = now - (t_year * 10000 + t_month * 100 + t_day);
        //if (age > 2000000 || age < 0 || t_month > 12 || t_day > 31) 
		 if((t_year < 2014 || (t_year == 2014 && t_month < 9) || (t_year == 2014 && t_month == 9 && t_day <= 6)) &&
           (t_year > 1814 || (t_year == 1814 && t_month > 9) || (t_year == 1814 && t_month == 9 && t_day >= 6))) 
		{
			valid_n++;
			if (minyear > t_year||((minyear==t_year)&&(minmonth>t_month))||((minyear==t_year)&&(minmonth==t_month)&&(minday>t_day))){
            minyear=t_year;
            minmonth=t_month;
            minday=t_day;
			minname = t_name;
        	}

        // old
        if (maxyear < t_year||((maxyear==t_year)&&(maxmonth<t_month))||((maxyear==t_year)&&(maxmonth==t_month)&&(maxday<t_day))) {
            maxyear=t_year;
            maxmonth=t_month;
            maxday=t_day;
			maxname = t_name;
        	}
            //continue;
        }

        // if valid
        

        // young
        
    }

    printf("%d %s %s", valid_n,minname.c_str(),maxname.c_str());
    //cout<<" "<<old_name<<" "<<young_name;
    //.c_str()

    return 0;
}
