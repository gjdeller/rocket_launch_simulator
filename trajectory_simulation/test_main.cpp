#include <iostream>
#include "Kinematics.h"

int main() {
    // Initial values
    double initialPosition[2] = {0.0, 0.0}; // Initial position (x, y)
    double initialVelocity = 400.0; // Initial velocity in m/s
    double launchAngle = 45.0; // Launch angle in degrees
    double acceleration = -9.8; // Acceleration due to gravity in m/s^2
    double time = 10.0; // Time in seconds

    // Create a Kinematics object
    Kinematics rocket(initialVelocity, initialPosition, launchAngle, acceleration, time);

    // Set initial values
    rocket.setInitialPosition();
    rocket.setInitialVelocity();
    rocket.setLaunchAngle();
    rocket.setAcceleration();

    // Compute final results
    rocket.setFinalPosition();
    rocket.setFinalVelocity();

    // Output results
    std::cout << "Position (x, y): (" << rocket.getPosition() << ", " << rocket.getPosition() << ")" << std::endl;
    std::cout << "Initial Velocity: " << rocket.getInitialVelocity() << " m/s" << std::endl;
    std::cout << "Acceleration: " << rocket.getAcceleration() << " m/s^2" << std::endl;
    std::cout << "Launch Angle: " << rocket.getLaunchAngle() << " degrees" << std::endl;
    std::cout << "Time: " << rocket.getTime() << " seconds" << std::endl;
    std::cout << "Final Velocity: " << rocket.getFinalVelocity() << " m/s" << std::endl;

    return 0;
}
