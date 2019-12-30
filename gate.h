#pragma once
class gate
{
private:
	
public:
	gate();
	
	~gate();

	bool porte_Et(bool entree1, bool entree2);
	bool porte_Or(bool entree1, bool entree2);
	bool porte_Xor(bool entree1, bool entree2);
};

