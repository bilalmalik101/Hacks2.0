#include<stdio.h>
#include<math.h>
int main(){
    double latorigin,latdestination,longorigin,longdestination;
    double airdistance, delta;
    const float radiouearth= 6371;
    printf("\t\t Enter the value in degree\t\t\n");
    printf("Enter the value of Latitude and Longtitude of Origin(Latitude,longtitude):");
    scanf("%lf,%lf",&latorigin,&longorigin);
    printf("Enter the value of Latitude and Longtitude of Destination(latitude ,longtitude):");
    scanf("%lf,%lf",&latdestination,&longdestination);
    latorigin*=(M_PI/180);
    latdestination*=(M_PI/180);
    longorigin*=(M_PI/180);
    longdestination*=(M_PI/180);
    delta=longdestination-longorigin;
    airDistance=acos(sin(latorigin) * sin(latdestination) + cos(latorigin) * cos(latdestination)*cos(delta)) *rediousEarth;
    printf("Origin = %lg degree , %lg degree\n",latorigin*=180/M_PI,longorigin*=180/M_PI);
    printf("Destination = %lg degree, %lg degree\n",latdestination*=180/M_PI, longdestination*=180/M_PI);
    
}