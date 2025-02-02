// a 16x16 pixel metasprite

const unsigned char RoundSprL[]={
	 0xff,  0xfc,0x00,1,
	7,  0xfc,0x01,1,
	0xff,  4,0x10,1,
	 7,  4,0x11,1,
	 0xff,  0x10c,0x20,1,
	 0x7,  0x10c,0x21,1,
	  0xff, 0x14,0x30,1,
	  0x7,  0x14,0x31,1,
	 0x10f,  0xfc,0x02,1,
	0x17,  0xfc,0x03,1,
	0x10f,  4,0x12,1,
	 0x17,  4,0x13,1,
	 0x10f,  0x10c,0x22,1,
	 0x17,  0x10c,0x23,1,
	  0x10f, 0x14,0x32,1,
	  0x17,  0x14,0x33,1,
	128
};

const unsigned char RoundSprR[]={
	 0xff,  0xfc,0x04,1,
	7,  0xfc,0x05,1,
	0xff,  4,0x14,1,
	 7,  4,0x15,1,
	 0xff,  0x10c,0x24,1,
	 0x7,  0x10c,0x25,1,
	  0xff, 0x14,0x34,1,
	  0x7,  0x14,0x35,1,
	 0x10f,  0xfc,0x06,1,
	0x17,  0xfc,0x07,1,
	0x10f,  4,0x16,1,
	 0x17,  4,0x17,1,
	 0x10f,  0x10c,0x26,1,
	 0x17,  0x10c,0x27,1,
	  0x10f, 0x14,0x36,1,
	  0x17,  0x14,0x37,1,
	128
};

const unsigned char RoundSprAR[]={
	0xff,  0xfc,0x40,1,
	7,  0xfc,0x41,1,
	0xff,  4,0x50,1,
	 7,  4,0x51,1,
	 0xff,  0x10c,0x60,1,
	 0x7,  0x10c,0x61,1,
	  0xff, 0x14,0x70,1,
	  0x7,  0x14,0x71,1,
	 0x10f,  0xfc,0x42,1,
	0x17,  0xfc,0x43,1,
	0x10f,  4,0x52,1,
	 0x17,  4,0x53,1,
	 0x10f,  0x10c,0x62,1,
	 0x17,  0x10c,0x63,1,
	  0x10f, 0x14,0x72,1,
	  0x17,  0x14,0x73,1,
	128

};

const unsigned char RoundSprAL[]={
		 0xff,  0xfc,0x44,1,
	7,  0xfc,0x45,1,
	0xff,  4,0x54,1,
	 7,  4,0x55,1,
	 0xff,  0x10c,0x64,1,
	 0x7,  0x10c,0x65,1,
	  0xff, 0x14,0x74,1,
	  0x7,  0x14,0x75,1,
	 0x10f,  0xfc,0x46,1,
	0x17,  0xfc,0x47,1,
	0x10f,  4,0x56,1,
	 0x17,  4,0x57,1,
	 0x10f,  0x10c,0x66,1,
	 0x17,  0x10c,0x67,1,
	  0x10f, 0x14,0x76,1,
	  0x17,  0x14,0x77,1,
	128

};

const unsigned char RoundSprS[]={
	 0xff,  0xfc,0x00,1,
	7,  0xfc,0x01,1,
	0xff,  4,0x10,1,
	 7,  4,0x11,1,
	 0xff,  0x10c,0x20,1,
	 0x7,  0x10c,0x21,1,
	  0xff, 0x14,0x30,1,
	  0x7,  0x14,0x31,1,
	 0x10f,  0xfc,0x02,1,
	0x17,  0xfc,0x03,1,
	0x10f,  4,0x12,1,
	 0x17,  4,0x13,1,
	 0x10f,  0x10c,0x22,1,
	 0x17,  0x10c,0x23,1,
	  0x10f, 0x14,0x32,1,
	  0x17,  0x14,0x33,1,
	128

};

const unsigned char CoinSpr[]={
	0xff,0xff,0xa0,2,
	0xff, 7,0xb0,2,
	7,0xff,0xa1,2,
	7,7,0xb1,2,
	128
};


const unsigned char BigCoinSpr[]={
	0xff,0xff,0xa2,2,
	0xff,0x7,0xb2,2,
	7,0xff,0xa3,2,
	7,7,0xb3,2,
	128
};

const unsigned char CoinHud[]={
	  0,  0,0xa0,2,
	  8,  0,0xa1,2,
	  0,  8,0xb0,2,
	  8,  8,0xb1,2,
	128
};


const unsigned char EnemyChaseSpr[]={
	 0xff,  0xfc,0x08,1,
	7,  0xfc,0x09,1,
	0xff,  4,0x18,1,
	 7,  4,0x19,1,
	 0xff,  0x10c,0x28,1,
	 0x7,  0x10c,0x29,1,
	  0xff, 0x14,0x38,1,
	  0x7,  0x14,0x39,1,
	 0x10f,  0xfc,0x0a,1,
	0x17,  0xfc,0x0b,1,
	0x10f,  4,0x1a,1,
	 0x17,  4,0x1b,1,
	 0x10f,  0x10c,0x2a,1,
	 0x17,  0x10c,0x2b,1,
	  0x10f, 0x14,0x3a,1,
	  0x17,  0x14,0x3b,1,
	128
};

const unsigned char EnemyBounceSpr[]={
	 0xff,  0xfc,0x88,1,
	7,  0xfc,0x89,1,
	0xff,  4,0x98,1,
	 7,  4,0x99,1,
	 0xff,  0x10c,0xa8,1,
	 0x7,  0x10c,0xa9,1,
	  0xff, 0x14,0xb8,1,
	  0x7,  0x14,0xb9,1,
	 0x10f,  0xfc,0x8a,1,
	0x17,  0xfc,0x8b,1,
	0x10f,  4,0x9a,1,
	 0x17,  4,0x9b,1,
	 0x10f,  0x10c,0xaa,1,
	 0x17,  0x10c,0xab,1,
	  0x10f, 0x14,0xba,1,
	  0x17,  0x14,0xbb,1,
	128
};

const unsigned char EnemyBounceSpr2[]={
	 0xff,  0xfc,0x8c,1,
	7,  0xfc,0x8d,1,
	0xff,  4,0x9c,1,
	 7,  4,0x9d,1,
	 0xff,  0x10c,0xac,1,
	 0x7,  0x10c,0xad,1,
	  0xff, 0x14,0xbc,1,
	  0x7,  0x14,0xbd,1,
	 0x10f,  0xfc,0x8e,1,
	0x17,  0xfc,0x8f,1,
	0x10f,  4,0x9e,1,
	 0x17,  4,0x9f,1,
	 0x10f,  0x10c,0xae,1,
	 0x17,  0x10c,0xaf,1,
	  0x10f, 0x14,0xbe,1,
	  0x17,  0x14,0xbf,1,
	128
};

//enum{ANIM_CHASE1, ANIM_BOUNCE1, ANIM_BOUNCE2};
//const unsigned char * const enemy_anim_list[]={
//	EnemyChaseSpr, EnemyBounceSpr, EnemyBounceSpr2
//}







