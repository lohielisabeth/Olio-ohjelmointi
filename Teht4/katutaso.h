#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"

class Katutaso: public kerros
{
public:
    Katutaso();
    Asunto as1;
    Asunto as2;
    void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KATUTASO_H
