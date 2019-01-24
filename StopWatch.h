/* 
 * File:   StopWatch.h
 * Author: KjellKod
 * From: https://github.com/KjellKod/StopWatch
 * 
 * Created on 2014-02-07 
 */


#ifndef H_STOPWATCH_H
#define H_STOPWATCH_H
#include <chrono>
#include <boost/chrono.hpp>
class StopWatch {
public:
   typedef std::chrono::steady_clock clock;
   typedef std::chrono::microseconds microseconds;
   typedef std::chrono::milliseconds milliseconds;
   typedef std::chrono::seconds seconds;
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

   std::chrono::steady_clock::time_point Restart();
   boost::chrono::steady_clock::time_point B_Restart();
private:
   clock::time_point mStart;
};

#endif // H_STOPWATCH_H