/* 
 * File:   CRSMatrix.h
 * Author: chachalaca
 *
 * Created on 19. duben 2013, 20:19
 */
#include <vector>
#ifndef CRSMATRIX_H
#define	CRSMATRIX_H

/**
 * Predstavuje matici ulozenou ve formatu CRS. 
 * 
 * @author frantisek.blachowicz(at)gmail.com
 */
class CRSMatrix {
public:
    CRSMatrix(int size);
    CRSMatrix(const CRSMatrix& orig);
    virtual ~CRSMatrix();
private:    
    bool findPosition(int x, int y, int* position);

    std::vector<int> aij; // val
    std::vector<int> i; // row_ptr
    std::vector<int> j; // col_ind   

public:     
    CRSMatrix*  dump();
    int getSize();
    int getElement(int x, int y);
    CRSMatrix* setElement(int x, int y, int value);
    CRSMatrix* removeElement(int x, int y);
    std::vector<int> matrixVectorProduct(std::vector<int> v);
    CRSMatrix* matrixAddition(CRSMatrix* m);
    CRSMatrix* matrixMatrixProduct(CRSMatrix* m);
};

#endif	/* CRSMATRIX_H */

