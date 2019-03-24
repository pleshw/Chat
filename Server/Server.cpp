#include "Server.h"

	List<User> Server::OnlineUsers( void )
	{
		List<User> tmp_list = _users;
		tmp_list.erase(
			std::remove_if(
				tmp_list.begin(), 
				tmp_list.end(),
				[]( User x ){ return x.isOnline(); }
			),
			tmp_list.end()
		);
		return tmp_list;
	}

	List<User> Server::OfflineUsers( void )
	{
		List<User> tmp_list = _users;
		tmp_list.erase(
			std::remove_if(
				tmp_list.begin(), 
				tmp_list.end(),
				[]( User x ){ return not x.isOnline(); }
			),
			tmp_list.end()
		);
		return tmp_list;
	}

	void Server::SignUp( const User& newUser )
	{
		_users.emplace_back( newUser );
	}

	void Server::SignUp( String tmp_name, String tmp_brief, Natural tmp_id )
	{
		_users.emplace_back( tmp_name, tmp_brief, tmp_id );
	}

	// Server log
	void Server::PrintAllUsers( void )
	{
		for( auto& user : _users )
		{
			std::cout << endl << user.name() 
					  << ": { " << user.brief() << " }" 
					  << (user.isOnline() ? " - [o] Online." : " - [x] Offline.")
					  << endl;
		}
	}
	void Server::PrintOnlineUsers( void )
	{
		for( auto& user : OnlineUsers() )
		{
			std::cout << endl << user.name() 
					  << ": { " << user.brief() << " }" 
					  << (user.isOnline() ? " - [o] Online." : " - [x] Offline.")
					  << endl;
		}
	}
	void Server::PrintOfflineUsers( void )
	{
		for( auto& user : OfflineUsers() )
		{
			std::cout << endl << user.name() 
					  << ": { " << user.brief() << " }" 
					  << (user.isOnline() ? " - [o] Online." : " - [x] Offline.")
					  << endl;
		}
	}