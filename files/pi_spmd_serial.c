
/**
  Based on Tim Mattons tutorial at Intel
  https://software.intel.com/en-us/courseware/249662
**/

#include <stdio.h>
#include <omp.h>

static double num_steps = 100000000;
double step;
int main ()
{
    int i,j;
    double x, pi, full_sum = 0.0;
    double start_time, run_time;

    step = 1.0/ num_steps;
    full_sum=0.0;

    start_time = omp_get_wtime();
    for (i=0;i< num_steps; i+=1){
        x = i*step;
        full_sum += 4.0/(1.0+x*x);
    }
    pi = step * full_sum;
    run_time = omp_get_wtime() - start_time;

    printf("pi secs\n");
    printf("%f %f \n",pi,run_time);
}