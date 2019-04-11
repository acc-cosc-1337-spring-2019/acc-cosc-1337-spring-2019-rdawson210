#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include "temperature_data.h"
#include "temperature.h"

using std::vector;

int main()
{
	vector<Temperature> temps{ Temperature(3, 79.5), Temperature(4, 85.9) };

	TemperatureData data("temps.txt");
	data.save_readings(temps);

	auto readings = data.get_readings();

	for (auto r : readings)
	{
		std::cout << r.get_hour() << " " << r.get_reading() << "\n";
	}

	return 0;
}