//------------------------------------------------------------------------------
// Tile.h
//
// Group: Group 5, study assistant Christoph Maurer
//
// Authors: Alex Trinker (1430076)
//------------------------------------------------------------------------------
//

#pragma once

#include "Color.h"

//------------------------------------------------------------------------------
// Tile Class
// Represents a Tile
//
class Tile
{
public:
  //------------------------------------------------------------------------------
  // Type Enum
  // Represents a Type  of Tile(Cross, Curve1 or Curve2)
  //
  enum Type
  {
    TYPE_CROSS = 1,
    TYPE_CURVE_1 = 2,
    TYPE_CURVE_2 = 3
  };

  //*** Members ******************************************************************

private:
  Type side_;
  Color topcolor_;

  //*** Constructors *************************************************************

public:
  //------------------------------------------------------------------------------
  // Tile Constructor
  //
  // @param side        The Type of Tile
  // @param orientation The Player-Color
  //
  Tile(Type side, Color orientation);

  //*** Getter and Setter ********************************************************

public:
  //TODO: Add Getter and Setter

  //*** Methods ******************************************************************

public:
  //TODO: Add Methods
};
