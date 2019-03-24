#ifndef PLESHW_CHAT_SERVER
#define PLESHW_CHAT_SERVER

#include "../User/User.h"
#include <iostream>
#include <list>
#include <algorithm>

using std::endl;

template< class T >
using List = std::list<T>;

class Server{
private:
	List< User > _users;
	const String _host;


public:
	Server( String _host_ ) 
	: _users { /* void */ }, _host { _host_ }
	{ /* void */ }

	Server( const Server &clone ) 
	: _users { clone._users }, _host { clone._host }
	{ /* void */ }

	// Return a list with all users.
	List<User> AllUsers( void ) { return _users; }

	// Return a list with online users.
	List<User> OnlineUsers( void );
	List<User> OfflineUsers( void );

	// Register an user in server.
	void SignUp( const User& );
	void SignUp( String, String, Natural );

	// Server log
	void PrintAllUsers( void );
	void PrintOnlineUsers( void );
	void PrintOfflineUsers( void );
};


#endif