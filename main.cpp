#include <iostream>

#include "User/User.h"
#include "Server/Server.h"


using std::endl;

int main( void )
{

	std::cout << endl << "Sign in and get started and use the chat." << endl;

	Server server;
	// server.SignUp( User<Server>("Pleshw","Fullstack developer.",0) );
	// server.SignUp( User<Server>("Floweys","Front-end developer.",1) );
	// server.SignUp( User<Server>("Habib","Back-end developer.",2) );
	// server.SignUp( User<Server>("Luanrocha98","Artista de caricaturas.",3) );
	// server.SignUp( User<Server>("Vini","Concept artist.",4) );

	std::cout << endl << endl << "All users: " << endl << "---------------------------------------------" << endl;
	server.PrintAllUsers();

}