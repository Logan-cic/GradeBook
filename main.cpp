
#include "GradeBook.cpp"
#include "GradeBook.h"

//This is where the execution of program begins
int main()
{
    
   //Apenas 4 turmas podem ser criadas
   //GradeBook.cpp: const int GradeBook::NUMTURMAS = 4;
   GradeBook gradebook1( "Math", 3 );
   GradeBook *gradebookPtr;
   int novosAlunos = 5;

   //Criando uma lista de alunos
   vector< string * > alunos;
   alunos.push_back( new string( "Noemi") );  
   alunos.push_back( new string( "Sopia") );
   alunos.push_back( new string( "Catarina") ); 
   alunos.push_back( new string( "Raphael") ); 
   alunos.push_back( new string( "Ursula") ); 
   alunos.push_back( new string( "Natasha") ); 
   
   gradebookPtr = new GradeBook( "Geografia", 3 );

   gradebookPtr->displayMessage( );

   gradebookPtr->setNumAlunos( novosAlunos );

   gradebookPtr->displayMessage( );   

   //Cadastrando os alunos da lista no gradebook de Geografia
   for( int i = 0; i < alunos.size(); i++ )
      gradebookPtr->cadastrarAlunoGradeBook( *alunos[ i ] );
   
   gradebookPtr->displayMessage( );

   return 0;
}