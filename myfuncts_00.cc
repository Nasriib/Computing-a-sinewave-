//Include file
//
#include "myprog.h"
//Implementation of the allocate function
//
void ece1111_allocate(float*** array, long num_channels, long N){
  //Num_channels is being pointed to as a float and is being allocated to an array
  //
  float** arr;
  arr=new float*[num_channels];
  //For loop getting all the values in num_channels
  //
  for(int i=0; i<num_channels;i++){
    //Array[i] now contains array for num_channel, array contains one array per number of channels
    //
  arr[i] = new float[N];
  }
  *array=arr;
  //Return no value since function is void
  //
  return;
}
//Deallocate function being declared
//
void ece1111_deallocate(float** array, long num_channels, long N){
  //For loop getting all the values from the array of num_channels
  //
  for(int i=0; i<num_channels;i++){
    //Deleting the array
    //
    delete [] array[i];
  }
  return;
}
//Compute sine function
//
void ece1111_compute_sin(float* array, long N, float freq, float fsamp, float amp, float phase){
  //For loop getting N samples
  //
  for(int j=0; j<N;j++){
    //array[j] now contains N samples
    //
    array[j]=amp*sin((2*M_PI)*(freq*j/fsamp+phase/180));
  }
  //Return no value as function is void
  //
      return;
}
