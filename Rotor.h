#ifndef ROTOR_H_
#define ROTOR_H_
#include <vector>
using namespace std;

class Rotor {
	//символ переходит в любой, даже в сам себя
	std::vector<char> matching;//соответствие

	uint8_t transformAB(uint8_t posA);//преобразование А в В
	uint8_t transformBA(uint8_t posB);//преобразование В в А
	bool check;//проверка нулевой позиции

public:
    uint8_t pos; //позиция
	void int rotation; //вращение
	Rotor();
};

#endif /* ROTOR_H_ */
