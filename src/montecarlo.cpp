#include "montecarlo.hh"

montecarlo::montecarlo(){
    
}

montecarlo::~montecarlo(){
    
}

void montecarlo::performSimulation(int iterations){
    results.iterations=iterations;
    random_device generator;            		//Creates a random number generator
    uniform_real_distribution<double> realDistribution(-(double)platform.side/2, (double)platform.side/2); //Creates a real number distribution
    struct{
        double x=0;
        double y=0;
    }point;
    for (int i = 0; i < iterations; i++) {
        point.x=realDistribution(generator);
        point.y=realDistribution(generator);
        //cout<<point.x<<", "<<point.y<<endl;
        if (checkPoint(point.x, point.y)){
            results.pointsIn++;
        }else{
            results.pointsOut++;
        }
    }
    results.distribution=(double)results.pointsIn/iterations*4;
}

void montecarlo::generatePlatform(double inputside, double inputdiameter){
    platform.side=inputside;
    platform.diameter=inputdiameter;
}

bool montecarlo::checkPoint(double x, double y){
    int distance;
    bool isIn=false;
    distance=sqrt(pow(x,2)+pow(y,2));
    if (distance<(double)platform.diameter/2){
        isIn=true;
    }
    return isIn;
}