#include "Server.h"

	// Map<Natural, User<Server>> Server::OnlineUsers( void )
	// {
	// 	Map<Natural, User<Server>> tmp_list = _users;
	// 	tmp_list.erase(
	// 		std::remove_if(
	// 			tmp_list.begin(), 
	// 			tmp_list.end(),
	// 			[]( auto x ){ return x.second.isOnline(); }
	// 		),
	// 		tmp_list.end()
	// 	);
	// 	return tmp_list;
	// }

	// Map<Natural, User<Server>> Server::OfflineUsers( void )
	// {
	// 	Map<Natural, User<Server>> tmp_list = _users;
	// 	tmp_list.erase(
	// 		std::remove_if(
	// 			tmp_list.begin(), 
	// 			tmp_list.end(),
	// 			[]( auto x ){ return not x.second.isOnline(); }
	// 		),
	// 		tmp_list.end()
	// 	);
	// 	return tmp_list;
	// }

	void Server::SignUp( const User<Server>& newUser )
	{
		_users[newUser.id()] = newUser;
	}

	void Server::SignUp( String tmp_name, String tmp_brief, Natural tmp_id )
	{
		_users[tmp_id] = new User<Server>( tmp_name, tmp_brief, tmp_id );
	}

	// // Server log
	// void Server::PrintAllUsers( void )
	// {
	// 	for( auto& user : _users )
	// 	{
	// 		std::cout << endl << user.name() 
	// 				  << ": { " << user.brief() << " }" 
	// 				  << (user.isOnline() ? " - [o] Online." : " - [x] Offline.")
	// 				  << endl;
	// 	}
	// }
	// void Server::PrintOnlineUsers( void )
	// {
	// 	for( auto& user : OnlineUsers() )
	// 	{
	// 		std::cout << endl << user.name() 
	// 				  << ": { " << user.brief() << " }" 
	// 				  << (user.isOnline() ? " - [o] Online." : " - [x] Offline.")
	// 				  << endl;
	// 	}
	// }
	// void Server::PrintOfflineUsers( void )
	// {
	// 	for( auto& user : OfflineUsers() )
	// 	{
	// 		std::cout << endl << user.name() 
	// 				  << ": { " << user.brief() << " }" 
	// 				  << (user.isOnline() ? " - [o] Online." : " - [x] Offline.")
	// 				  << endl;
	// 	}
	// }