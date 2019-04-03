// Author: Jacob Christiansen
// Recitation: 104 – Vipra Gupta
//
// Assignment 3
// Problem 2

#include <iostream>
#include <math.h>
using namespace std;


//This function takes in Temp and Speed as parameters and then uses the Wind Chill equation
//to find and return the Wind Chill back to where the function was called from.
float windChillCalculator(float temp, float windSp){
    float mathThing = pow(windSp,0.16);
    float wind_chill = ((35.74+(0.6215*temp))-( (35.75*mathThing)) + (0.4275*temp*mathThing));
    return wind_chill;
}

//This function takes in Temp and Low & High Speeds, and a Step Variable as parameters and then
//uses the windChillCalculator function to find the Wind Chill of 'temp' degrees at every Wind
//Speed between 'low_wind_speed' and 'high_wind_speed'. It also prints each speed out as it goes through
//the loop.
void printWindChill(float temp,float low_wind_speed,float high_wind_speed,float wind_speed_step){
    float wind_chill;
    float i = low_wind_speed;
    while (i <= high_wind_speed && i >= low_wind_speed){
        wind_chill = windChillCalculator(temp, i);
        cout << "The wind chill is " << wind_chill << " degrees F for an air temperature of " << temp << " degrees F" << " and a wind speed of " << i << " mph." << endl;
        i = i + wind_speed_step; //i += wind
    }

}


//The main function mostly only defines and set variables that are used throughout the other functions.
//All the temps and wind speeds are inputed by the user (twice), then they are used in two other functions.
//Those two other functions are windChillCalculator and printWindChill.
int main(){
    float temp;
    float windSp;
    float low_wind_speed;
    float high_wind_speed;
    float wind_speed_step;

    cout << "Please input the Air Temperature (Fahrenheit): \n";
    cin >> temp;
    cout << "Please input the Wind Speed (mph): \n";
    cin >> windSp;

    float wind_chill = windChillCalculator(temp,windSp);
    cout << "The wind chill is "<<wind_chill<<" degrees F.\n";

    cout << "Please input the Low Wind Speed (mph): \n";
    cin >> low_wind_speed;
    cout << "Please input the High Wind Speed (mph): \n";
    cin >> high_wind_speed;
    cout << "Please input the Wind Speed Step: \n";
    cin >> wind_speed_step;

    printWindChill(temp,low_wind_speed,high_wind_speed, wind_speed_step);

    return 0;

}
