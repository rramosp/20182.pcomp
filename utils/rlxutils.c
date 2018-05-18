/** 
#include <time.h>
#include <sys/time.h>
#include <stdio.h>
 
#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif
**/
 

#include "rlxutils.h"
 

double avg(double list[], long size){

    double cc = 0;
    int i;
    for (i=0; i<size; i++) {
        cc += list[i];
    }
    return cc/size;

}

long power  (int x, short power)
{
    if (power == 0) return 1;
    if (power == 1) return x;
    // ----------------------
    int n = 15;
    while ((power <<= 1) >= 0) n--;

    long tmp = x;
    while (--n > 0)
        tmp = tmp * tmp * 
             (((power <<= 1) < 0)? x : 1);
    return tmp;
}

double get_time_diff(struct timespec tsi, struct timespec tsf) {
  double elaps_s = difftime(tsf.tv_sec, tsi.tv_sec);
  long elaps_ns = tsf.tv_nsec - tsi.tv_nsec;
  return elaps_s + ((double)elaps_ns) / 1.0e9;
}

/* 
  current_uct_time

  author: jbenet
  os x, compile with: gcc -o testo test.c 
  linux, compile with: gcc -o testo test.c -lrt
*/
void current_utc_time(struct timespec *ts) {
 
#ifdef __MACH__ // OS X does not have clock_gettime, use clock_get_time
  clock_serv_t cclock;
  mach_timespec_t mts;
  host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
  clock_get_time(cclock, &mts);
  mach_port_deallocate(mach_task_self(), cclock);
  ts->tv_sec = mts.tv_sec;
  ts->tv_nsec = mts.tv_nsec;
#else
  clock_gettime(CLOCK_REALTIME, ts);
#endif
 
}
 
/**
int main(int argc, char **argv) {
 
  struct timespec ts;
  current_utc_time(&ts);
 
  printf("s:  %lu\n", ts.tv_sec);
  printf("ns: %lu\n", ts.tv_nsec);
  return 0;
 
}
**/
