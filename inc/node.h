#ifndef NODE_H
#define NODE_H
#include "types.h"

typedef enum RolesE
{
  ROLE_SOFTWARE_DEVELOPER = 0,
  ROLE_SOFTWARE_ARCHITECT,
  ROLE_SOFTWARE_ANALYST
} RolesE;


typedef struct PersonDataS
{
  U16 age:7;
  U16 role:3; //RolesE
  U16 padding0:6;
} PersonDataS;

typedef struct NodeS
{
  struct NodeS* next;
  PersonDataS personData;
} NodeS;

#endif
