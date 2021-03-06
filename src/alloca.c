/* This file is part of cqual.
   Copyright (C) 2002 The Regents of the University of California.

cqual is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

cqual is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with cqual; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA. */

/* Region-based replacement for alloca */
#include <stdlib.h>
#include "regions.h"

region alloca_region = NULL;
void *alloca(size_t t)
{
  if (!alloca_region && t)
    alloca_region = newregion();
  else if (alloca_region && !t)
    {
      deleteregion(alloca_region);
      alloc_region = newregion();
    }

  if (t)
    return typed_ralloc(alloca_region, t, 0);
  else
    return NULL;
}
