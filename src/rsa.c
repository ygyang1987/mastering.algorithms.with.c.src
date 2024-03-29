/*****************************************************************************
*  --------------------------------- rsa.c --------------------------------  *
*****************************************************************************/

#include "encrypt.h"

/*****************************************************************************
*  -------------------------------- modexp --------------------------------  *
*****************************************************************************/

static Huge modexp(Huge a, Huge b, Huge n)
{

	Huge y;

/*****************************************************************************
*  Compute pow(a, b) % n using the binary square and multiply method.        *
*****************************************************************************/

	y = 1;

	while (b != 0) {

   /**************************************************************************
   *  For each 1 in b, accumulate y.                                         *
   **************************************************************************/

		if (b & 1)
			y = (y * a) % n;

   /**************************************************************************
   *  Square a for each bit in b.                                            *
   **************************************************************************/

		a = (a * a) % n;

   /**************************************************************************
   *  Prepare for the next bit in b.                                         *
   **************************************************************************/

		b = b >> 1;

	}

	return y;

}

/*****************************************************************************
*  ----------------------------- rsa_encipher -----------------------------  *
*****************************************************************************/

void rsa_encipher(Huge plaintext, Huge * ciphertext, RsaPubKey pubkey)
{

	*ciphertext = modexp(plaintext, pubkey.e, pubkey.n);

	return;

}

/*****************************************************************************
*  ----------------------------- rsa_decipher -----------------------------  *
*****************************************************************************/

void rsa_decipher(Huge ciphertext, Huge * plaintext, RsaPriKey prikey)
{

	*plaintext = modexp(ciphertext, prikey.d, prikey.n);

	return;

}
