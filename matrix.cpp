#include<iostream>
#include"matrix.hpp"
using namespace std;
Matrix::Matrix()
{
}
Matrix::~Matrix()
{   
  cout<<"析构"; 
}
Matrix Matrix::operator*(const Matrix &A)                             //矩阵*运算
{                                  
	Matrix temp;
	for (int i = 0; i < A.m_rows; i++){
		for (int j = 0; j < A.m_cols; j++){
			for (int k = 0; k < A.m_rows; k++)
				temp.p[i][j] += A.p[i][k] * A.p[k][j];
		}
	}
	return temp;
}
Matrix& Matrix::operator=( Matrix &A)
{
       if(this==&A)
            return *this;
       p[100][100]=A.p[100][100];
}
Matrix add(Matrix *mat)
{
 	Matrix A;
 	Matrix B;
 	Matrix C;
 	if (B.m_rows == A.m_rows &&B.m_cols== A.m_cols)     
    {
	   C.p[100][100]=A.p[100][100]+B.p[100][100];
 	  return C;
    }
    else cout<<"error!";                                     //判断是否同类型可相加矩阵 
}
ostream & operator<<(ostream &output, const Matrix &A)
{
	for(int i = 0; i < A.m_rows; i++)
	{
		for (int j = 0; j < A.m_cols; j++)
			output << A.p[i][j] << " ";
		cout << endl;
	}	
}
void Matrix::InputMatrix()
{       
	for (int i = 0; i < m_rows; i++) 
	{
		for (int j = 0; j < m_cols; j++)
	    {
			cin>>p[i][j];
		}
	}
}
