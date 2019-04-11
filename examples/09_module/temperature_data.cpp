#include "temperature_data.h"

void TemperatureData::save_readings(const vector<Temperature>& readings)
{
	fstream file(file_name, std::ios::out | std::ios::app);

	for (auto r : readings)
	{
		file << r.get_hour() << " ";
		file << r.get_reading();
		file << "\n";
	}

	file.close();
}

vector<Temperature> TemperatureData::get_readings()
{
	vector<Temperature> readings;

	fstream file(file_name, std::ios::in);

	int h;
	double t;

	while (file >> h >> t)
	{
		readings.push_back(Temperature(h, t));
	}

	file.close();
	return readings;
	/*
	for homework:
	read through a line of pegs (in a vector of strings)
	add the line to the vector of pegs
	push_back line
	
	if (my_file.is_open())
			{
						while (getline(my_file, line))
						{
									std::cout << line << '\n' ;
						}
						my_file.close();
			}
			else
			{
						std::cout << "Unable to open file" ;
			}
	*/
}