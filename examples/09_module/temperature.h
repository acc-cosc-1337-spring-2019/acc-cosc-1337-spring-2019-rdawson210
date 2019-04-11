#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
public:
	Temperature(int h, double r) : hour(h), reading(r) {}
	int get_hour() { return hour; }
	double get_reading() { return reading; }

private:
	int hour;
	double reading;
};

#endif // !TEMPERATURE_H