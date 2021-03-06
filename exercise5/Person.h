#pragma once

#ifndef PERSON_H
#define PERSON_H
#include <string>

namespace Entity{

	class Person {
	private:
		std::string name;
		std::string telephone;
		int id;
	public:
		Person(std::string name, std::string telephone, int id );
		~Person();
		std::string GetName() const;
		std::string GetTelephone() const;
		int GetId() const;
	};
}

#endif // !PERSON_H

