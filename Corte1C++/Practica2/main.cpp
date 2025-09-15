#include <iostream>
/* print Fahrenheit-Celcius table
	 for fahr = 0, 20, ...., 300 */
int fahr, celcius;
int lower, upper, step;

int main(int argc, char** argv)
{
	
	lower = 0;				/* lower limit of temperature scale */
	upper = 300; 			/* upper limit */
	step = 20;				/* step size */
	
	fahr = lower;
	while (fahr <= upper) {
		celcius = 5 * (fahr-32) / 9;
		std::cout << fahr << "\t" << celcius << std::endl;
		fahr = fahr + step;
	}
	
	return 0;
}
