/* 
 * File:   StopWatch.cpp
 * Author: tuantq3
 * Created on 2020-03-16
 */

#include "StopWatch.h"
StopWatch::StopWatch()
    : mStart(b_clock::now())
{
    static_assert(boost::chrono::steady_clock::is_steady, "Serious OS/C++ library issues. Steady clock is not steady");
    // FYI:  This would fail  static_assert(std::chrono::high_resolution_clock::is_steady(), "High Resolution Clock is NOT steady on CentOS?!");
}

StopWatch::StopWatch(const StopWatch& other)
    : mStart(other.mStart)
{
}

/// @return StopWatch::StopWatch&  - assignment operator.
StopWatch& StopWatch::operator=(const StopWatch& rhs)
{
    mStart = rhs.mStart;
    return *this;
}

/// @return the elapsed microseconds since start
uint64_t StopWatch::ElapsedUs() const
{
    return boost::chrono::duration_cast<b_microseconds>(b_clock::now() - mStart).count();
}

/// @return the elapsed milliseconds since start
uint64_t StopWatch::ElapsedMs() const
{
    return boost::chrono::duration_cast<b_milliseconds>(b_clock::now() - mStart).count();
}

/// @return the elapsed seconds since start
uint64_t StopWatch::ElapsedSec() const
{
    return boost::chrono::duration_cast<b_seconds>(b_clock::now() - mStart).count();
}
/**
 * Resets the start point
 * @return the updated start point
 */
boost::chrono::steady_clock::time_point StopWatch::B_Restart()
{
    mStart = b_clock::now();
    return mStart;
}
