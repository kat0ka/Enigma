#include "Factory.h"

string FilePath();

Factory(const string &path){ //проверка на сущ файлов



}

virtual void read()=0;
virtual void write() const=0;
virtual void generate()=0;

    public:
    Reflector get() const;



Factory::Factory()
{
    //ctor
}

Factory::~Factory()
{
    //dtor
}
