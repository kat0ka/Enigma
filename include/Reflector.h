#ifndef REFLECTOR_H
#define REFLECTOR_H


class Reflector{ //символ переходит в любой, но не в сам себя.рефлектор не вращается, имеет 1 сторону, не имеет нач позицию

std::vector<char> matching;//соответствие
uint8_t transformAB(uint8_t REFpos);//преобразование



    public:
        Reflector();
       uint8_t REFpos;
    protected:

};

#endif // REFLECTOR_H
