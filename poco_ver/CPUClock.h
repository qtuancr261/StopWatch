/* 
 * File:   CPUClock.h
 * Author: tuantq3
 *
 * Created on January 25, 2019, 9:38 AM
 */

#ifndef CPUCLOCK_H
#define CPUCLOCK_H

#include "Poco/Timestamp.h"
#include "Poco/DateTime.h"
class CpuClock {
public: 
	typedef Poco::Timestamp Timestamp;
	typedef Poco::Timespan Timespan;
private:
	Timestamp _startPoint;
	
public:
	CpuClock();
	CpuClock(const CpuClock& srcClock);
	CpuClock& operator =(const CpuClock& srcClock);
	// return the elapsed time since the _startPoint
	uint64_t elapsedSec() const;
	uint64_t elapsedMilSec() const;
	uint64_t elapsedMicroSec() const;
	uint64_t elapsedMin() const;
	uint64_t elapsedHour() const;
	// Restart the _startPoint 
	Timestamp restart();
	
};


#endif /* CPUCLOCK_H */

