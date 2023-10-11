#include <iostream>
#include <map>
using namespace std;

int main() {
map <int , string> DaysOfTheWeek;

DaysOfTheWeek[1] = "Mon";
DaysOfTheWeek[2] = "Tues";
DaysOfTheWeek[3] = "Weds";
DaysOfTheWeek[4] = "Thurs";
DaysOfTheWeek[5] = "Fri";
DaysOfTheWeek[6] = "Sat";
DaysOfTheWeek[7] = "Sun";

for (int i = 1; i <= DaysOfTheWeek.size(); ++i) {
    cout << "DaysOfTheWeek[" << i << "]: " << DaysOfTheWeek[i] << endl;
}

return 0;
}