#include <iostream>
#include<string>




double getObesity(double bmi)
{
    double bmiLevel;
	if (bmi >= 40) 
	{
		bmiLevel = 4;
		
	}
	else if (bmi >= 35 && bmi <= 40)
	{
		bmiLevel = 3;
	}
	else if (bmi >= 30 && bmi <= 35)
	{
		bmiLevel = 2;
	}
	else if (bmi >= 25 && bmi <= 30)
	{
		bmiLevel = 1;
	}
	else if (bmi >= 18.5 && bmi <= 25)
	{
		bmiLevel = 0;
	}
	else
	{
		bmiLevel = -1;
	}
	return bmiLevel;
}