
namespace utils{

float clamp();

class Vector2{

private:

    double x;
    double y;

public:

    Vector2(float x, float y);

    void normalize();

    Vector2 dot(Vector2 v);

    double magnitude();

    Vector2 rotation(double angle);

};

class Pose{
private:

    Vector2 position;
    float rotation;

public:

    Pose(float x, float y, float rotation);

};

class TramsformCartesian{
private:

    float x;
    float y;

public:

    TramsformCartesian(float linear_speed, float rotation);
};

// class TramsformPolar{
// private:


// public:

// };

}