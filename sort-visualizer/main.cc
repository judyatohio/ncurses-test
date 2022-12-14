#include <ncurses.h>
#include <locale.h>
#include "SortPlane.h"

int main() {
    setlocale(LC_ALL, ""); //sets the locale so the characters print right

    initscr(); // initiailizes the screen
    cbreak(); // makes the input one character at a time
    noecho(); // no echo
    keypad(stdscr, TRUE); // enables the keypad (arrow keys, f keys, etc)
    //timeout(10); // getch will timeout after x ms
    start_color(); // allows color
    intrflush(stdscr, FALSE);
    curs_set(0); // makes cursor invisible
    refresh();

    SortPlane sort = SortPlane();

    endwin();
    return 0;
}