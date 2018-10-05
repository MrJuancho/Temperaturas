void Celcius(double temp){
	double celcius;
	celcius = (temp-32)/1.8;
	printf("%lf Grados Fahrenheit = %lf Grados Celius.\n",temp,celcius);
}

void Fahrenheit(double temp){
	double fahrenheit;
	fahrenheit = (temp*1.8)+32;
	printf("%lf Grados Celcius = %lf Grados Fahrenheit.\n",temp,fahrenheit);
}
