#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

class WeatherInfo
{
public:
    WeatherInfo()
    {

    }
    WeatherInfo(string date, string day, string weather)
    {
        this->_date = date;
        this->_nalzza = day;
        this->_weather = weather;
    }
    void FindRainyDay(bool& IsFound)
    {
        if (IsFound == true)
            return;
        if (_weather == "Rain" and IsFound == false)
        {
            cout << _date << " " << _nalzza << " " << _weather << endl;
            IsFound = true;
        }
    }
public:
    string _date;
    string _nalzza;
    string _weather;
};

bool Compare(WeatherInfo w1, WeatherInfo w2)
{
    return w1._date < w2._date;
}

int main() {
    cin >> n;

    WeatherInfo wi[100];
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];

        wi[i] = WeatherInfo(date[i], day[i], weather[i]);
    }

    sort(wi, wi + n, Compare);
    
    bool IsFound = false;
    for (int i = 0; i < n; i++)
    {
        wi[i].FindRainyDay(IsFound);
    }


    return 0;
}