/*
===============================================================================

  FILE:  SMreader_off.h
  
  CONTENTS:
  
    Reads a mesh from an OFF format and presents it as a (poor) streaming mesh.
  
  PROGRAMMERS:
  
    martin isenburg@cs.unc.edu
  
  COPYRIGHT:
  
    copyright (C) 2003  martin isenburg@cs.unc.edu
    
    This software is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  
  CHANGE HISTORY:
  
    30 May 2005 -- created after a night full of thunderstorms and lightning
  
===============================================================================
*/
#ifndef SMREADER_OFF_H
#define SMREADER_OFF_H

#include "smreader.h"

#include <stdio.h>

class SMreader_off : public SMreader
{
public:

  // smreader interface function implementations

  void close();

  SMevent read_element();
  SMevent read_event();

  // smreader_off functions

  bool open(FILE* file, bool compute_bounding_box=false, bool skip_vertices=false);

  SMreader_off();
  ~SMreader_off();

private:
  FILE* file;
  int skipped_lines;
  char* line;
};

#endif
