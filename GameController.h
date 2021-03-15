#pragma once

#include <map>
#include <vector>

#include "Field.h"
#include "Piece.h"

namespace LivingChess {

    class GameController {
    protected:
        FieldPublisher *getFieldPublisher(Field *field);
        PiecePublisher *getPiecePublisher(Piece *field);
    public:
        virtual std::map<Field, Piece *> perspective(Piece *p) = 0;
        virtual std::vector<Piece *> myPieces(Piece *p) = 0;
        virtual std::map<Field, Piece *> buyEntireMap(Piece *p) = 0;
    };

}