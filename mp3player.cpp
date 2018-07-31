//the main file


#include <iostream>
#include <mpg123.h>
#include <ao.h>

int main(int argc, char **argv) {


//create an address of mpg123_handle and other mp3 file variables...

	mpg123_handle *mfile;
	char *buffer;
	size_t buffer_size, support;
	int load_err;

//in order to check whether the file is given in the command line...

	if (argc < 2) {
		exit(0);
	}

//audio output requirements..

	int driver_det; //driver details supplied by ao.h *.*
	ao_device device;
	ao_sample_format format; //it's a struct with audio playing stuff like bits, rate, channels, byte format and matrix 

//mp3 details for audio output

	int channels, encoding;
	long rate; //data based on mpg123.h for making an output file

//running initiaisations

	ao_initialise();
	mpg123_init():

//gettings details about driver and getting mp3 file and its buffer value...

	driver_det = ao_default_driver_id();
	mfile = mpg123_new(NULL, &load_err);
	
	 
	

	

	
	
	
