#ifndef FACTORY_H
#define FACTORY_H


class Factory{ //работа с файлами

string FilePath();
Factory(const string &path); //проверка на сущ файлов

virtual void read()=0;
virtual void write() const=0;
virtual void generate()=0;

    public:
    Reflector get() const;
        Factory();
};

#endif // FACTORY_H
