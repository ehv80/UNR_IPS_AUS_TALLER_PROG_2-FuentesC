/*****
 * Función que realiza la multiplicación de 2 números
 * unsigned int de acuerdo a la siguiente fórmula:
 * 	Sean m > 0 , n > 0 ___
 * 			  /  m , si n == 1
 * 			 /   
 * 	prod( m , n ) =	<    prod( 2m , n/2 ) , si n es par
 * 			 \
 * 			  \  prod( 2m , n/2 ) + m , si n es impar
 * 			   ---
 *****/
unsigned int prod( unsigned int m , unsigned int n ){
	if( n == 1 )
		return m;
	else if( ( n & 1 ) == 0 )
		return prod( m << 1 , n >> 1 );
	else
		return prod( m << 1 , n >> 1 ) + m;
}

int main(){
	int n = 1;
	int m = 2;
	int res = prod( m , n );
	printf("Valores: n = %d m = %d 	m*n = %d \n", n, m, res);

	n = 3;
	m = 5;
	res = prod( m , n );
	printf("Valores: n = %d m = %d  m*n = %d \n", n, m, res);

	n = 2;
	m = 1;
	res = prod( m , n );
	printf("Valores: n = %d m = %d  m*n = %d \n", n, m, res);

	n = 2;
	m = 4;
        res = prod( m , n );
	printf("Valores: n = %d m = %d  m*n = %d \n", n, m, res);
}
