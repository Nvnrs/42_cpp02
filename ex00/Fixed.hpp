// Membres privés :
// ◦ Un entier pour stocker la valeur du nombre en virgule fixe.
// ◦ Un entier constant statique pour stocker le nombre de bits de la partie
// fractionnaire, et dont la valeur sera toujours le littéral entier 8.
// • Membres publics :
// ◦ Un constructeur par défaut qui initialisera la valeur du nombre à virgule fixe
// à 0.
// ◦ Un constructeur de recopie.
// ◦ Une surcharge de l’opérateur d’affectation.
// ◦ Un destructeur.
// ◦ Une fonction membre int getRawBits( void ) const;
// qui retourne la valeur du nombre à virgule fixe sans la convertir.
// ◦ Une fonction membre void setRawBits( int const raw );
// qui initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.


// Default constructor called
// Copy constructor called
// Copy assignment operator called // <-- This line may be missing depending on your implementation
// getRawBits member function called
// Default constructor called
// Copy assignment operator called
// getRawBits member function called
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// Destructor called
// Destructor called
// Destructor

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		int rawBits;
		const static int fractBits;

	public :
		Fixed();
		Fixed(const Fixed &nb);
		Fixed  &operator=(const Fixed &nb);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif