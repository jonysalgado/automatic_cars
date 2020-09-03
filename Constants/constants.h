# include <vector>
using namespace std;

class constants {
public:
    // Simulation Parameters
    static const double SCREEN_WIDTH;
    static const double SCREEN_HEIGHT;
    static const double PIX2M;
    static const double M2PIX;
    static const double RAD2DEGREE;
    static const int N_PLAYERS;
    static const int N_SENSORS;
    static const double SCREEN_WIDTH;
    static const double SCREEN_WIDTH;

    // Sample Time Parameters
    static const double FREQUENCY;
    static const double SAMPLE_TIME;

    // colors
    // TODO: ver como declarar cor no open cv
    static const tuple<int,int,int> COLOR_WHITE;
    static const tuple<int,int,int> COLOR_GRAY;
    static const tuple<int,int,int> COLOR_BLACK;
    static const tuple<int,int,int> COLOR_TRACK;
    static const tuple<int,int,int> COLOR_SENSOR;
    static const tuple<int,int,int> COLOR_RED;
    static const tuple<int,int,int> COLOR_YELLOW;

    // cars dimensions
    static const double CARS_WIDTH;
    static const double CARS_HEIGHT;

    // sensor dimension
    static const double SENSOR_HEIGHT;

    // Move Parameters
    static const double FORWARD_SPEED;
    static const double BACKWARD_SPEED;
    static const double ANGULAR_SPEED;

    // Finish line 
    static const tuple<tuple<int, int>, tuple<int, int>> FINISH_LINE;

    // cost start
    static const double COST_START;
    static const double INITIAL_DISTANCE;

    // Pressing array
    static const int KEY_A;
    static const int KEY_D;
    static const int KEY_S;
    static const int KEY_W;
    static const int KEY_UP;
    static const int KEY_DOWN;
    static const int KEY_LEFT;
    static const int KEY_RIGHT;

    // Neural network 
    static const tuple<int, int, int> NEURAL_SIZE;
    static const double ELITISM_RATE;
};