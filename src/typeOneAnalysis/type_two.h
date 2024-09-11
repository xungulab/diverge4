#ifndef _TYPE_TWO_H_
#define _TYPE_TWO_H_

#include <string>
#include <vector>

#include "tree.h"
#include "sequence.h"

bool type_two_compute(const std::vector<Tree> &trees,
		  const std::vector<sequence_t> &sequences,
		  std::vector<std::vector<double> > &summary,
		  std::vector<std::vector<double> > &rets2);

#endif
