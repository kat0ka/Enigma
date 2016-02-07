#ifndef ENIGMA_H
#define ENIGMA_H


class Enigma{
vector<Rotor> rotors;
Reflector reflector;

    public:
        bool keys(); //выставляем ключ для ротера и проверяем его позицию, должно быть =0
        char coding (sumbol1);//кодируем один символ в другой

        Enigma();
        virtual ~Enigma();
    protected:

};

#endif // ENIGMA_H
