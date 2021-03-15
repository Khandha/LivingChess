#pragma once

#include "Piece.h"

namespace LivingChess {
    class Pawn: public Piece {
    public:
        virtual Piece *promote() = 0;
    };
}
