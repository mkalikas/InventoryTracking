#ifndef TRACKING_INFO_HPP_INCLUDED
#define TRACKING_INFO_HPP_INCLUDED

#include <iostream>

struct vehicleData{
    void vehicleNum(int);
    void vehicleYear(int);
    void vehicleMake(std::string);
    void vehicleModel(std::string);
    void license_plate(std::string);
    void vinNum(std::string);
    void eZpass(int); // only get last 6 digits
    void purchasePrice(float);

};

struct Equipment{
    // Will initialize this with enumerated data
};

enum _equipment{
    // Will include various equiptment that is typically carried on trucks
};

struct weight : vehicleData{
    void grossWeight(float);
    void combinedWeight(float);
};

struct inspectionData : vehicleData{
    void oilFilterType(std::string);
    void fuelFilterType(std::string);
    void annual_inspection_dueDate(std::string);
    void tireSize(std::string);
    // possibly add info about spare tire
    void lastOilChange(std::string);
};

struct insursanceAndRegistration : vehicleData{
    // Have to figure out what information is included
    // Policy amount
};


#endif // TRACKING_INFO_HPP_INCLUDED
