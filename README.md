# Curneutask

Implementing a C++ console-based application to perform the Rivest-Shamir-
Adleman (RSA) algorithm in C++ to encrypt and decrypt the given 3D file (.OBJ). 

●	RSA Algorithm is used to encrypt and decrypt data in modern computer systems and other electronic devices. 
●	RSA algorithm is an asymmetric cryptographic algorithm as it creates 2 different keys for the purpose of encryption and decryption. 
●	It is public key cryptography as one of the keys involved is made public.
●	RSA makes use of prime numbers (arbitrary large numbers) to function. The public key is made available publicly (means to everyone).
●	Only the person having the private key with them can decrypt the original message.

RSA involves the use of public and private keys for its operation. The keys are generated using the following steps:-
1.	Two prime numbers are selected as p and q
2.	n = pq which is the modulus of both the keys.
3.	Calculate totient = (p-1)(q-1)
4.	Choose e such that e > 1 and coprime to totient which means gcd (e, totient) must be equal to 1, e is the public key
5.	Choose d such that it satisfies the equation de = 1 + k (totient), d is the private key not known to everyone.
6.	Cipher text is calculated using the equation c = m^e mod n where m is the message.
7.	With the help of c and d we decrypt the message using equation m = c^d mod n where d is the private key.

#SCREENSHOTS

![image](https://user-images.githubusercontent.com/89207792/163649640-8b3a6ccf-1a0e-4c08-9755-c4d3eac2bb84.png)

#ENCRYPTED FILE

![image](https://user-images.githubusercontent.com/89207792/163649665-8a39390c-cadf-46c5-a14c-7a14256ab227.png)

#DECRYPTED FILE

![image](https://user-images.githubusercontent.com/89207792/163649678-c33c4306-46e9-46e5-9052-0744d2f923d7.png)
