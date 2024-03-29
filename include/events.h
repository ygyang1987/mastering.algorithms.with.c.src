/*****************************************************************************
*  ------------------------------- events.h -------------------------------  *
*****************************************************************************/

#ifndef EVENTS_H
#define EVENTS_H

#include "event.h"
#include "queue.h"

/*****************************************************************************
*  --------------------------- Public Interface ---------------------------  *
*****************************************************************************/

int receive_event(Queue * events, const Event * event);

int process_event(Queue * events, int (*dispatch) (Event * event));

#endif
