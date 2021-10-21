#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

Phonebook::Phonebook( void )
{
    return ;
}

Phonebook::~Phonebook( void )
{
    return ;
}

Contact Phonebook::get_contact(int index)
{
    return (this->list[index]);
}

void    Phonebook::set_contact_first_name( int i, std::string s )
{
    this->list[i].set_first_name( s );
    return ;
}

void    Phonebook::set_contact_last_name( int i, std::string s )
{
    this->list[i].set_last_name( s );
    return ;
}

void    Phonebook::set_contact_nickname( int i, std::string s )
{
    this->list[i].set_nickname( s );
    return ;
}

void    Phonebook::set_contact_phone_number( int i, std::string s )
{
    this->list[i].set_phone_number( s );
    return ;
}

void    Phonebook::set_contact_d_secret( int i, std::string s )
{
    this->list[i].set_d_secret( s );
    return ;
}

void    Phonebook::set_contact( int i )
{
    this->list[i].set_is_set();
    return ;
}