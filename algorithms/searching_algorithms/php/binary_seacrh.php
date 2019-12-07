<?php
// Binary search by iteration

function binarySearch($arr, $lowerBound, $upperBound, $searchedValue)
{
	$c = 0;
	while($lowerBound <= $upperBound)
	{
		$midPoint = floor(($lowerBound + $upperBound) / 2);
		
		if ($searchedValue == $arr[$midPoint]) {
			$c++;
			echo "Counter : {$c}";
			return $midPoint;
		}
		
		if ($searchedValue < $arr[$midPoint]) {
			$c++;
			$upperBound = $midPoint - 1;
		}
		else {
			$c++;
			$lowerBound = $midPoint + 1;
		}
	}
	
	return -1;
}


/* $arr = [5, 10, 19, 38, 44, 78, 82, 103, 123, 222]; */

$arr = [];

for($i = 0; $i < 10000000; $i++) {
	$arr[$i] = $i + 1; 
}

$lowerBound = 0;
$upperBound = count($arr) - 1;

$searchedValue = 10000000; // upgrade the memory limit in php.ini 1024

$result = binarySearch($arr, $lowerBound, $upperBound, $searchedValue);
echo "<br>";
echo ($result == -1) ? "Value not found in the array!"
				: "Value found at index {$result}";