//Header file
//
#include "myprog.h"
//Main program
//
int main(int argc, char *argv[]){
  //File pointer is argv[1] and is opened and prepared to be written to
  //
  FILE* fp;
  fp = fopen(argv[1],"w");
  //Declaration of all variables included in the functions as ints and floats
  //
  int num_channels;
  num_channels = atoi(argv[2]);

  float sec;
  sec = atof(argv[3]);

  float freq;
  freq = atof(argv[4]);

  float fsamp;
  fsamp = atof(argv[5]);

  float amp;
  amp = atof(argv[6]);

  float phase;
  phase = atof(argv[7]);

  //Converting degrees to radians
  //
  float radians = (M_PI/180*(phase));
  //Array contains the arrays for each channel
  //
  float** array;
  long N=sec*fsamp;
//Function call allocating the memory
  //
  ece1111_allocate(&array, num_channels, N);
  //Start of compute_sin function
  //
  for(int i=0; i<num_channels; i++){
    //Getting N samples
    //
    ece1111_compute_sin(array[i], N, freq, fsamp, amp, radians);
    //Writing to argv[1] file
    //
    fwrite(array[i],sizeof(float),N,fp);
    //Deallocating the memory of the arrays
    //
    ece1111_deallocate(array, num_channels, N);
  }
  //Exit
  //
  return 0;
}
