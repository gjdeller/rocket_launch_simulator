#include "aerodynamics.h"
#include <cmath>

/*
    Aerodynamics:

    Attributes: Drag Coefficient, surface area, lift coefficient

    Inputs: velocity from kinematics, orientation data from Rocket, air density from Environment

    Outputs: Aerodynamics forces (drag, lift)

*/

//Constructor
Aerodynamics::Aerodynamics(double dragCoeff, double surfaceArea, double airDensity)
            : dragCoeff(dragCoeff), surfaceArea(surfaceArea), airDensity(airDensity){}

//calculate Drag
double Aerodynamics::calculateDrag(double velocity) const{

    //equation for drag 1/2 * SA * Density * dragCoefficient
    return 0.5 * airDensity *surfaceArea * dragCoeff;
}

double Aerodynamics::calculateLift(double velocity, double launchAngle) const{
    //lift coeff is an ex placeholder, assuming some coefficient of lift and angle effect

    double liftCoeff = 1.0;

    return liftCoeff * airDensity *surfaceArea * velocity * velocity * std::sin(launchAngle);
}

//setter methods
void Aerodynamics::setDragCoeff(double dragCoeff){
    this->dragCoeff = dragCoeff;
}

void Aerodynamics::setSurfaceArea(double surfaceArea){
    this->surfaceArea = surfaceArea;
}

void Aerodynamics::setAirDensity(double airDensity){
    this->airDensity = airDensity;
}

//getter methods
double Aerodynamics::getDragCoeff() const{
    return dragCoeff;
}

double Aerodynamics::getSurfaceArea() const{
    return surfaceArea;
}

double Aerodynamics::getAirDensity() const{
    return airDensity;
}