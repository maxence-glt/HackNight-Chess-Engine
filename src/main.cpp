#include "SDLWindow.h"
#include "bitboard.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main() {
    // simple window function for SDL
    windowMain();
    ChessBoard test = {};
    initPieceBoards(test);
    printChessBoard(test);
    printBitboard(test.pawns);
}
