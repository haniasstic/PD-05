#include <iostream>
#include <cmath>
using namespace std;
string ProjectTimeCalculation(int neededhours, int days, int workers);
main()
{
	int neededhours, days, workers;
	string result;
	cout << " Enter the needed hours: ";
	cin >> neededhours;
	cout << " Enter the days that the firm has: ";
	cin >> days;
	cout << "Enter the number of all workers: ";
	cin >> workers;
	result = ProjectTimeCalculation(neededhours, days, workers);
	cout << result;
	return 0;
}
string ProjectTimeCalculation(int neededhours, int days, int workers)
{
	float WorkingHoursOfAllDays;
	int trainingHours, totalWorkingHours, workersWorkingTime, ProjectTime;
	string result;
	// working hours of a single day is 8 hour and overtime is 2 hours
	WorkingHoursOfAllDays = days * (8 + 2);
	trainingHours = (0.10) * WorkingHoursOfAllDays;
	totalWorkingHours = WorkingHoursOfAllDays - trainingHours;
	workersWorkingTime = (totalWorkingHours * workers);
	ProjectTime = workersWorkingTime;
	if (ProjectTime < neededhours)
	{
		int timeNeeded = neededhours - ProjectTime;
		result = "Not enough time!" + to_string(timeNeeded) + " hours needed";
		return result;
	}

	if (ProjectTime >= neededhours)
	{
		int timeLeft = ProjectTime - neededhours;
		result = "Yes!" + to_string(timeLeft) + " hours left";
		return result;
	}
}
