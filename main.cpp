/*
Task phase 1 - complete the inline-functions (class functions) -- they are just mathematical 

*/


#include<bits/stdc++.h>
using namespace std;

class weatherReport{

    char placeName[50];
    
    //location format 
    //decimal degrees DD, minutes MM, seconds SS
    char DD[5];
    char MM[5];
    char SS[5];

    //weather parameters
    float AirTemperature;
    int HeatIndex;
    float BarometricPressure;
    float Humidity;
    float Precipitation;
    float SolarRadiation;
    float PhotosyntheticallyActiveRadiation;
    float WindSpeed;
    float Direction;

    public:

    //define a construtor that and initialize with whatever seems fit {  }


    //function to display like a table Detailed summary - everything{   }

    //function to display only what the user wants- ask what the user wants{   }

    //function to calculate something from already availabe data
    //I'm just typing calculate heat indrex{   }

    //function to convert the data in units demanded by the user - ex . mph to m/s {  }



};

int main(){

    cout<<"WeatherAPI with file streams";

//we will read the file (text or DAT file then dump it into the class object)

return 0;

}