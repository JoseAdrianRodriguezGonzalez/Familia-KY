const length=37;
export const  items=Array.from({length:length},(_,i)=>`KY-${String(i+1).padStart(2,'0')}`)
export const link= "./assets/"
// Se crea un array
//Array.form crea una copia de un arrelgo iterable 
//The first parameter is the length
//the second one is the function that maps the iterable varaibles
//the map does a string that increasese and padStart initialize with some value