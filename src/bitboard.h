/*
 * https://pages.cs.wisc.edu/~psilord/blog/data/chess-pages/rep.html
 * A row of a chess board is called a "rank" and a column is called a "file"
 *
 * The white side will ALWAYS be on the bottom and the black side will ALWAYS be on top
 *
 */

#ifndef HACKNIGHT_CHESS_ENGINE_BITBOARD_H
#define HACKNIGHT_CHESS_ENGINE_BITBOARD_H

#include "types.h"
#include <iostream>

struct ChessBoard {
    Bitboard rooks;
    Bitboard pawns;
    Bitboard knights;
    Bitboard bishops;
    Bitboard queens;
    Bitboard kings;

    Bitboard allWhitePieces;
    Bitboard allBlackPieces;
    Bitboard allPieces;
};

void initPieceBoards(ChessBoard&);
void printChessBoard(const ChessBoard&);
void printBitboard(Bitboard);

#endif
