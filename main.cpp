#include <iostream>
#include"matrix.hpp"
#include"matrix.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) 
{
	int m_rows;
	int m_cols;
	float p[100][100];
	Matrix A,B,C;
	cout<<"plz enter the number of rows and columns of matrix A:";
	cin>>m_rows>>m_cols;
	cout<<"plz enter the element of matrix A:";
    A.InputMatrix();
    cout<<"矩阵加法："; 
	Matrix add(Matrix *mat);
    cout<<"矩阵*运算：";
	C=A * B; 
	return 0;                  
}
