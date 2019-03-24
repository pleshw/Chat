#ifndef PLESHW_CHAT_USER
#define PLESHW_CHAT_USER

#include <string>

using Natural = unsigned int;
using String = std::string;


class User{
private:
	String _name;
	String _brief;
	Natural _id;
	bool _online;

public:
	User( String _name_ , 
		  String _brief_ , 
		  Natural _id_  ) 
	: _name { _name_ }, _brief { _brief_ }, _id { _id_ }, _online {false}
	{ /* void */ }

	User( const User &clone ) 
	: _name { clone._name }, _brief { clone._brief }, _id { clone._id }, _online {false}
	{ /* void */ }

	// Properties.
	String name( void ) { return _name; }

	String brief( void ) { return _brief; }

	Natural id( void ) { return _id; }

	bool isOnline( void ) { return _online; }

};



#endif