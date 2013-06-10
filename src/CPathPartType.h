#ifndef CPATH_PART_TYPE_H
#define CPATH_PART_TYPE_H

enum CPathPartType {
  CPATH_PART_TYPE_NONE,
  CPATH_PART_TYPE_MOVE_TO,
  CPATH_PART_TYPE_LINE_TO,
  CPATH_PART_TYPE_CURVE2_TO,
  CPATH_PART_TYPE_CURVE3_TO,
  CPATH_PART_TYPE_ARC,
  CPATH_PART_TYPE_CLOSE
};

#endif
