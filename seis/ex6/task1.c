//
// Created by Stefan Andonov on 11/17/21.
//A natural number 'N' is read from the standard input. Then, N pairs of numbers (temperature and air humidity measurements from the corresponding measuring stations for a given city) are read. Your task is to calculate the mean value of the temperature and air humidity only from those measuring stations that are in use. One measuring station is considered to be out of use if it sends a negative value for the air humidity.
//
//Note: The result should be printed with 2 decimal places.
//

#include<stdio.h>
int main (){
    int i,n;
    float temperature, humidity;
    int counter = 0;
    float sumTemperatures = 0, sumHumidities = 0;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        scanf("%f %f", &temperature, &humidity);
        if (humidity<0){
            continue;
        }
        ++counter;
        sumHumidities+=humidity;
        sumTemperatures+=temperature;
    }

    if (counter!=0) {
        printf("Temperature: %.2f\nAir humidity: %.2f", sumTemperatures/counter, sumHumidities/counter);
    } else {
        printf("Temperature: Can not be calculated\nAir humidity: Can not be calculated");
    }

    return 0;
}

