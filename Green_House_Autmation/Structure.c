
# include <stdio.h>
#include <time.h>
# define MAX_READINGS 1

struct ClimateDate{
    int day;
    int month;
    int year;
};

struct ClimateTime{
    int hour;
    int minutes;
    int seconds;
};

struct ClimateControl {
    struct ClimateDate date;
    struct ClimateTime time;
    float temperature;  
    float humidity;     
    int fanStatus;
    int luminosity;     
};

void display(struct ClimateControl cc) {

    printf("\n Date  %d : %d : %d", cc.date.day, cc.date.month, cc.date.year);
    printf("\n Time  %d : %d : %d \n", cc.time.hour, cc.time.minutes, cc.time.seconds);

    printf("Temperature: %.1f degree celcius\n", cc.temperature);
    printf("Humidity: %.1f%%\n", cc.humidity);
    printf("Luminosity: %.1f flux\n", cc.luminosity);
    printf("Fan Status: %s\n", cc.fanStatus ? "On" : "Off");
}

void accept(struct ClimateControl *cc) {   

    time_t currentTime;
    time(&currentTime);
    struct tm *  localTime=localtime(&currentTime);
    printf("\n Current Date and Time: %s \n", asctime(localTime));

    cc->date.day=02;
    cc->date.month=10;
    cc->date.year=2024;

    cc->time.hour=19;
    cc->time.minutes=10;
    cc->time.seconds=2;

    printf("\n Reading Climate data \n ");  
    printf("Enter temperature (degree celcius): ");
    scanf("%f", &cc->temperature);
    printf("Enter humidity (%%): ");
    scanf("%f", &cc->humidity);
    printf("Enter luminosity (%%): ");
    scanf("%f", &cc->luminosity);
    printf("Enter fan status (0 for off, 1 for on): ");
    scanf("%d", &cc->fanStatus);
}

int main()
{

    struct ClimateControl readings[MAX_READINGS];

        for(int i=0;i<MAX_READINGS;i++){
                accept(& readings[i]);
        }

        printf("\nGreenhouse climate data readings\n");

        for(int i=0;i<MAX_READINGS;i++){
            display(readings[i]);
        }

   
    return 0;        
}

