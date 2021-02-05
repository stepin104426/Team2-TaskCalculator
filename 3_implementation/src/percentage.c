#include "percentage.h"
#include <stdio.h>
#include <math.h>

int percentage(int num1,int num2)
{
  
	String result="Invalid";
	if(num1==0)
  {
    //printf("0");
    return 0;
	}
  else if(num2==0)
  {
    //printf("Invalid");
    return result;
  }
  else
  {
    return (num1/num2)*100;
  }
    
