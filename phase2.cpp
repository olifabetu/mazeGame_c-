//#include<iostream>
//#include<windows.h>
//#include<conio.h>
//using namespace std;
//
//int maxtrial=0;
//int startx1=5,starty1=19, maxX1=23,maxY1=20, winx1=18, winy1=0;
//char maze1 [23][20]=
//	{
// {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' '},
// {' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ','#'},
// {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#'},
// {'#',' ',' ','#',' ','#','#','#','#','#','#','#','#','#','#',' ','#',' ',' ','#'},
// {'#',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#'},
// {'#',' ','#','#',' ','#',' ','#','#','#','#','#','#','#','#',' ','#',' ',' ','*'},
// {'#',' ','#',' ',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#','#'},
// {'#',' ','#',' ',' ','#',' ','#','#','#','#','#',' ',' ',' ',' ','#',' ','#',' '},
// {'#',' ','#','#','#','#',' ','#','#',' ',' ','#',' ',' ',' ',' ','#',' ','#',' '},
// {'#',' ',' ',' ',' ',' ',' ','#','#',' ',' ','#',' ',' ',' ',' ','#',' ','#',' '},
// {'#','#','#','#','#','#','#','#','#',' ','#','#',' ',' ',' ',' ','#',' ','#',' '},
// {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' '},
// {'#','#','#','#','#','#','#','#',' ','#','#','#','#','#','#',' ','#',' ','#',' '},
// {'#',' ','#','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#',' ','#',' '},
// {'#',' ','#','#',' ','#','#','#','#','#','#',' ','#',' ','#',' ','#',' ','#',' '},
// {'#',' ','#','#',' ','#','#','#','#','#','#',' ','#',' ','#',' ','#',' ','#',' '},
// {'#',' ',' ',' ',' ','#','#','#','#','#','#',' ','#','#','#',' ','#',' ','#',' '},
// {' ','#',' ','#',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ','#',' ','#',' '},
// {' ',' ',' ','#',' ','#',' ',' ',' ',' ',' ','#','#','#','#','#','#',' ','#',' '},
// {'#','#','#','#',' ','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' '},
// {'#','#','#','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' '},
// {'#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
// {'#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
//	};
//void printmaze(char maize[][20],int max1,int max2,int x)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),x);
//
//    for(int i = 0; i <max1; i++)
//	{
//        for(int ii = 0; ii < max2;ii++)
//		{
//            cout << maize[i][ii];
//        }
//        cout << endl;
//    }
//}
//void goLeft(char maize[][20],int &x,int &y,int max1,int max2)
//{  if ((maize[x][y-1]==' '||maize[x][y-1]=='-'||maize[x][y-1]=='|'||maize[x][y-1]=='*')&& (y-1>0||y-1==0))
//	{  if (maize[x][y-1]==' ')
//	   maize[x][y-1]='-';
//	else if(maize[x][y-1]=='-')
//		maize[x][y-1]='*';
//	else if (maize[x][y-1]=='*')
//		maize[x][y-1]='-';
//	     system("CLS");
//         printmaze(maize,max1,max2,9);
//	     y=y-1; 
//	}
//else
//{
//	cout<<"invalid move!";
//	maxtrial+=1;
//}
//}
//void goRight(char maize[][20],int &x,int &y,int max1,int max2)
//{  if ((maize[x][y+1]==' ' || maize[x][y+1]=='-'|| maize[x][y+1]=='|'||maize[x][y+1]=='*')&& (y+1<max2-1||y+1==max2-1))
//         {   if (maize[x][y+1]==' ')
//			 maize[x][y+1]='-';
//		 else if (maize[x][y+1]=='-')
//			 maize[x][y+1]='*';
//		 else if (maize[x][y+1]=='*')
//			 maize[x][y+1]='-';
//		     system("CLS");
//              printmaze(maize,max1,max2,9);
//			  y=y+1;
//
//         }
//    else
//	{
//	cout<<"invalid move!";
//	maxtrial+=1;
//    }
//
//}
//void goUp(char maize[][20],int &x,int &y,int max1,int max2)
//{
//if ((maize[x-1][y]==' '||maize[x-1][y]=='|'||maize[x-1][y]=='-'||maize[x-1][y]=='*') && (x-1>0||x-1==0))
//          { if (maize[x-1][y]==' ')
//			  maize[x-1][y]='|';
//            else if (maize[x-1][y]=='|')
//				maize[x-1][y]='*';
//			else if (maize[x-1][y]=='*')
//				maize[x-1][y]='|';
//			   system("CLS");
//              printmaze(maize,max1,max2,9);
//			  x=x-1;
//          }
//else
//{
//	cout<<"invalid move!";
//	maxtrial+=1;
//}
//}
//void goDown(char maize[][20],int &x,int &y,int max1,int max2)
//{if ((maize[x+1][y]==' '||maize[x+1][y]=='|'||maize[x+1][y]=='-'||maize[x+1][y]=='*')&& (x+1==max1-1||x+1<max1-1))
//          { if (maize[x+1][y]==' ')
//			  maize[x+1][y]='|';
//		  else if (maize[x+1][y]=='|')
//			  maize[x+1][y]='*';
//		  else if (maize[x+1][y]=='*')
//			  maize[x+1][y]='|';
//			    system("CLS");
//                printmaze(maize,max1,max2,9); 
//			  x=x+1;
//          }
//else
//{
//	cout<<"invalid move!";
//	maxtrial+=1;
//}
//}
//void runmaze(char maize[][20],int x,int y,int endx,int endy,int max1,int max2,int color)
//{printmaze(maize,max1,max2,color);
//while ((x!=endx || y!=endy)&& maxtrial<3)
//	{
//	char move;
//	move=_getch();
//	if (move=='W'|| move=='w')
//		goUp(maize,x,y,max1,max2);
//	else if (move=='S'|| move=='s')
//		goDown(maize,x,y,max1,max2);
//	else if (move=='A'|| move=='a')
//		goLeft(maize,x,y,max1,max2);
//	else if (move=='D'|| move =='d')
//		goRight(maize,x,y,max1,max2);
//	else
//		cout<<"invalid input"<<endl;
//	
//}
//	
//if (maxtrial!=3)
//{
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
//cout<<"congradulations,you found your way through!"<<endl;
//}
//
//else
//
//cout<<"Game over!!! loser!"<<endl;
//
//}
//
//int main()
//{ 
//
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
//cout<<"Welcome to the popular maze game"<<endl<<endl;
//
//runmaze(maze1,startx1,starty1,winx1,winy1,maxX1,maxY1,9);
//
//system("pause");
//return 0;
//
//}