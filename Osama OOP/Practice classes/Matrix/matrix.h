#include <iostream>
using namespace std;

class matrix{
public:
matrix()
{
  this->cols=1;
  this->rows=1;
  this->elements= new int*[this->rows];
  for(int i=0;i<=this->rows;i++)
  {
    this->elements[i]= new int[this->cols];
    for(int j=0;j<=this->cols;j++)
    {
      this->elements[i][j]=1;
    }
  }

}

/*~matrix()
{
  cout<<"\nI am in destructor\n";
  for(int i=0;i<=this->cols;i++)
  {
    delete[] elements[i];
  }
  delete[] elements;
}
*/

matrix operator+(matrix &m)
{
  if((this->cols==m.cols)&& this->rows==m.rows)
  {
  matrix temp;
  temp.cols= m.cols;
  temp.rows= m.rows;
  temp.elements= new int*[this->rows];
  for(int i=0;i<=this->cols;i++)
  {
   temp.elements[i]= new int[this->cols];
    for(int j=0;j<=this->rows;j++)
    {
     temp.elements[i][j] = this->elements[i][j]+m.elements[i][j];
    }
  }
  return temp;
  }

  else
  {
    cout<<"\nAddition not possible\n";
  }
}

int determinant()
{
  if((this->rows==1)&&(this->cols==1))
  {
    return ((this->elements[0][0]*this->elements[1][1])-(this->elements[1][0]*this->elements[0][1]));
  }
}


void show()
{
   for(int i=0;i<=this->rows;i++)
  {
    for(int j=0;j<=this->cols;j++)
    {
      cout<<this->elements[i][j]<<" ";
    }
    cout<<endl;
  }
}


private:
int cols;
int rows;
int **elements;
};