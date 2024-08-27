#include <iostream>
#include <string>
using namespace std;

class Lift {
private:
	int maxFloor;
	int minFloor;
	bool OnOff;
	int currentFloor;

public:

	Lift(int maxFloorValue, int minFloorValue,bool OnOffValue, int currentFloorValue) {

		maxFloor = maxFloorValue;
		minFloor = minFloorValue;
		OnOff = OnOffValue;
		currentFloor = currentFloorValue;
	}
	void liftIsWorking() {

		if (OnOff) {

			cout << "Lift is working";
		}
		else {
			cout << "Lift is not working";
		}
	}
	void Print() {

		cout << "Maximum floor: " << maxFloor << "\nMinimum flooor: " << minFloor << endl;
		liftIsWorking();
		cout<< "\nCurrent floor: " << currentFloor << endl;
		
	}

};
int main() {

	Lift theFirstLift(12, 1, true, 3);
	theFirstLift.Print();
	
	cout << endl<<"---------------------------"<<endl;

	Lift theSecondLift(9, 1, false, 5);
	theSecondLift.Print();
}