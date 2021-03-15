#pragma once

#include "PiecePublisher.h"
#include "Field.h"

namespace LivingChess {

    class GameController;

    class Piece: protected PiecePublisher {
    protected:
        GameController *gameController;
        friend class GameController;
    public:
        virtual Field move() = 0;
        virtual ~Piece() = default;
    };

}