
#include<iostream>
#include"Human.h"
#include"Oracle.h"




//================= MOSTAFA SADEGHI   9423067 ================


int main() { 
	
	Human mostafa{"mostafa","sadeghI", 1000,25,22,0,0};
	Human kimia{"kimia","sadeghI", 1,2,16,1,0};
	Human morteza{"morteza","sadeghI", 1,4,50,0,0};
	Human parvin{"parvin","seraji", 1,4,45,1,0};
	Oracle f{"javad"};

	std::cout << f.marry(&morteza, &parvin) << std::endl;
	Human* p1 = morteza + parvin;
	Human* p2 = morteza + parvin;


		// ddf
	
	// delete p;
	// delete p2;
	// *((*p).mother).show();

	return 0;
} 
