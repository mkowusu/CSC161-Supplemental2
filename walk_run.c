    /*****************************************************************
     * Michael Owusu                                                 *
     * Box: 4271                                                     *
     * Supplemental Problem 2 for CSC 161                            *
     * Assignment for Wednesday, February 19                         *
     *****************************************************************/

    /* ***************************************************************
     * Academic honesty certification:                               *
     *   Written/online sources used:                                *                                       
     *       CSC 161 labs and readings;                              *
     *   Help obtained                                               *
     *     Henry M. Walker                                           *
    
     *   My signature below confirms that the above list of sources  *
     *   is complete AND that I have not talked to anyone else       *
     *   [e.g., CSC 161 students] about the solution to this problem *
     *                                                               *
     *   Signature:                                                  *
     *****************************************************************/


#include <stdio.h>
#include <math.h>

// This program prints a table of speeds in the format MPH/KPH based on the times taken to cover a quarter a mile. The table include time values from 3 minutes to 7 minutes and 59 secs.

// Precondiontions: For this program to be run correctly it needs to be compiled using a correct command such as:

//  gcc -o walk_run walk_run.c && walk_run

// computation of miles per hour, given time in minutes and second for traveling 1/4 mile
double compute_mph (int min_time, int sec_time)
{
  return 60.0 / (((sec_time / 60.0) + min_time) * 4.0);
}


// computation of miles per kilometer, given miles per hour
double compute_kph (int min_time, int sec_time)
{
  return ((compute_mph (min_time, sec_time)) * 1.60344);
}


void printPH ()
{

  int sec_time;
  // loop to provide seconds from 0 to 59 to be used in computation of speed
  for (sec_time = 0; sec_time < 60; sec_time++)
    {

      // Declare variables that make calls to compute_mph and compute_kph functions to compute speed
      // Manual entry of minutes and loop entry of seconds
      double MPH_3 = compute_mph (3, sec_time);
      double KPH_3 = compute_kph (3, sec_time);
      double MPH_4 = compute_mph (4, sec_time);
      double KPH_4 = compute_kph (4, sec_time);
      double MPH_5 = compute_mph (5, sec_time);
      double KPH_5 = compute_kph (5, sec_time);
      double MPH_6 = compute_mph (6, sec_time);
      double KPH_6 = compute_kph (6, sec_time);
      double MPH_7 = compute_mph (7, sec_time);
      double KPH_7 = compute_kph (7, sec_time);


      // print MPH and KPH
      printf("   %2d",sec_time);
      printf("   %4.1lf/%4.1lf",MPH_3,KPH_3);
      printf("      %4.1lf/%4.1lf",MPH_4,KPH_4);
      printf("      %4.1lf/%4.1lf",MPH_5,KPH_5);
      printf("     %4.1lf/%4.1lf",MPH_6,MPH_6);
      printf("        %4.1lf/%4.1lf\n",MPH_7,KPH_7);

    }
}

int main ()
{
  // Declare double for main function
  double min_time; 
  double sec_time;

  // Manual format of table
  printf ("\n");
  printf ("\n");
  printf ("                    Speed in MPH and KPH, Given Time for 1/4 mile\n"); 
  printf ("\n");
  printf ("                                      Minutes\n");
  printf ("Seconds      3              4              5             6                7\n");
  {
    // Print calculated speeds into table
    printPH (min_time,sec_time);
  }

  // Finish up
  return 0;
}

// Post Conditions: If this code has run correctly the user will see a chart that has the various times depending on how fast a quarter mile was completed with the rand of 3 minutes and 7 minutes and 59 seconds.
