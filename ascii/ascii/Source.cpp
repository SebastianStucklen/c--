﻿#include<iostream>
#include<stdio.h>
#include<io.h>
#include<fcntl.h>
using namespace std;
int main() {
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠠⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<<endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⣠⣶⢶⣤⡀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣎⣿⣱⢫⡔⡀⠀⠀⠀⣼⢻⠍⡿⢾⣹⢣⡍⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣠⢟⡿⢼⡱⠀⠀⠀⡽⣋⡾⣜⠿⣞⡳⠌⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢞⡣⡜⠡⠀⠀⠱⠁⠘⠏⠊⠑⠀⠀⠀⠠⠤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡹⣖⢦⣀⡀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣴⣤⣤⣤⣤⣴⡶⣤⡤⠄⠀⠀⠀⠀⢀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠊⠃⠁⠀⠀⣀⣠⣴⣲⢿⣻⢯⣟⢾⡳⣟⠾⣽⢺⡽⢳⡟⠁⠀⠀⠀⠀⠀⠌⠀⡐⠀⠡⠈⢄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⣤⣖⣾⣳⢯⠷⣭⢏⣧⣻⢶⣻⢮⡷⣯⢟⡾⢯⣟⣞⠃⠀⠀⠀⠀⠀⠀⠀⢀⠠⠀⠁⠌⠠⢀⠃⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠡⠀⠀⠀⢎⡱⢂⡄⡀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣄⢦⣳⢞⣧⣛⣮⢳⢯⡞⣽⣞⣻⣼⢳⣯⢞⣯⠷⣏⡟⣾⣛⠾⣜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⢁⠐⡀⠂⠌⡐⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⠒⡅⠂⠁⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⡔⣯⢟⣎⣟⣧⢿⣖⡿⣞⣯⢷⣛⣷⡺⢷⣞⣻⣞⣻⣞⡽⣾⡽⣶⢯⡿⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⡀⠂⢀⠐⠀⢂⠐⠠⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣞⣿⣲⣻⡼⢯⣶⢻⡼⢧⣯⢳⡻⡜⣏⡳⢮⣙⡳⣎⢷⣫⢗⡾⣹⠳⡟⡽⢫⠟⠼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠂⠀⠈⢀⠈⠀⢁⠂⡀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡿⣞⠱⣣⠻⡝⣎⢳⡙⢎⡴⢣⢓⡙⢦⡙⡜⢬⠱⢌⠲⢥⠚⡔⠡⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠂⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠳⣌⠳⢄⠳⡘⠤⢃⠜⠢⣌⠱⣊⠜⢢⠱⣘⠢⢍⠢⠍⢆⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠂⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠠⠌⡓⣌⠒⡨⢡⠘⡡⢊⠌⡱⢀⠃⢆⡉⢆⠱⢀⠣⢌⠱⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡄⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠒⡄⠢⢄⠱⡀⢎⠐⡡⠊⡔⠡⢊⠔⡡⠉⠆⠌⢂⠌⠂⠌⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⠴⣁⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠢⠁⠄⣈⠰⢁⠊⠄⡑⠠⢃⠔⠡⢂⠱⠈⡄⢡⠑⡈⠰⢈⠠⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢚⡱⢃⡎⡀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠄⡁⠂⠄⢂⠡⢈⠐⠠⢁⠂⠌⡐⢀⠂⢡⠠⢁⠂⡁⢂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠀⠈⠄⠣⠘⠥⡘⢥⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠠⢠⠀⡄⠠⢀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠌⡐⢀⠂⢀⠁⠌⡀⠐⠠⠈⠐⠀⡈⢀⠐⠀⡈⠄⠂⠄⠂⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⢧⡀⠀⠡⢉⢂⠱⡈⠞⡠⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⡑⢆⠓⡌⡑⢊⡔⠡⠓⣌⠱⡘⠤⢃⠜⠀⠀⢀⠂⡐⠀⠄⠂⠀⠄⠀⠂⠀⠄⠁⡀⢀⠀⠀⠂⢀⠀⠄⠂⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣦⠀⠐⠠⢈⠰⢁⠎⣅⠣⢀⠀⠀⠀⠀⠀⠀⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⢈⢆⢣⠘⡌⡅⢢⠑⡡⢌⠱⣈⢇⠣⠂⠀⠀⠄⠂⠄⠐⠀⡀⠁⠀⡀⠀⠁⠀⠀⠀⠀⠀⠈⠀⠀⠀⠠⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣮⢇⡀⠀⢂⠐⡈⠐⠢⢍⠆⠤⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⢨⡘⢆⡹⢰⡉⢦⡉⠖⣌⠳⣌⢆⠃⠀⠀⠠⢈⠐⠀⢈⠀⠀⢀⠀⠀⠀⠀⠀⠂⠀⠀⠐⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣟⡺⡴⠀⠀⠂⠄⡁⠀⠈⢎⡱⢂⠆⡄⢀⠀⠀⠠⠈⢤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠦⠜⠢⠕⠣⠚⠅⠚⠉⠈⠓⠈⠊⠀⠀⣀⠂⠄⡈⠀⡀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢮⡱⣝⢢⠀⠀⠂⠄⠡⠀⠐⢌⡱⢊⠜⢢⡘⢤⠣⡍⣖⡂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⢀⠰⠀⢈⠐⠀⠁⠀⠀⠀⠀⠀⠐⠯⠑⠫⡇⢦⠰⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢃⠷⡌⢧⣒⠀⠀⠠⠁⠂⠀⠐⠤⢃⠎⡱⠜⢦⡛⡵⣎⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⢂⠀⢂⠀⠠⠁⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠉⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡘⣌⠲⡙⢦⡙⡆⠀⠀⠠⠁⠂⠀⠘⡄⢊⠱⣉⠖⣩⢓⠮⣇⣛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡈⠀⠀⠂⠄⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢢⠱⢌⠣⡙⢎⡵⣩⠄⠀⠀⠐⠀⢁⠐⡈⢆⠱⡈⠜⡰⣋⢞⡱⣝⡂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⠠⠁⠀⡁⠀⠠⠀⠀⠀⠸⡇⠀⠀⠀⠀⠀⠀⠀⠹⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⢟⠀⠀⠀⠀⠀⠀⠀⠀⢸⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠰⢨⠑⣊⠒⣍⠲⢌⢧⣋⠄⠀⠀⢈⠀⢂⠐⡈⢆⠑⡊⠵⣘⢎⠶⣸⡅⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠠⠁⠠⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢂⠜⢠⠃⡔⠩⣄⠳⡘⢦⡙⢦⠀⠀⠀⡐⠠⢀⠰⢈⠂⠡⠙⡜⣎⠲⣱⢚⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠩⢀⠡⠀⠀⠌⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢈⠂⠌⢂⠱⣈⠱⡠⢃⡍⢦⣙⠮⡥⠀⠀⠀⠄⠂⠐⠠⠈⠀⠈⠖⣩⠣⢇⡏⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢁⠂⠄⠀⠄⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⢁⠂⠌⡘⢄⠣⢄⢣⡁⠧⣘⠦⣩⢞⡱⣣⠀⠀⠀⠂⠁⠠⠁⠀⠀⠘⣄⠫⣜⡘⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⡌⡑⠠⢈⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠠⠀⠄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠈⠠⠀⠌⡐⢠⠂⡜⣈⠦⡘⢥⣃⠳⢦⡹⣜⢧⡻⣄⠀⠀⠈⠀⠀⠀⠀⠀⠀⢏⡲⣉⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⢠⠑⠠⡁⠒⠀⠠⠀⠂⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠠⡐⠌⠰⡁⢆⠴⣡⢎⡴⣡⢆⡰⣄⢣⡜⡤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠈⠀⠄⡁⠌⡐⠀⢆⡘⢄⠢⡜⡱⢎⡴⣋⠶⡱⣎⡳⣽⡹⣆⠀⠀⠀⠀⠀⠀⠀⠀⠈⢖⠡⢊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⡘⢄⠣⡁⠤⠁⠂⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡐⡌⢆⢣⡘⢬⢣⡝⣎⡞⣱⡚⡼⣱⢋⡷⢭⣳⢏⠷⣭⢿⣹⢞⡶⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢀⠐⠈⠠⠐⢠⠐⡉⢄⠒⡌⠒⡥⡙⢎⡖⢥⢫⡕⣎⢳⢧⣻⢼⣃⠀⠀⠀⠀⠀⠀⠀⠈⢄⠃⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠰⠁⠎⡐⢀⠂⠡⠐⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠢⣅⢚⡬⣙⠦⣝⢮⣱⢚⣴⣫⢷⣹⣳⢭⡟⣼⢯⣟⣮⣟⣵⣫⡗⣯⡳⣟⡼⢦⣤⠀⠀⠀⠀⠀⠀⠈⠀⡀⠠⠈⡀⢁⠂⠜⡐⠌⡒⢌⡑⠦⡙⠬⣜⢣⡓⣎⢧⣋⠶⣹⡞⣽⣂⠀⠀⠀⠀⠀⠀⠀⠌⡘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠌⡂⠅⠂⠄⠂⠈⢀⠠⠐⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄⢢⠍⡳⢌⠯⡴⣩⠞⣜⡲⣍⡻⣜⢧⡻⡵⣯⣛⡾⣽⢾⣯⢿⣞⣷⡿⣽⣏⣷⣫⢽⣳⢾⣹⡰⣀⠀⠀⠀⠀⠀⢀⠀⠁⢀⠂⠌⠐⡈⠤⢁⠊⠔⡡⢉⠓⡌⢥⠓⡬⠳⣌⢳⢣⡝⣧⡻⡄⠀⠀⠀⠀⠀⠀⢂⠱⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠰⢈⠐⠈⡀⠄⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠣⢜⡡⢎⡵⣊⠟⡴⢣⡛⣼⡱⣏⡳⢯⢷⣹⢳⡝⣯⢿⡽⣯⢿⣻⣟⣾⣽⣟⣯⡷⣯⣳⣍⠯⣷⢻⡴⣢⠀⠀⠀⠀⠀⠀⠈⠀⢀⠠⠁⠐⢀⠂⡉⠐⠤⡉⠜⣈⠦⡙⡰⡙⣌⠳⣊⡜⢧⡻⡔⠀⠀⠀⠀⠀⠀⢀⠣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠠⠑⠠⢈⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠜⢢⢉⠮⣱⠫⡴⢩⠞⣭⠳⣙⠶⡱⣍⢏⡻⢎⡷⣫⢽⢯⡻⣽⣻⢿⣟⣿⣻⣾⡿⣿⣻⣽⢷⣫⢟⡼⡳⣝⢧⡛⠤⡀⠀⠀⠀⠀⠠⠀⠀⠐⠈⢀⠐⠠⢁⠒⡈⠆⡁⠆⡱⢐⠡⢎⡱⢡⡚⢥⠓⡽⡀⠀⠀⠀⠀⠀⢀⠣⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠠⠉⠄⠀⠂⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡌⣘⠰⣊⠜⣡⠳⣉⠗⣚⠤⡛⣌⠳⣑⢎⢮⡹⣋⢶⡹⢮⡻⣵⢯⣷⣻⣽⢾⡿⣽⣿⡿⣯⣟⣯⣽⢻⣜⡳⢭⡞⣝⡲⡁⠆⠀⠀⠀⠀⠀⠈⠀⠠⠀⠠⠀⠂⠠⠐⠠⠑⡈⠔⡁⠎⡰⢈⠇⣜⠢⣙⠲⡅⠀⠀⠀⠀⠀⠂⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⢂⠁⠂⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠣⠔⣨⠑⣎⠹⢄⠳⣉⠞⡰⢃⡱⢌⠳⢌⢎⠲⡱⣍⠮⡝⣧⢻⣜⡳⣞⣳⢿⡿⣿⢿⣯⢿⣿⣽⡷⢯⣟⢾⣹⢏⡾⣜⡱⢣⢆⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠁⡀⠁⠂⡐⠐⡀⠎⡐⠡⠚⠤⠓⠬⣑⢎⠀⠀⠀⠀⠠⠁⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠂⠄⠐⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢃⡍⢒⠤⣋⠴⢉⠆⡓⠤⣉⠒⡡⠜⣨⢃⠎⣌⢣⠱⣊⠵⣙⢖⡣⢞⡱⣏⣳⢯⣻⢽⣻⢯⣟⣷⣻⣟⠿⣞⢯⣛⡾⡵⣎⢵⡫⢞⡰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠀⠄⠁⢀⠡⠐⡐⢀⠃⡉⢆⡙⢢⠑⡎⠄⠀⠀⠠⠡⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⡁⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⣈⢄⠋⢖⠰⢂⠅⣊⠰⠐⡠⠁⢆⡱⢀⠎⣐⠢⢎⠱⢌⠲⡡⢎⠵⣋⠵⣩⢞⡲⣭⢞⣭⢟⡮⢷⣹⣞⣻⢯⣏⣷⣹⠳⣭⢲⡙⢦⡱⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⡀⠂⠐⡀⢂⠁⠂⡌⢢⠱⡘⠄⠀⠀⡁⠂⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⡐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠣⢌⡜⣘⠢⡑⠌⠒⡀⠢⠡⢀⠣⢀⠂⠅⡊⢄⠣⢌⡃⢎⠱⡑⢎⠲⡡⢏⠲⣍⢳⢎⡻⣜⡳⢞⡧⢳⡞⡽⣏⡞⡶⣳⡛⣖⢣⡙⢦⡱⢌⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠈⢀⠀⠄⡈⡐⠠⢃⠰⡩⠀⠀⠀⠄⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢎⠰⢄⠡⠒⠌⡰⠁⠤⢁⠂⡁⢂⠂⠌⠠⢁⠊⡐⢂⠘⠠⢃⠍⡌⠱⡘⣌⠳⡌⢎⠬⡑⣎⡱⢫⡜⣣⣝⡳⣽⢺⣽⢣⡽⣌⢳⡘⢦⡑⠎⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠠⢀⠐⠠⠑⡈⢆⠱⠀⠀⠈⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢆⡉⠆⡡⢃⠐⠠⢁⠂⠄⢂⠐⠠⠈⠄⡁⠂⠐⡀⠂⠌⡐⠡⢈⠰⠑⡰⢈⠒⣉⠎⡒⡑⢢⡑⢣⠜⣱⠪⡕⢎⡳⢎⡳⠼⣌⠳⡜⢢⢌⠣⡐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠠⢈⠀⠱⢈⠢⠡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢄⡘⠤⢁⠂⠌⡁⠄⡈⠐⠠⠈⠄⠡⢀⠐⠈⡀⠄⠈⠄⠐⠀⠂⠄⠡⠐⡈⠰⠀⠎⡐⠡⢂⠱⡈⠜⠤⡓⣌⠣⡜⣡⠎⠵⡨⢧⡙⠦⣌⠱⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠐⠀⠌⡁⠎⡐⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⢌⡀⠃⠌⢀⠐⠠⢀⠁⠂⢁⠠⠁⢀⠐⠀⠠⠀⠁⠈⢀⠁⡈⢀⠂⠁⠄⠡⢈⠐⠠⢁⠢⠄⡑⠌⢢⠑⠌⡱⠨⠔⣌⢣⠑⢦⠉⡖⠤⢃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⠐⠠⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠌⡡⠀⠂⠌⠐⠀⠀⡀⠂⠀⠠⠀⠀⠀⠀⠀⠈⠀⠀⠀⢀⠀⠠⠈⢀⠐⠀⢈⠐⠀⢂⠐⠠⠈⠄⠌⡐⣀⠣⡘⢄⠊⡍⢆⠳⢌⡘⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠠⠈⠄⠁⠀⠀⢀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠐⠁⠠⢁⠂⠈⠄⠀⢀⠀⠀⠀⠀⢀⠈⠀⠐⠀⠀⠂⠁⠀⠀⠀⠄⠀⡀⠈⠀⡀⠌⠀⡀⠂⠁⠌⠐⠠⢀⢂⠱⢈⠒⠌⡌⢃⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠡⠈⠐⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠂⢀⠂⠁⠄⠈⠀⠀⡀⠁⠀⠀⠀⠀⠀⠀⢀⠠⠀⢀⠀⠀⠀⠀⠀⠠⠀⠀⠀⠄⠀⡀⠁⠠⠁⠂⠄⠂⠌⢂⡁⠎⡐⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⢠⣄⣀⣄⡠⣄⠂⠂⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠰⡀⠄⠂⠀⠀⠀⠀⠀⠀⠀⠄⡀⠠⠐⠀⠂⠁⠠⠀⠄⡀⢀⠀⠀⠀⠀⠀⠀⠂⠀⠐⠀⠀⠁⠈⠀⠌⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠀⠀⠀⠀⠀⣌⠁⠉⠈⠁⠀⠀⠀⠀⠂⠚⡐⠋⠂⠀⠀⢀⠠⠀⠀⠀⠀⠀⠀⢀⠠" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠠⠀⠈⠀⠡⢠⢀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠁⠂⠄⠀⠀⠀⠀⡀⢄⡀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢄⠰⠀⠀⠀⠀⠀⠀⠀⠀⠙⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠁⠀⠀⠀⠀⠈⠀⠉⠐" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠐⠀⠀⢀⠀⡀⠌⠒⢠⢂⡄⢀⠀⠀⠀⠀⠂⠀⠀⡀⠀⡀⠀⠀⠀⡀⢠⡀⢄⠲⠉⠂⠀⠀⠀⠀⠀⡀⢀⠀⡀⠀⠀⡀⢀⡀⣀⣀⣀⣀⡀⠀⢠⣀⣀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⢂⠑⠂⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠈⠐⠀⠀⠀⠀⠀⠀⠐⠈⢀⠂⠌⠀⠈⠑⡊⠔⡠⢂⠱⠀⠃⠘⠁⠀⠀⠉⠀⠁⠀⠀⠀⠠⠄⡤⣀⠀⣀⠀⠀⠁⢄⡉⠖⣩⢧⣙⢦⠽⣹⣻⢷⡄⠘⢿⣿⣿⣿⣿⣷⣤⠀⠀⠀⠀⠲⠒⠀⠒⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠌⠀⢆⠀⡀⠀⠀⠀⠀⠀⠀⠁⠂⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⡑⢈⠐⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠁⠀⠐⠠⠐⠀⠒⠄⠉⠄⠂⠡⠙⡺⢧⠀⠀⢻⢌⢃⠉⢟⠿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠐⠀⠁⠀⠀⠀⠀⠠⠀⡀⢀⠀⠄⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⡈⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠘⠀⠃⠀⠀⠈⠂⠌⠈⠘⢥⢃⠀⠀⠀⠀⠀⠀⠐⠫⠶⡤⠀⠀⠀⠀⠀⠀⠀⠀⠐⠠⠀⠀⠀⠀⠀⠐⠠⠀⠂⠔⡈⠌⢂⡁" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⠠⢀⠀⠰⠀⠀⠀⠀⠈⠄⠃⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⢀⠒⠠⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣁⠀⠀⠀⠀⠈⠀⠀⣀⠄⠀⠀⠀⠀⢉⠐⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠈⠄⠀⠀⠀⠀⠁⠀⠠⠀⠀⠀⠀⢀⠱" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠁⠀⠀⠀⠀⠀⠀⠈⠈⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⡐⠀⠀⠀⠀⠀⠐⡠⠀⠄⠂⠀⠀⠠⠁⠠⢀⢀⡐⠂⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⡂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠀⠀⡀⠀⠀⠀⠀⠌⠂⠄⠁⠀" << endl;
	cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠢⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⢂⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠤⢁⠂⠄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
}