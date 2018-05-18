#ifndef RLXUTILS
#define RLXUTILS

#include <time.h>
#include <sys/time.h>
#include <stdio.h>
 
#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif

double avg (double list[], long size);

long power (int x, short power);

void current_utc_time(struct timespec *ts);

double get_time_diff(struct timespec tsi, struct timespec tsf);

#endif
