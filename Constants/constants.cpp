# include "constants.h"
# include <math.h>
# include <tuple>
using namespace std;

const double constants::SCREEN_WIDTH = 100;
const double constants::SCREEN_HEIGHT = 650;
const double constants::PIX2M = 0.01;
const double constants::M2PIX = 100.0;
const double constants::RAD2DEGREE = 180/M_PI;
const int constants::N_PLAYERS = 500;
const int constants::N_SENSORS = 11;
const double constants::SCREEN_WIDTH = 30.0;
const double constants::SCREEN_WIDTH = 650;
const double constants::FREQUENCY = 30.0;
const double constants::SAMPLE_TIME = 1.0/constants::FREQUENCY;
const tuple<int,int,int> constants::COLOR_WHITE = make_tuple(255,255,255);
const tuple<int,int,int> constants::COLOR_GRAY = make_tuple(70, 66, 47);
const tuple<int,int,int> constants::COLOR_BLACK = make_tuple(0, 0, 0);
const tuple<int,int,int> constants::COLOR_TRACK = make_tuple(110, 110, 110);
const tuple<int,int,int> constants::COLOR_SENSOR = make_tuple(0, 132, 180);
const tuple<int,int,int> constants::COLOR_RED = make_tuple(248, 1, 3);
const tuple<int,int,int> constants::COLOR_YELLOW = make_tuple(255, 255, 0);
const double constants::CARS_WIDTH = 14;
const double constants::CARS_HEIGHT = 30;
const double constants::SENSOR_HEIGHT = CARS_HEIGHT - 10;
const double constants::FORWARD_SPEED = 2.0;
const double constants::BACKWARD_SPEED = -1.0;
const double constants::ANGULAR_SPEED = 2.0;
const tuple<tuple<int, int>, tuple<int, int>> 
    constants::FINISH_LINE = make_tuple(
        make_tuple(906,506), 
        make_tuple(976, 506));
const double constants::COST_START = 2750;
const double constants::INITIAL_DISTANCE = 2627;
const int constants::KEY_A = 97;
const int constants::KEY_D = 100;
const int constants::KEY_S = 115;
const int constants::KEY_W = 119;
const int constants::KEY_UP = 273;
const int constants::KEY_DOWN = 274;
const int constants::KEY_LEFT = 276;
const int constants::KEY_RIGHT = 275;
const tuple<int, int, int> 
    constants::NEURAL_SIZE = make_tuple(N_SENSORS + 2, 4, 4);
const double constants::ELITISM_RATE = 0.01;