#ifndef TRACKING_INFO_HPP_INCLUDED
#define TRACKING_INFO_HPP_INCLUDED

#include <iostream>
#include <string>

struct vehicleData{
	std::string license_plate;
	std::string vin;
	int serial;
	std::string if_gas;

	vehicleData(int vehicleNum, int vehicleYear, std::string vehicleMake_Model) : vehicleNum(vehicleNum), vehicleYear(vehicleYear), vehicleMake_Model(vehicleMake_Model) { } // constructor
	~vehicleData(); //destructor

    std::string license_plate(std::string license_plate) : license_plate(license_plate) { return license_plate; }
    void vinNum(std::string vin) : vin(vin) { }
    int serialNumber(int serial) : serial(serial) { return serial; }
    void typeOfGas(std::string if_gas) : if_gas(if_gas) { if_gas == "yes" ? "yes" : "no"; }
    void eZpass(int vehicleNum); // only get last 6 digits
    void purchasePrice(float);

};

struct weight : vehicleData{
	float _weight;
	float gross;
	weight(float combined, float gross) : _weight(combined), gross(gross) { }

};

struct inspectionData : vehicleData{
    void oilFilterType(std::string); // product ID code different types for what vehicle it is
    void fuelFilterType(std::string); // same concept as oil filter
    void annual_inspection_dueDate(std::string); // include when reminder has to be in here
    void tireSize(std::string); // attributes for tire size depending on car i.e. semi truck or F150 and include spare tire info here
    void lastOilChange(std::string); // save date as digit - digit - digit format

};

struct insursanceAndRegistration : vehicleData{
    // Policy amount
    // if vehicle is insured or not, yes or no and policy number if it is insured
};


#endif // TRACKING_INFO_HPP_INCLUDED


