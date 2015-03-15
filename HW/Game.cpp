//------------------------------------------------------------------------------
// Game.cpp
//
// Group: Group 5, study assistant Christoph Maurer
//
// Authors: Alex Trinker (1430076)
//------------------------------------------------------------------------------
//

#include "Game.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

//*** Constructors *************************************************************

Game::Game() : active_player_(COLOR_WHITE), start_tile_(nullptr), running_(false)
{
}

//*** Getter and Setter ********************************************************

Color Game::getActivePlayer()
{
  return active_player_;
}

void Game::setStartTile(Tile *start_tile)
{
  this->start_tile_ = start_tile;
}

void Game::setRunning(bool running)
{
  this->running_ = running;
}

//*** Methods ******************************************************************

void Game::run()
{
  string input;

  this->running_ = true;

  while (this->running_)
  {
    cout << "sep> ";
    //cin >> input;
    std::getline(cin, input);
    //std::cout << input << std::endl;

    if (input == "quit")
    {
      this->running_ = false;
    }
  }
}

void Game::togglePlayer()
{
  if (this->active_player_ == COLOR_WHITE)
  {
    this->active_player_ = COLOR_RED;
  }
  else if (this->active_player_ == COLOR_RED)
  {
    this->active_player_ = COLOR_WHITE;
  }
  else
  {
    //ERROR
  }
}
