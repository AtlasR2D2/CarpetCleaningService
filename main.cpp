#include <iostream>

using namespace std;

int main(){
	const int small_room_charge {25};	// Quoted in Dollars
	const int large_room_charge {35};	// Quoted in Dollars
	const double sales_tax {0.06};
	const int estimate_duration {30};	// Quoted in Days
	
	int num_small_rooms = 0;
	int num_large_rooms = 0;
	
	cout << "Welcome to the Carpet Cleaning Service" << endl;
	
	cout << "How many small rooms would you like?: ";
	cin >> num_small_rooms;
	cout << "\nHow many small rooms would you like?: ";
	cin >> num_large_rooms;
	
	cout << "Estimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << num_small_rooms << endl;
	cout << "Number of large rooms: " << num_large_rooms << endl;
	double small_room_cost = num_small_rooms * small_room_charge;
	cout << "Price per small room: $" << small_room_cost << endl;
	double large_room_cost = num_large_rooms * large_room_charge;
	cout << "Price per large room: $" << large_room_cost << endl;
	cout << "Cost: $" << small_room_cost + large_room_cost << endl;
	double total_cost = small_room_cost + large_room_cost;
	double tax = total_cost * sales_tax;
	cout << "Tax: $" << tax << endl;
	cout << "===================================================" << endl;
	cout << "Total estimate: $" << total_cost + tax << endl;
	cout << "This estimate is valid for " << estimate_duration << " days" << endl;
	return 0;
}