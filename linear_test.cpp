#include <fstream>
#include "linear.h"


//this function returns true if the given data 
//and the appropriate string in the given file are similiar 
bool match(std::fstream &g_file, std::string data)
{
        std::string g_str;
        getline(g_file, g_str);
        return g_str == data;
}

//This function reads the input, solves the linear equation, 
//gets the answer, stores it in the output file,
//compares it with the corresponding data in the golden file
// and writes the message in the result file
//These operations are performed one after another for every line 
void test()
{
        std::fstream i_file;//input
        std::fstream o_file; //output
        std::fstream r_file; //result
        std::fstream g_file; //golden
        r_file.open("result.txt", std::ios::out);
        i_file.open("input.txt", std::ios::in);
        o_file.open("output.txt", std::ios::out);
	g_file.open("golden.txt", std::ios::in);
        std::string answer, str1, str2;
        while(!i_file.eof()) {
		i_file >> str1 >> str2;
                if(i_file.eof()) {
			break;
		}
		linear(answer, str1, str2);
                o_file << answer << std::endl;
                if(match(g_file, answer)) {
			r_file << "-> test passed" << std::endl;
		}else {
		       	r_file << "-> test not passed" << std::endl;
		}
        }
        r_file.close();
        i_file.close();
        o_file.close();
        g_file.close();
}

int main()
{
        test();
        return 0;
}

































































