/* This file is part of cqual.
   Copyright (C) 2000-2001 The Regents of the University of California.

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

#ifndef STMT_H
#define STMT_H

#include "linkage.h"

EXTERN_C_BEGIN

void check_condition(const char *context, expression e);
void check_switch(expression e);
void check_void_return(void);
void check_return(expression e);
void check_computed_goto(expression e);

void lookup_label(id_label label);
void use_label(id_label label);
void define_label(id_label label);
void declare_label(id_label label);

void check_labels(void);

void check_case(label case_label);
void check_default(label default_label);
void check_break(statement break_statement);
void check_continue(statement continue_statement);

void push_loop(breakable_stmt loop_statement);
void pop_loop(void);

label_declaration new_label_declaration(region r, const char *name, id_label firstuse);

EXTERN_C_END

#endif
