#include <random>
#include <vector>
#include <iostream>


using namespace std;

class montecarlo{
	private:
		struct {
			double side;
			double diameter;
		} platform;
		bool checkPoint(double x, double y);
	public:
		struct{
				int pointsIn=0, pointsOut=0;	//Register the points
				double distribution=0;
				int iterations=0;
		} results;
		montecarlo(); 		//creator
			~montecarlo();	//destructor
		void generatePlatform(double inputside, double inputdiameter);
        void performSimulation(int iterations);
};