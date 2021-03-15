#include "Field.h"
#include "FieldOutOfRangeException.h"

using namespace LivingChess;

bool Field::operator < (const Field &rhs) const {
    return this->y * 8 + this->x < rhs.y * 8 + rhs.x;
}

Field Field::relativeField(int dx, int dy) {
    Field result;
    if (x + dx < 0 || x + dx > 7 || y + dy < 0 || y + dy > 7) {
        throw FieldOutOfRangeException();
    }
    result.x = x + dx;
    result.y = y + dy;
    return result;
}

int Field::getX() {
    return x;
}

int Field::getY() {
    return y;
}
