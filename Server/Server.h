#ifndef PLESHW_CHAT_SERVER
#define PLESHW_CHAT_SERVER

#include "../User/User.h"
#include <iostream>
#include <map>
#include <memory>
#include <algorithm>

using std::endl;

template< class K, class V >
using Map = std::map< K, V >;

class Server{
private:
	// Key -> User.id / Value -> User
	Map< Natural, User<Server> > _users;

public:
	Server( void ) 
	: _users { /* void */ }
	{ /* void */ }

	// Return a list with all users.
	Map<Natural, User<Server>> AllUsers( void ) { return _users; }

	// Return a list with online users.
	Map<Natural, User<Server>> OnlineUsers( void );
	Map<Natural, User<Server>> OfflineUsers( void );

	// Register an user in server.
	void SignUp( const User<Server>& );
	void SignUp( String, String, Natural );

	// Checks for users online.


	// Server log
	void PrintAllUsers( void );
	void PrintOnlineUsers( void );
	void PrintOfflineUsers( void );
};

using Host = std::unique_ptr<Server>;

#endif