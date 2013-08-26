<?php
	$max_num = $argv[1];
	$result = array();
	$step = array();
	$letter_num = 1;

	function add_word( $word, $level ) {
		global $result, $max_num;
		if ( $level > $max_num ) {
			if ( crc32( $word + "away" ) == 3408542582 ) {
				print( "salt = $salt\n" );
			}
			if ( crc32( $word + "molt" ) == 1490449654) {
				print( "salt = $salt\n" );
			}
			if ( crc32( $word + "coat" ) == 229080456 ) {
				print( "salt = $salt\n" );
			}
		} else {
			for ( $i = 65; $i <= 126; $i++ ) {
				$word .= chr( $i );
				if ( $level == 1 ) { print( $word."\n" ); }
				add_word( $word, $level + 1 );
				$word = substr( $word, 0, strlen( $word ) - 1 );
			}
		}
	}
	$word = "";
	add_word( $word, 1 );
#	var_dump( $result );
#	print( count( $result )."\n" );
	foreach ($result as $salt) {
		print( $salt."\n"  );
		if ( crc32( $salt + "away" ) == 3408542582 ) {
			print( "salt = $salt\n" );
		}
	}
