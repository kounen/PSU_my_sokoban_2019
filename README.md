# Sokoban

![alt text](https://fr.wikipedia.org/wiki/Sokoban#/media/Fichier:Sokoban_ani.gif)

Sokoban (warehouse keeper in Japanese) is a type of transport puzzle, in which
the player pushes boxes or crates around in a warehouse, trying to get them to
storage locations. The puzzle is usually implemented as a video game.
Sokoban was created in 1981 by Hiroyuki Imabayashi, and published in 1982 by
Thinking Rabbit, a software house based in Takarazuka, Japan.
The game is played on a board of squares, where each square is a floor or
a wall. Some floor squares contain boxes, and some floor squares are marked as
storage locations. The player is confined to the board, and may move
horizontally or vertically onto empty squares (never through walls or boxes).
The player can also move into a box, which pushes it into the square beyond.
Boxes may not be pushed into other boxes or walls, and they cannot be pulled.
The puzzle is solved when all boxes are at storage locations.<br>

<h3>Usage</h3>
./my_sokoban map<br>

<h3>Description</h3>
map is a file representing the warehouse map, containing '#' for walls, 'P' for
the player, 'X' for boxes and 'O' for storage locations.<br>

<h3>Option</h3>
"-h" to display the help page.<br>
