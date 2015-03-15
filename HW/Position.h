//------------------------------------------------------------------------------
// Position.h
//
// Group: Group 5, study assistant Christoph Maurer
//
// Authors: Alex Trinker (1430076)
//------------------------------------------------------------------------------
//

#pragma once

#include <string>

using std::string;

//------------------------------------------------------------------------------
// Position Class
// Represents a Position
//
class Position
{
  //*** Members ******************************************************************

private:
  int x_;
  int y_;

  //*** Constructors *************************************************************

public:
  //------------------------------------------------------------------------------
  // Position Constructor
  // 
  // @param x x-coordinate of Position
  // @param y y-coordinate of Position
  //
  // @return true if successful, false otherwise
  //
  Position(int x, int y);

  //*** Getter and Setter ********************************************************

public:
  int getX();

  int getY();

  //*** Methods ******************************************************************

public:
  //------------------------------------------------------------------------------
  // parse Method
  // Parses a string into coordinates
  //
  // @param input Coordinate-string
  //
  bool parse(string input);

  //------------------------------------------------------------------------------
  // toString Method
  // Prints Position as string
  //
  // @return Coordinates as string
  //
  string toString();
};
