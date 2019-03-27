#ifndef PLESHW_CHAT_USER
#define PLESHW_CHAT_USER

#include <string>
#include <memory>

using Natural = unsigned int;
using String = std::string;

typedef std::unique_ptr<char> Ip;

template< class Host >
class User{
private:
	String _name;
	String _brief;
	const Natural _userId;
	std::unique_ptr<Host> _connection;
	bool _online;

public:
	User( String _name_ , 
		  String _brief_ , 
		  Natural _id_,
  		  std::unique_ptr<Host> _connection_
  		) 
	: _name { _name_ }, _brief { _brief_ }, _userId { _id_ }, _connection { std::move(_connection_) }, _online {false}
	{ /* void */ }

	User( const User &clone ) 
	: _name { clone._name }, 
	_brief { clone._brief }, 
	_userId { clone._userId }, 
	_connection { new Host (*clone._connection) }, 
	_online {false}
	{ /* void */ }

	// Assign operator. 
	User operator=(const User<Host>& clone) { return User<Host>( clone ); }
	
	// Properties.
	String name( void ) { return _name; }

	String brief( void ) { return _brief; }

	Natural id( void ) const { return _userId; }

	bool isOnline( void ) { return _online; }


	// Methods.
	void Ping(  ){}

};



#endif