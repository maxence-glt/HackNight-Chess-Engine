#include "bitboard.h"

void initPieceBoards(ChessBoard& board) {
    /*
    board.whitePawns = 0b0000000000000000000000000000000000000000000000001111111100000000;
    board.whiteRooks = 0b0000000000000000000000000000000000000000000000000000000010000001;
    board.whiteKnights = 0b0000000000000000000000000000000000000000000000000000000001000010;
    board.whiteBishops = 0b0000000000000000000000000000000000000000000000000000000000100100;
    board.whiteQueens = 0b0000000000000000000000000000000000000000000000000000000000001000;
    board.whiteKing = 0b0000000000000000000000000000000000000000000000000000000000010000;

    board.blackPawns = 0b0000000011111111000000000000000000000000000000000000000000000000;
    board.blackRooks = 0b1000000100000000000000000000000000000000000000000000000000000000;
    board.blackKnights = 0b0100001000000000000000000000000000000000000000000000000000000000;
    board.blackBishops = 0b0010010000000000000000000000000000000000000000000000000000000000;
    board.blackQueens = 0b0000100000000000000000000000000000000000000000000000000000000000;
    board.blackKing = 0b0001000000000000000000000000000000000000000000000000000000000000;
    */

    board.pawns   = 0b0000000011111111000000000000000000000000000000001111111100000000;
    board.rooks   = 0b1000000100000000000000000000000000000000000000000000000010000001;
    board.knights = 0b0100001000000000000000000000000000000000000000000000000001000010;
    board.bishops = 0b0010010000000000000000000000000000000000000000000000000000100100;
    board.kings   = 0b0001000000000000000000000000000000000000000000000000000000010000;
    board.queens  = 0b0000100000000000000000000000000000000000000000000000000000001000;

    board.allWhitePieces =  0b0000000000000000000000000000000000000000000000001111111111111111;
    board.allBlackPieces = 0b1111111111111111000000000000000000000000000000000000000000000000;
    board.allPieces = board.allWhitePieces | board.allBlackPieces;
}

std::string printBoardPiece(const ChessBoard& refBoard, const Bitboard& tempBoard) {
    if ((refBoard.pawns & tempBoard) == tempBoard)
        return "P";
    if ((refBoard.rooks & tempBoard) == tempBoard)
        return "R";
    if ((refBoard.kings & tempBoard) == tempBoard)
        return "K";
    if ((refBoard.knights & tempBoard) == tempBoard)
        return "N";
    if ((refBoard.queens & tempBoard) == tempBoard)
        return "Q";
    if ((refBoard.bishops & tempBoard) == tempBoard)
        return "B";
    return "_";
}

void printBoard(const ChessBoard& board) {
    Bitboard temp = 1;
    temp = temp << 63;

    for (int col = 0; col <= 7; col++) {
        std::string out = "";
        for (int row = 0; row <= 7; row++) {
            out = printBoardPiece(board, temp) + " " + out;

            if (temp & board.allPieces)
                out = (temp & board.allWhitePieces) == temp ? "w" + out : "b" + out;

            else
                out = "_" + out;

            temp = temp >> 1;
        }
        std::cout << out << '\n';
    }
}

