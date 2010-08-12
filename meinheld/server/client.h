#ifndef CLIENT_H
#define CLIENT_H

#include "server.h"
#include "greenlet.h"

typedef struct {
    PyObject_HEAD
    client_t *client;
    PyGreenlet *greenlet;
} ClientObject;

extern PyTypeObject ClientObjectType;

inline PyObject* 
ClientObject_New(client_t* client);

inline void 
setup_client(void);

#endif
