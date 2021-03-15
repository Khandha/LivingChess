#pragma once

#include "FieldPublisher.h"

namespace LivingChess {

    class GameController;

    class Field: protected FieldPublisher {
    public:
        friend class GameController;
        Field relativeField(int dx, int dy);

        int getX();
        int getY();

        // to let to be treated as a std::map key
        bool operator < (const Field &rhs) const;
    };
}