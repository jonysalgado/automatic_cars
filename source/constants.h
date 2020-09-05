# ifndef CONSTANTS
# define CONSTANTS
# include <vector>
# include <tuple>
# include <math.h>
using namespace std;

namespace constants{

// Simulation Parameters
const double SCREEN_WIDTH = 1500;
const double SCREEN_HEIGHT = 975;
const double PIX2M = 0.01;
const double M2PIX = 100.0;
const double RAD2DEGREE = 180/M_PI;
const int N_PLAYERS = 500;
const int N_SENSORS = 11;
// Sample Time Parameters
const double FREQUENCY = 60;
const double SAMPLE_TIME = 1.0/FREQUENCY;
// colors
// TODO: ver como declarar cor no open cv
const tuple<int,int,int> COLOR_WHITE = make_tuple(255,255,255);
const tuple<int,int,int> COLOR_GRAY = make_tuple(70, 66, 47);
const tuple<int,int,int> COLOR_BLACK = make_tuple(0, 0, 0);
const tuple<int,int,int> COLOR_TRACK = make_tuple(110, 110, 110);
const tuple<int,int,int> COLOR_SENSOR = make_tuple(0, 132, 180);
const tuple<int,int,int> COLOR_RED = make_tuple(248, 1, 3);
const tuple<int,int,int> COLOR_YELLOW = make_tuple(255, 255, 0);
// cars dimensions
const double CARS_WIDTH = 14;
const double CARS_HEIGHT = 30;
// sensor dimension
const double SENSOR_HEIGHT = CARS_HEIGHT - 10;
// Move Parameters
const double FORWARD_SPEED = 2.0;
const double BACKWARD_SPEED = -1.0;
const double ANGULAR_SPEED = 2.0;
// Finish line 
const tuple<tuple<int, int>, tuple<int, int>> 
    FINISH_LINE = make_tuple(
        make_tuple(906,506), 
        make_tuple(976, 506));
// cost start
const double COST_START = 2750;
const double INITIAL_DISTANCE = 2627;
// Pressing array
const int KEY_A = 97;
const int KEY_D = 100;
const int KEY_S = 115;
const int KEY_W = 119;
const int KEY_UP = 273;
const int KEY_DOWN = 274;
const int KEY_LEFT = 276;
const int KEY_RIGHT = 275;
// Neural network 
const tuple<int, int, int> 
    NEURAL_SIZE = make_tuple(N_SENSORS + 2, 4, 4);
const double ELITISM_RATE = 0.01;
}



# endif