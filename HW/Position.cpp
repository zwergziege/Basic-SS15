//------------------------------------------------------------------------------
// Position.cpp
//
// Group: Group 5, study assistant Christoph Maurer
//
// Authors: Alex Trinker (1430076)
//------------------------------------------------------------------------------
//

#include "Position.h"
#include <sstream>
#include <string>

using std::stringstream;
using std::string;

Position::Position(int x, int y) : x_(x), y_(y)
{
}

//*** Getter and Setter ********************************************************

int Position::getX()
{
  return this->x_;
}

int Position::getY()
{
  return this->y_;
}

//*** Methods ******************************************************************

bool Position::parse(string input)
{
  /*stringstream stream(input);
  stream.ignore(1);
  stream >> this->x_;
  stream.ignore(1);
  stream >> this->y_;

  return true;*/

  if ((input[0] != '(') || (input[input.length() - 1] != ')'))
  {
    return false;
  }

  string::size_type pos = input.find(',');

  if (pos == string::npos)
  {
    return false;
  }

  string x_string = input.substr(1, pos - 1);
  string y_string = input.substr(pos + 1, input.length() - pos - 2);

  stringstream x_stream(x_string);
  stringstream y_stream(y_string);

  int x;
  int y;

  x_stream >> x;
  y_stream >> y;

  if ((x_stream.fail()) || (y_stream.fail()))
  {
    return false;
  }

  this->x_ = x;
  this->y_ = y;

  return true;
}

string Position::toString()
{
  stringstream stream;
  stream << "(" << this->x_ << "," << this->y_ << ")";
  return stream.str();
}
