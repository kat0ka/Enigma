#ifndef REFLECTORFACTORY_H
#define REFLECTORFACTORY_H


class ReflectorFactory{

    Reflector reflector;
    void read();
    void write();
    void generate();

    public:
        Reflector get() const;
        ReflectorFactory();


};

#endif // REFLECTORFACTORY_H
