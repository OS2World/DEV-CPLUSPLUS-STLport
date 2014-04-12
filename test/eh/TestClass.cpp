/***********************************************************************************
	TestClass.cpp
	
 * Copyright (c) 1997
 * Mark of the Unicorn, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Mark of the Unicorn makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.

***********************************************************************************/
#include "TestClass.h"

# if defined (EH_NEW_IOSTREAMS) || defined (EH_NEW_IOSTREAM_HEADERS)
#include <iostream>
# else
#include <iostream.h>
# endif

# ifdef EH_NEW_IOSTREAMS
EH_STD::ostream&
operator << (EH_STD::ostream& s,
	     const TestClass& t) {
  return s<<t.value();
}

# else
ostream&
operator << (ostream& s, const TestClass& t) { return s<<t.value(); }
# endif

