CRS
===

C++ implementation of CRS/CSR format for storing sparse matrices. More info: http://en.wikipedia.org/wiki/Sparse_matrix




TUTORIÁL 
=====================================================================
Popis nejčastějších úloh s třídou CRSMatrix

ve všech příkladech předpokládáme:

	#include "CRSMatrix.h" // include tridy s implementaci CRS

	CRSMatrix *matrix; // deklarace prom.
	CRSMatrix *matrix2
	matrix = new CRSMatrix(n) // vytvorime instanci tridy, n v argumentu=rozmer matice

*****************************************************

Vložení prvku
-----------
Matice je indexována od 0 do n-1!

	matrix->setElement(0,2,83)->setElement(3,5,88);


Vloží prvek 83 na pozici (0,2) a 88 na pozici(3,5)

Získání prvku
----------------
	
	matrix->getElement(6,7);

Vrátí hodnotu prvku na pozici (6,7)
Přičtení matice
---------------

	matrix2 = new CRSMatrix(n) // potrebujeme druhou matici
	matrix2->setElement(..)->...->setElement(..); //naplnime prvky
	matrix->matrixAddition(matrix2);


Vynásobení maticí zprava
-------------------
Vytvoříme matrix2 jako v předchozím případě.

   	matrix->matrixMatrixProduct(matrix2);

Vynásobení vektorem
--------------------

	std::vector<int> vector;
	std::vector<int> res;

Naplníme daty dle manuálu std::vector, např.:

	vector.insert(vector.end(), 88); 

vloží 88 na konec

	res = matrix->matrixVectorProduct(vector);
