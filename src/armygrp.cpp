/************************************************************************
		OpenHoMM Project by Void_17
		   Licensed under MIT
		  
-------------------------------------------------------------------------
		         armygrp.cpp
	Header: /src/armygrp.cpp
	Descr.: Provides the game armyGroup class and enums
	
*************************************************************************/

#include "armygrp.h"
#include "creaturetype.h"
#include "..zlib\zlib.h" //zlib 

bool armyGroup::HasCreatures() const { //does garrison OR hero have creatures?
	__int8 i,j;
	for (i=0; i<7; ++i) {
		j += (this->type[i] == CID_NONE);
		if (j=7) {
	return false;
		}
	}
        return true;
}

//TODO: finish this function
void armyGroup::SplitArmy(int slot, class armyGroup *army, int a3, bool a4, bool a5) { 
	//CALL_5(void,__thiscall, 0x449B60, this, slot, army, a3, a4, a5);
        //Uses interface dialogs such as TSplitWindow 
}

int armyGroup::save(void *param)

{
  uint write;
  int ret;
  
  write = gzwrite(param,this,28);
  if (write < 28) {
    ret = -1;
  }
  else {
    write = gzwrite(param,this->m_amount,28);
    ret = -1;
    if (27 < write) {
      ret = 0;
    }
  }
  return ret;
}

int armyGroup::load(void *param)

{
  uint read;
  int ret;
  
  read = gzread(param,this,28);
  if (read < 28) {
    ret = -1;
  }
  else {
    read = gzread(param,this->m_amount,28);
    ret = -1;
    if (27 < read) {
      ret = 0;
    }
  }
  return ret;
}

void armyGroup::Initialize() { 
  memset(this, 255u, sizeof(armyGroup));
  memset(this->amount, 0, sizeof(this->amount));
}

armyGroup* armyGroup::armyGroup() {
        armyGroup::Initialize();
}

//TODO: finish this function
armyGroup* armyGroup::armyGroup(armyGroup *this, enum ECreatureType creature_type, int arg)
{
        armyGroup::Initialize();
        return this;
}

//TODO: finish this function
bool armyGroup::HasAllUndead () const {
        
}

//TODO: finish this function
bool armyGroup::HasSomeUndead () const {
        
}

void armyGroup::Dismiss(const int slot) { 
  this->type[ slot ]   = CID_NONE;
  this->amount[ slot ] = 0;
}

bool armyGroup::IsMember(enum ECreatureType Type) {  
  int i = 0; 
  while ( this->type[i] == Type ) //if the creature from the first slot is already of this type, there is no need to check others due to function meaning
  {
    ++i;
    this->type[i];
    if ( i >= 7 )
      return false;
  }
  return true;
}

//TODO: finish this function
int armyGroup::GetAlignments(unsigned char *) const {
}




