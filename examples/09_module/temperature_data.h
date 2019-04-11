#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H

#include<fstream>
#include<string>
#include<vector>
#include "temperature.h"

using std::fstream;
using std::string;
using std::vector;

class TemperatureData
{
public:
	TemperatureData(string f) : file_name(f) {}
	void save_readings(const vector<Temperature>& readings);
	vector<Temperature> get_readings();

private:
	string file_name;
};

#endif //TEMPERATURE_DATA_H