# PSU_my_sokoban_2019

<h3>Purpose of this project</h3>
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

<h3>Percentage</h3>
95.8%<br>

<h3>Mark</h3>
16,5/20<br>

<h3>Coding Style</h3>
<em>Major</em> : 0<br>
<em>Minor</em> : 1<br>
<em>Info</em> : 0<br>

<h3>Coverage</h3>
<em>Branches</em> : 0%<br>
<em>Lines</em> : 0%<br>

<h3>Tests</h3>
<strong>01 - usage and input checks</strong><br>
<em>4/4</em> : 100%<br>
<strong>02 - basic moves</strong><br>
<em>4/4</em> : 100%<br>
<strong>03 - basic collisions and box on targets</strong><br>
<em>4/4</em> : 100%<br>
<strong>04 - intermediate moves and collisions</strong><br>
<em>6/6</em> : 100%<br>
<strong>05 - intermediate maps tests</strong><br>
<em>4/4</em> : 100%<br>
<strong>06 - intermediate winning and losing conditions</strong><br>
<em>1/2</em> : 50%<br>
