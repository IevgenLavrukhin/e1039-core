/*
 *
 *  Created on: 06/20/2020
 *   Author: Ievgen Lavrukhin
 */


#include "Alignment.h"

#include <interface_main/SQHit.h>
#include <interface_main/SQHit_v1.h>
#include <interface_main/SQHitMap_v1.h>
#include <interface_main/SQHitVector_v1.h>
#include <interface_main/SQEvent_v1.h>
#include <interface_main/SQRun_v1.h>
#include <interface_main/SQSpill_v1.h>
#include <interface_main/SQSpillMap_v1.h>

#include <fun4all/Fun4AllReturnCodes.h>
#include <fun4all/PHTFileServer.h>
#include <phool/PHNodeIterator.h>
#include <phool/PHIODataNode.h>
#include <phool/getClass.h>


#include <TFile.h>
#include <TTree.h>

#include <cstring>
#include <cmath>
#include <cfloat>
#include <stdexcept>
#include <limits>
#include <boost/lexical_cast.hpp>



Alignment::Alignment(const std::string& name) :
SubsysReco(name)
{
}


int Alignment::Init(PHCompositeNode* topNode) 
{
	
	printf("Init Alignment! \n");
	
	return Fun4AllReturnCodes::EVENT_OK;
}




int Alignment::InitRun(PHCompositeNode* topNode) 
{
  printf("InitRun Alignment! \n");

	return Fun4AllReturnCodes::EVENT_OK;
}


int Alignment::process_event(PHCompositeNode* topNode)
{

  printf("Process Alignment! \n");


  return Fun4AllReturnCodes::EVENT_OK;
}



int Alignment::End(PHCompositeNode *topNode)
{

  printf("End Alignment! \n");


  return Fun4AllReturnCodes::EVENT_OK;


}




