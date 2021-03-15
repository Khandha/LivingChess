#pragma once

namespace LivingChess {

    class Piece;

    class FieldPublisher {
    public:
        int x, y;
        FieldPublisher *getPublisher() {
            return this;
        }
    };

}