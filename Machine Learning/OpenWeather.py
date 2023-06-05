import requests
from datetime import datetime

def time_from_utc_with_timezone(utc_with_tz):
    local_time = datetime.utcfromtimestamp(utc_with_tz)
    return local_time.time()

api_key = "1a10d94661b9b9aa9601cc2fc658c35f"

city_name = input("Enter the city name: ")

weather_url = "http://api.openweathermap.org/data/2.5/weather?q=" + city_name + "&appid=" + api_key

response = requests.get(weather_url)

weather_data = response.json()

# print(weather_data)

if weather_data['cod'] == 200:
    kelvin = 273.15
    temp = int(weather_data['main']['temp'] - kelvin)
    feels_like_temp = int(weather_data['main']['feels_like'] - kelvin)
    pressure = weather_data['main']['pressure']
    humidity = weather_data['main']['humidity']
    wind_speed = weather_data['wind']['speed'] * 3.16
    sunrise = weather_data['sys']['sunrise']
    sunset = weather_data['sys']['sunset']
    timezone = weather_data['timezone']
    cloudy = weather_data['clouds']['all']
    description = weather_data['weather'][0]['description']

    sunrise_time = time_from_utc_with_timezone(sunrise + timezone)
    sunset_time = time_from_utc_with_timezone(sunset + timezone)
    
    print("Weather information for city: ", city_name)
    print("Temperature (in Celsius): ", temp)
    print("Feels like (Celsius): ", city_name)
    print("Pressure: ", pressure, " ", "hPa")
    print("Humidity: ", humidity, "%")
    print("Wind Speed (km/hr): ", wind_speed)
    print("Sunrise at: ", sunrise_time)
    print("Suneset at: ", sunset_time)

else:
    print("City: ", city_name, " was not found")