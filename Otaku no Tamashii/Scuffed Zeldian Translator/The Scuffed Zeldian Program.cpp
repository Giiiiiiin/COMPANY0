#include <iostream>
using namespace std;

int a = 0;
char g;
string zeldian;

void getZeldish(string english, int i) 
{

if (i == english.length())
	{
	cout << zeldian << endl;
	cout << "\n\nEnter any button to exit: ";
		cin >> g;
	exit(0);
	}
if (i % 2 != 0)
	{
	string translate;
	translate = english.substr(a, 1);
	char array[0];
	array [0] = translate [0];
	switch (array[0])
		{	
		case ' ':
			zeldian += " ";
		break;
		case '!':
			zeldian += "!";
		break;
		case '?':
			zeldian += "?";
		break;
		case '.':
			zeldian += ".";
		break;
		case '~':
			zeldian += "~";
		break;
		case '*':
			zeldian += "*";
		break;
		case ',':
			zeldian += ",";
		break;
		case ':':
			zeldian += ":";
		break;
		case ';':
			zeldian += ";";
		break;
		case '(':
			zeldian += "(";
		break;
		case ')':
			zeldian += ")";
		}

	i++;
	a++;
	
	getZeldish(english, i);
	}
	
string translate;
translate = english.substr(a, 1);
char array[0];
array [0] = translate [0];
switch (array[0])
	{
	case 'A': case 'a':
		zeldian += "xe";
	break;
	case 'B': case 'b':
		zeldian += "en";
	break;
	case 'C': case 'c':
		zeldian += "h";
	break;
	case 'D': case 'd':
		zeldian += "iia";
	break;
	case 'E': case 'e':
		zeldian += "dr";
	break;
	case 'F': case 'f':
		zeldian += "vv";
	break;
	case 'G': case 'g':
		zeldian += "g";
	break;
	case 'H': case 'h':
		zeldian += "fi";
	break;
	case 'I': case 'i':
		zeldian += "oa";
	break;
	case 'J': case 'j':
		zeldian += "y";
	break;
	case 'K': case 'k':
		zeldian += "bk";
	break;
	case 'L': case 'l':
		zeldian += "rel";
	break;
	case 'M': case 'm':
		zeldian += "si";
	break;
	case 'N': case 'n':
		zeldian += "krn";
	break;
	case 'O': case 'o':
		zeldian += "j";
	break;
	case 'P': case 'p':
		zeldian += "wo";
	break;
	case 'Q': case 'q':
		zeldian += "nw";
	break;
	case 'R': case 'r':
		zeldian += "a";
	break;
	case 'S': case 's':
		zeldian += "ui";
	break;
	case 'T': case 't':
		zeldian += "lr";
	break;
	case 'U': case 'u':
		zeldian += "cz";
	break;
	case 'V': case 'v':
		zeldian += "ms";
	break;
	case 'W': case 'w':
		zeldian += "pq";
	break;
	case 'X': case 'x':
		zeldian += "q";
	break;
	case 'Y': case 'y':
		zeldian += "t";
	break;
	case 'Z': case 'z':
		zeldian += "z";
	break;
	case '.':
		zeldian += ".";
	break;
	default:
		zeldian += array[0];
	}

i++;
a++;

getZeldish(english, i);
}

int main()
{
string english;
cout << "Insert Words in English: ";
	getline(cin, english);
cout << "\nTranslation to Zeldish: ";
getZeldish(english, 0);

}
