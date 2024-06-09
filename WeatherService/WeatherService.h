#pragma once
#include <string>

class Weather {
public:
    std::string city;       // Название населенного пункта
    double lon;             // Долгота
    double lat;             // Широта
    double temperature;     // Температура
    std::string weather;    // Описание погоды
    double windSpeed;       // Скорость ветра
    int clouds;             // Облачность

    // Конструктор со всеми параметрами
    Weather(const std::string& city, double lon, double lat, double temperature, const std::string& weather, double windSpeed, int clouds)
        : city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {}
};

