/*
 * Workout.h
 *
 *  Created on: 23 sie 2022
 *      Author: User
 */

#ifndef WORKOUT_H_
#define WORKOUT_H_
#include "Utils.h"


class Workout {
public:
	Workout();
	virtual ~Workout();
private:
	Date date;
	Time duration;


};

#endif /* WORKOUT_H_ */
