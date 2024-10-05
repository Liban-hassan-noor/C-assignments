/*
Author: Liban
Reg no: 01/0068/2024
*/
#include <iostream>
#include <cmath>  
using namespace std;


double calculateFare(double distance, int passengers, bool airport) {
    double fare = 0.0;

    fare = distance * 1.80;

   
    if (passengers > 1) {
        fare += 1.00;  // $1.00 for the 1st additional passenger
        fare += (passengers - 2) * 0.50;  // $0.50 for each additional passenger beyond the 1st
    }

    // Add airport surcharge 
    if (airport) {
        fare += 2.00;
    }

    //  Ensure minimum fare of $5.00
    if (fare < 5.00) {
        fare = 5.00;
    }

    
    return fare;
}

int main() {
    double distance;
    int passengers;
    char airportResponse;
    bool airport = false;

    // Prompt the user
    cout << "Enter the distance of the cab ride (in 1/10 of a mile): ";
    cin >> distance;
    cout << "Enter the number of passengers: ";
    cin >> passengers;
    cout << "Is the trip to/from the airport? (y/n): ";
    cin >> airportResponse;

    // converting answer to boolean form
    if (airportResponse == 'y' || airportResponse == 'Y') {
        airport = true;
    }

    // Calculating the fare price
    double totalFare = calculateFare(distance, passengers, airport);

    
    cout << "The total fare for the trip is: $" << endl;

    return 0;
}
