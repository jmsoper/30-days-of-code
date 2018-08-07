<?php
$handle = fopen("php://stdin", "r");
$i = 4;
$d = 4.0;
$s = "HackerRank ";

$int = fgets($handle);
$dub = fgets($handle);
$str = fgets($handle);

echo($i + (int)$int);
echo "\n";

$dubSum = $d + (float)$dub;
echo sprintf("%.1f", $dubSum);
echo "\n";

echo($s . $str);

fclose($handle);
?>
