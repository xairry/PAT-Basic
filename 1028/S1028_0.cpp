#include <string>
#include<cstring>
#include <stdio.h>
#include<iostream>
<<<<<<< HEAD:1028/1028-0.cpp

=======
>>>>>>> a5b998eee9841f710d687cfebc126c693de1f3ab:1028/S1028_0.cpp
using namespace std;

int main() {
    int n;
    scanf("%d\n", &n);

    // temp variables
    int valid_n = 0;
   // char t_name[6];
    int t_year, t_month, t_day;
    string maxname,minname;
	int maxyear=0,maxmonth=0,maxday=0;
	int minyear=9999,minmonth=13,minday=32;
    // young and old
    string young_name, old_name;
<<<<<<< HEAD:1028/1028-0.cpp
    //int young_age = 2100000, old_age = 0;
=======
    int young_age = 2000000, old_age = 0;
>>>>>>> a5b998eee9841f710d687cfebc126c693de1f3ab:1028/S1028_0.cpp

    // now
    int now_year = 2014, now_month = 9, now_day = 6;
    long long now = 2014 * 10000 + now_month * 100 + now_day;

    for (int i=0; i<n; i++) {
    	char t_name[6];
    	//cin>>t_name;
        scanf("%s %d/%d/%d",&t_name, &t_year, &t_month, &t_day); 
        // if invalid
<<<<<<< HEAD:1028/1028-0.cpp
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
=======
        long long age = now - (t_year * 10000 + t_month * 100 + t_day);
        if (age > 2000000 || age < 0) {
            continue;
>>>>>>> a5b998eee9841f710d687cfebc126c693de1f3ab:1028/S1028_0.cpp
        }

        // if valid
        

        // young
<<<<<<< HEAD:1028/1028-0.cpp
        
    }

    printf("%d %s %s", valid_n,minname.c_str(),maxname.c_str());
    //cout<<" "<<old_name<<" "<<young_name;
    //.c_str()
=======
        if (young_age >= age) {
            young_age = age;
            young_name = t_name;
        }

        // old
        if (old_age <= age) {
            old_age = age;
            old_name = t_name;
        }
    }
<<<<<<< HEAD
	
	printf("%d",valid_n);
	if(valid_n != 0	)printf(" %s %s",old_name.c_str(), young_name.c_str());
    //printf("%d %s %s", valid_n, old_name.c_str(), young_name.c_str());
=======

    printf("%d", valid_n);
    // if there is not valid input, do not output "white space".
    if (valid_n != 0) 
        printf(" %s %s", old_name.c_str(), young_name.c_str());
>>>>>>> 21ea9ad6a04d23b6b0df977818f711b7585a6ef2
>>>>>>> a5b998eee9841f710d687cfebc126c693de1f3ab:1028/S1028_0.cpp

    return 0;
}
