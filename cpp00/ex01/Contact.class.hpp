#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <iostream>

class	Contact {

	public :
		Contact( void );
		~Contact( void );

		std::string	get_first_name( void );
		std::string	get_last_name( void );
		std::string	get_nickname( void );
		std::string	get_phone_number( void );
		std::string	get_d_secret( void );
		int			is_set( void );

		void		set_first_name( std::string s);
		void		set_last_name( std::string s);
		void		set_nickname( std::string s);
		void		set_phone_number( std::string s);
		void		set_d_secret( std::string s);
		void		set_is_set( void );
		
	private :
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _d_secret;
		int			_is_set;
};

#endif