#include <iostream>
#include <iomanip>
/* print Fahrenheit-Celcius table
	 for fahr = 0, 20, ..., 300; floating-point version */
float fahr, celcius;
float lower, upper, step;

int main(int argc, char** argv)
{
	
	lower = 0;				/* lower limit of temperature scale */
	upper = 300; 			/* upper limit */
	step = 20;				/* step size */
	
	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32.0);
		std::cout << std::setw(3) << std::fixed << std::setprecision(0) << fahr 
		          << " " << std::setw(6) << std::setprecision(1) << celcius << std::endl;
		fahr = fahr + step;
	}
	
	return 0;
}
