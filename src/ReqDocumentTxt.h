#ifndef _importerTxt_h
#define _importerTxt_h

#include "req.h"


class ReqDocumentTxt: public ReqDocument {
public:
    ReqDocumentTxt(ReqFileConfig &c) {fileConfig = &c;}
    int loadRequirements(bool debug);
};

#endif
