/*
 * Utils.h
 *
 *  Created on: 23 sie 2022
 *      Author: User
 */

#ifndef UTILS_H_
#define UTILS_H_

class Date{
public:
	Date();
	virtual ~Date();

private:
	int year;
	int month;
	int day;
};

class Time{
public:
	Time();
	virtual ~Time();
private:
	int hour;
	int minute;
	int sec;
};




#endif /* UTILS_H_ */
