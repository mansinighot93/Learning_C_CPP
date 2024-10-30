
# include <stdio.h>
#include <time.h>
# define MAX_READINGS 3

struct ClimateControl {
    float temperature;  
    float humidity;     
    int fanStatus;
    int luminosity;     
};

void ClimateTime(){
    time_t currentTime;
    time(&currentTime);
    struct tm *  localTime=localtime(&currentTime);
    printf("\nCurrent Date and Time: %s \n", asctime(localTime));
}
void display(struct ClimateControl cc) {
    
    ClimateTime();
    printf("Temperature: %.1f degree celcius\n", cc.temperature);
    printf("Humidity: %.1f%%\n", cc.humidity);
    printf("Luminosity: %.1f flux\n", cc.luminosity);
    printf("Fan Status: %s\n", cc.fanStatus ? "On" : "Off");
}

void accept(struct ClimateControl *cc) {   

    printf("Reading Climate data \n ");  
    printf("Enter temperature (degree celcius): ");
    scanf("%f", &cc->temperature);
    printf("Enter humidity (%%): ");
    scanf("%f", &cc->humidity);
    printf("Enter luminosity (%%): ");
    scanf("%f", &cc->luminosity);
    printf("Enter fan status (0 for off, 1 for on): ");
    scanf("%d", &cc->fanStatus);
    ClimateTime();
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

