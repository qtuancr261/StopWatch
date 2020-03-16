/* 
 * File:   StopWatch.h
 * Author: tuantq3
 * 
 * Created on 2020-03-16
 */

#ifndef H_STOPWATCH_H
#define H_STOPWATCH_H
#include <boost/chrono.hpp>
class StopWatch {
public:
    typedef boost::chrono::steady_clock b_clock;
    typedef boost::chrono::microseconds b_microseconds;
    typedef boost::chrono::milliseconds b_milliseconds;
    typedef boost::chrono::seconds b_seconds;

    StopWatch();
    StopWatch(const StopWatch&);
    StopWatch& operator=(const StopWatch& rhs);

    uint64_t ElapsedUs() const;
    uint64_t ElapsedMs() const;
    uint64_t ElapsedSec() const;

    boost::chrono::steady_clock::time_point B_Restart();

private:
    b_clock::time_point mStart;
};

#endif // H_STOPWATCH_H
