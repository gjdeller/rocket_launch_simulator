#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

class Aerodynamics{
    public:
        Aerodynamics(double dragCoeff, double surfaceArea, double airDensity);

        //methods to calculate aerodynamic forces
        double calculateDrag(double velocity) const;
        double calculateLift(double velocity, double launchAngle) const;


        //methods to update and get aerodynamic values
        void setDragCoeff(double dragCoeff);
        void setSurfaceArea(double surfaceArea);
        void setAirDensity(double airDensity);
        double getDragCoeff() const;
        double getSurfaceArea() const;
        double getAirDensity() const;
    
    private:
        double dragCoeff;
        double surfaceArea;
        double airDensity;
        double drag;

};

#endif //AERODYNAMICS_H