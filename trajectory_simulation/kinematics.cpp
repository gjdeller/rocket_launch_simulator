#include "Kinematics.h"
#include <cmath>

/*
step 1)
    calculate the position
    calculate the velocity
    calculate the acceleration/gravity
    calculate the launch angle
    calculate the launch site position
    time keeper
step 2)
    flight path must utilize all of these vales to determine the flight path
*/


// Constructor
Kinematics::Kinematics(double velocity, double position[2], double launchAngle, double acceleration, double time) 
    : velocity(velocity), launchAngle(launchAngle), acceleration(acceleration), time(time) {

    this->position[0] = position[0]; //x
    this->position[1] = position[1]; //y

}

// Initial setters
void Kinematics::setInitialPosition() {
    //Checks if time is zero aka the timer has no started, if so all position is set to [0,0]
    if(time == 0){
        position[0] = 0;
        position[1] = 0;
    }
}

void Kinematics::setInitialVelocity() {
    //rocket launch, so setting the velocity to 400 m/s 
    velocity = 400;
}

void Kinematics::setLaunchAngle() {
    //launch angle set to 90, so that there is strictly a change in Y

    launchAngle = 90;

}

void Kinematics::setAcceleration() {
    //acceleration is negative due to acceleration due to gravity
    acceleration = -9.8;
}

// Final setters
void Kinematics::setInitialPosition() {
    /*
    Using the intial velocity, launch angle and acceleration

    Solve in X direction
    Solve in Y direction
    */
   if(launchAngle == 90){
        position[0] = 0;
        position[1] = 0;
   }
   if(launchAngle < 90){
        //x directionvelocity is constant in x direction 
        position[0] = (velocity*std::cos(launchAngle))*time;
        
        //y direction y = velo-y*time -0.5*9.8*time
        position[1] = ((velocity*std::sin(launchAngle)*time) + 0.5*acceleration*time);
   }
}

void Kinematics::setFinalVelocity() {
    //First we are going to split up velocity into the x and y components

    double x_velo_init;
    double y_velo_init;

    //when launch angle is 90 degrees, the rocket is launched straight up meaning there is no x direction
    if(launchAngle == 90){
        x_velo_init = 0;
        y_velo_init = velocity*std::sin(launchAngle);
    }

    //when the launch angle is less than 90, the rocket has an x and y component in everything,
    if(launchAngle < 90){
        x_velo_init = velocity*std::cos(launchAngle);
        y_velo_init = velocity*std::sin(launchAngle);
    }

     finalvelocity = sqrt((x_velo_init * x_velo_init) + (y_velo_init * y_velo_init));
}

void Kinematics::setTime() {
    // Implementation to be added
        for(int i = 0; i > 0; i++){
        time+=1;
    }
}

void Kinematics::setMaxPosition(){
    if(launchAngle == 90){
        maxposition = position[1] + velocity*std::sin(launchAngle)*time + (0.5 * acceleration * time);
    }
}
// Initial getters
double Kinematics::getPosition() {
    // Implementation to be added
    return position[2]; // Placeholder return value
}

double Kinematics::getInitialVelocity() const {
    // Implementation to be added
    return velocity; // Placeholder return value
}

double Kinematics::getAcceleration() const {
    // Implementation to be added
    return acceleration; // Placeholder return value
}

double Kinematics::getLaunchAngle() const {
    // Implementation to be added
    return launchAngle; // Placeholder return value
}

double Kinematics::getTime() {
    // returns time variable
    return time; // Placeholder return value
}

double Kinematics::getFinalVelocity() {
    // Implementation to be added
    return finalvelocity; // Placeholder return value
}

/*
double Kinematics::getMaxPosition(){
    /*
    Check for max Position in the Y direction when the launch angle is 90
    - this would occue when velocity = 0
    - just going to check if final velo is equal to zero
    


    if(launchAngle == 90 && finalvelocity == 0){
        double y_velo_init = velocity*std::sin(launchAngle);
        double x_velo_init = velocity*std::cos(launchAngle);

    }
    */


