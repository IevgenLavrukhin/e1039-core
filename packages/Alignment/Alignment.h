/*
 *  Created on: 06/20/2020
 *      Author: Ievgen Lavrukhin
 */

#ifndef _H_Alignment_H_
#define _H_Alignment_H_

// ROOT
#include <TSQLServer.h>
#include <TSQLResult.h>
#include <TSQLRow.h>

// Fun4All includes
#include <fun4all/SubsysReco.h>

// STL includes
#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <map>
//#include <algorithm>

class SQRun;
class SQSpillMap;

class SQEvent;
class SQHitMap;
class SQHitVector;

class TFile;
class TTree;

class Alignment: public SubsysReco {

public:

	Alignment(const std::string &name = "Alignment");
	virtual ~Alignment() {
	}

	int Init(PHCompositeNode *topNode);
	int InitRun(PHCompositeNode *topNode);
	int process_event(PHCompositeNode *topNode);
	int End(PHCompositeNode *topNode);

private:


};


#endif /* _H_Alignment_H_ */
