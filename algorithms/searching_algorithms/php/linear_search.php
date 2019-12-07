<?php

function linearSearch($arr, $arrLength, $searchedValue)
{
	$c = 0;
	
	for ($i = 0; $i < $arrLength; $i++) {
		$c++;
		if ($searchedValue == $arr[$i]) {
			echo "Counter: {$c}";
			return $i;
			break;
		}
	}
	
	return -1;
}



/* $arr = [5, 10, 19, 38, 44, 78, 82, 103, 123, 222]; */

$arr = [];

for($i = 0; $i < 10000000; $i++) {
	$arr[$i] = $i + 1; 
}

$arrLength = count($arr);

$searchedValue = 10000000; // upgrade the memory limit in php.ini 1024

$result = linearSearch($arr, $arrLength, $searchedValue);
echo "<br>";
echo ($result == -1) ? "Value not found in the array!"
				: "Value found at index {$result}";