#include "timer.h"


Timer::Timer(){}

Timer::~Timer(){}

//Time point of the start
void Timer::start(){
startPoint = system_clock::now();
}

//Time point of the end of execution
void Timer::stop(){
endPoint = system_clock::now();
}

//Return elapsed time in given unit
int Timer::getElapsedTime(timeUnit unit){
if(unit == SEC)
  return (int)duration_cast<seconds>(endPoint-startPoint).count();

else if(unit == MILLISEC)
	return (int)duration_cast<milliseconds>(endPoint-startPoint).count();

else if(unit == MICROSEC)
	return (int)duration_cast<microseconds>(endPoint-startPoint).count();

else
	return 0;
}

//Print the returned finished date and time using ctime(&end_time)
time_t Timer::getFinishedTime(){
time_t end_time = system_clock::to_time_t(endPoint);
return end_time;
}
