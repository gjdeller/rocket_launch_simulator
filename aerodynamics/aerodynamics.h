#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

class Aerodynamics{
    public:
        Aerodynamics(double dragCoeff, double surfaceArea, airDensity);

        //methods to calculate aerodynamic forces
        double calculateDrag(double velocity) const;
        double calculateLift(double velocity, double launchAngle) const;

        //methods to update and get aero
}