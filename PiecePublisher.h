#pragma once

#include "Color.h"

namespace LivingChess {

    class Field;

    class PiecePublisher {
    public:
        Color color;
        Field *position;
        GameController *gameController;
        PiecePublisher *getPublisher() {
            return this;
        }
    };

}