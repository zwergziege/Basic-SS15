//------------------------------------------------------------------------------
// Game.h
//
// Group: Group 5, study assistant Christoph Maurer
//
// Authors: Alex Trinker (1430076)
//------------------------------------------------------------------------------
//

#pragma once

#include "Tile.h"
#include "Color.h"

//------------------------------------------------------------------------------
// Game Class
// Represents a Game
//
class Game
{
  //*** Members ******************************************************************

private:
  Color active_player_;
  Tile *start_tile_;
  bool running_;

  //*** Constructors *************************************************************

public:
  //------------------------------------------------------------------------------
  // Game Constructor
  // active_player is set to White
  //
  Game();

  //*** Getter and Setter ********************************************************

public:
  Color getActivePlayer();

  void setStartTile(Tile *start_tile);

  void setRunning(bool running);

  //*** Methods ******************************************************************

public:
  //------------------------------------------------------------------------------
  // run Method
  // Runs the Game and prints command prompt
  //
  void run();

  //------------------------------------------------------------------------------
  // togglePlayer Method
  // Toggles the Player
  //
  void togglePlayer();
};
