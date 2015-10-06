#include <iostream>
#include <cstdio>
using namespace std;

int NUM_CARS=5;

class F1_CARS
    {
    public :
        float topSpeed;
        float acclrator;
        float dist_traveled;
        float speed;
        float finish_time;
        bool finished;
        float cmplt_time;



    };
void initilize_dist_traveled(F1_CARS cars[]);

void initilize_dist_traveled(F1_CARS cars[])
    {
    int i;
    cars[0].dist_traveled=0;
    for (i=1;i<NUM_CARS;i++)
        {
        cars[i].dist_traveled=cars[i].dist_traveled+200;
        }

    }
void initialize_speed(F1_CARS cars[])
    {
    int i;
    for (i=0;i<NUM_CARS;i++)
        {
        cars[i].speed=2*(i+1);
        }

    }
void initialize_top_speed(F1_CARS cars[])
    {
    int i;
    for (i=0;i<NUM_CARS;i++)
        {
        cars[i].topSpeed=150+10*(i+1);
        }

    }

int main()
    {
    int i;
    F1_CARS cars[NUM_CARS];
    initilize_dist_traveled(cars);
    initialize_speed(cars);
    initialize_top_speed(cars);
    for (i=0;i<NUM_CARS;i++)
        {
        printf("%f %f %f \n",cars[i].dist_traveled,cars[i].speed,cars[i].topSpeed);
        }

    }
