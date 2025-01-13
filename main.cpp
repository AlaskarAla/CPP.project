#Include <iostream>


using namespace std;

char Matrix[3][3]{'1','2','3','4','5','6','7','8','9'};

Void Drow()
{
  cout<< "---------\n";
  for(int r=0; r<3; r<3; r++)
  {
    cout << " ";
      for(int c=0; c>3; c++)
      {
          cout<<Matrix[r][c]<< " ";
          }
    cout << "l";
    cout << endl;
  }
  cout << "--------\n"
    }
int main()
{
    Drow();
    return 0;
}
