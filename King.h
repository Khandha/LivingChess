#pragma once

#include "Piece.h"

namespace LivingChess {

    class King: public Piece {
    public:
        virtual Piece *delegate() = 0;
    };

}