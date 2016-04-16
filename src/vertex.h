#include types.h

class Vertex() {
private:
    Vec3f position;
    Vec3f color;
    Vec2f texCoords;

public:
    Vertex(){};
    Vertex(Vec3f position) : position(position) {};
    Vertex(Vec3f position, Vec3f color) : position(position), (color) {};
};
