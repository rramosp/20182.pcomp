
/**
  Based on Tim Mattons' tutorial at Intel
  https://software.intel.com/en-us/courseware/249662
**/

#include <stdio.h>
#include <omp.h>

#define MAX_THREADS 32

static long num_steps = 100000000;
double step;
int main ()
{
    // ESPECIFICA LA CANTIDAD CORRECTA DE PADDING AQUI
    long pad = 1;

    int i,j;
    double pi, full_sum = 0.0;
    double start_time, run_time;
    
    double sum[MAX_THREADS * pad];

    step = 1.0/(double) num_steps;

    printf("pi secs nthreads\n");

    j=4;

    for (j=1;j<=MAX_THREADS ;j++) {
        omp_set_num_threads(j);
        full_sum=0.0;
        start_time = omp_get_wtime();

        #pragma omp parallel private(i)
        {
            int id = omp_get_thread_num();
            int numthreads = omp_get_num_threads();
            double x;

            sum[id*pad] = 0.0;

            for (i=id;i< num_steps; i+=numthreads){
                x = (i+0.5)*step;
                sum[id*pad] = sum[id*pad] + 4.0/(1.0+x*x);            
            }
        }

        for(full_sum = 0.0, i=0;i<j;i++)
            full_sum += sum[i*pad];

        pi = step * full_sum;
        run_time = omp_get_wtime() - start_time;
        printf("%f %f %d\n",pi,run_time,j);
    }


}