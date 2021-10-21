#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# define NB_CONTACT 8
# include "Contact.class.hpp"

class Phonebook {

    public :
        Phonebook ( void );
        ~Phonebook ( void );

        Contact get_contact( int index );

        void    set_contact_first_name(int i, std::string s );
        void    set_contact_last_name(int i, std::string s );
        void    set_contact_nickname(int i, std::string s );
        void    set_contact_phone_number(int i, std::string s );
        void    set_contact_d_secret(int i, std::string s );
        void    set_contact(int i);

    private :
        Contact list[NB_CONTACT];
};

#endif