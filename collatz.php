<?php 

function count_steps($num){
	$steps=0;
	while($num!=1){
		if($num&1){
			$num=$num*3+1;
		}else{
			$num=$num/2;
		}
		$steps++;
	}
	return $steps+1;
}
function main(){
	$length=0;
	$max=0;
	for($i=2;$i<1000000;$i++){
		if(count_steps($i)>$length){
			$length=count_steps($i);
			$max=$i;
		}
	}	
	print "Length ==> $length \nNumber ==> $max ";
}
main();
