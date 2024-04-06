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
    /*
    Bitboard whiteRooks;
    Bitboard whitePawns;
    Bitboard whiteKnights;
    Bitboard whiteBishops;
    Bitboard whiteQueens;
    Bitboard whiteKing;

    Bitboard blackPawns;
    Bitboard blackRooks;
    Bitboard blackKnights;
    Bitboard blackBishops;
    Bitboard blackQueens;
    Bitboard blackKing;
    */

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
