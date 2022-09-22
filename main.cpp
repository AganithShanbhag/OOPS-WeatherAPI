/*
Task phase 1 - complete the inline-functions (class functions) -- they are just mathematical 

*/


#include<bits/stdc++.h>
#include <fstream>
using namespace std;


class weatherReport{

    protected:
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


    //Reading the string and extracting data from it
    void readTheWeather(string str){
        //use regex
    }


    //function to display like a table Detailed summary - everything{   }

    //function to calculate something from already availabe data
    //I'm just typing calculate heat indrex{   }

    //function to convert the data in units demanded by the user - ex . mph to m/s {  }

};


class placeDetails : public weatherReport{

    
    string placeName;
    //location format 
    //decimal degrees DD, minutes MM, seconds SS
    string coordinates;

    public:

    void inputPlaceDetails(string place, string coord){
        placeName = place;
        coordinates = coord;
    }

    void printDetails(){

        cout<<placeName<<"\n";
        cout<<coordinates<<"\n\n";

    }

    void detailedSummary(){
        cout<<"\t\t\t\t---Complete summary of the weather ---\n\n";

        cout<<"\nLoaction : "<< placeName;
        cout<<"\nCoordinates: "<<coordinates;
        cout<<"\n----------\n";
        cout<<"\n";
        cout<<"\nAir-Temperature: "<<AirTemperature;
        cout<<"\nHumidity: "<<Humidity;
        cout<<"\nPrecipitation: "<<Precipitation;
    }

    //function to display only what the user wants- ask what the user wants{   }

        void customdisplay(){
        cout<<"\t\t\t\t---What are thre paramaters you are interested in ? ---\n\n";

        cout<<"Enter the corresponding number to view them";
        string choice;

        cout<<"Yet to build";
        }
    


    string getPlaceName(){
        return placeName;
    }


};


void getPlacenames(string & placeNames){
    ifstream data("data/places.txt");
    getline(data, placeNames);
}


int main(){

    cout<<"WeatherAPI with file streams";

    //read the file with info about the cities/places and dump it into an array of string

    string placeNames;
    getPlacenames(placeNames);    
    
    istringstream ss(placeNames);
 
    string place; // for storing each word
 
    // Traverse through all words
    // while loop till we get
    // strings to store in string word
    vector< placeDetails *> ptr;
    while (ss >> place)
    {
    placeDetails * location = new placeDetails;
    ptr.push_back(location);

    location->inputPlaceDetails(place, "10deg 44mins 3sec");
    }

    for(int i = 0; i < ptr.size(); i++){
        ptr[i]->printDetails();
        string location = "data/weather-data" + ptr[i]->getPlaceName();
        ifstream locationWeather(location);
        string data;
        getline(locationWeather, data);
        ptr[i]->readTheWeather(data);
    }
    //By now u will have an object for every location containing its seperate copy of weather data





//we will read the file (text or DAT file then dump it into the class object)

return 0;

}
