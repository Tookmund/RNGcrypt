function decimalToHexString(number)
{
    if (number < 0)
    {
    	number = 0xFFFFFFFF + number + 1;
    }

    return number.toString(16).toUpperCase();
}
function rngcrypt (str) {
  var ar = [];
  for (var i=0;i<str.length;i++) {
    ar[i] = Math.random();
  }
  for (var j=0;j<ar.length;i++) {
    console.log(decimalToHexString(ar[j]));
  }
}
