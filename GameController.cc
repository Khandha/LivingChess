#include "GameController.h"
#include "FieldPublisher.h"
#include "Field.h"
#include "PiecePublisher.h"
#include "Piece.h"

using namespace LivingChess;

FieldPublisher *GameController::getFieldPublisher(Field *field) {
    return field->getPublisher();
}

PiecePublisher *GameController::getPiecePublisher(Piece *piece) {
    return piece->getPublisher();
}