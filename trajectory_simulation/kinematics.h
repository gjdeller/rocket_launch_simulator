/*
step 1)
    calculate the position
    calculate the velocity
    calculate the acceleration
    calculate the launch angle
    calculate the launch site position
    calculate predict height after launch
    time keeper
step 2)
    flight path must utilize all of these vales to determine the flight path
*/
#ifndef KINEMATICS_H
#define KINEMATICS_H

class Kinematics{
    public:
        Kinematics(double velocity, double position[2], double launchAngle, double acceleration, double time);

        //setters
        //initial setters
        void setInitialPosition();
        void setInitialVelocity();
        void setLaunchAngle();
        void setAcceleration();

        void setFinalVelocity();
        void setTime();
        void setMaxPosition();

        //getters
        //initial getters
        double getPosition();
        double getInitialVelocity() const;
        double getAcceleration() const; //acceleration due to gravity is constant
        double getLaunchAngle() const;
        double getTime();

        //final getters
        double getFinalVelocity(); //final Velocity with respect to time T
        double getMaxPosition();
        
        

    private:
        double velocity;
        double finalvelocity;
        double position[2]; // position is in form [x,y]
        double launchAngle;
        double acceleration = -9.8; //negative due to the force of gravity pulling the rocket down
        double time;
        double maxposition;


};

#endif //KINEMATICS_H