/******************************************************************************
*******************************************************************************
**
**  Copyright (C) Sistina Software, Inc.  1997-2003  All rights reserved.
**  Copyright (C) 2004 Red Hat, Inc.  All rights reserved.
**  
**  This copyrighted material is made available to anyone wishing to use,
**  modify, copy, or redistribute it subject to the terms and conditions
**  of the GNU General Public License v.2.
**
*******************************************************************************
******************************************************************************/

#ifndef __RECOVERD_DOT_H__
#define __RECOVERD_DOT_H__

void dlm_recoverd_kick(struct dlm_ls *ls);
void dlm_recoverd_stop(struct dlm_ls *ls);
int dlm_recoverd_start(struct dlm_ls *ls);
void dlm_recoverd_suspend(struct dlm_ls *ls);
void dlm_recoverd_resume(struct dlm_ls *ls);

#endif				/* __RECOVERD_DOT_H__ */
