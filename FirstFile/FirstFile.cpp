#include <fstream>

int main(int argc, char** argv)
{
    std::ofstream secret("file.txt");
    secret << "I'm secret";
    secret.close();
    return 0;
}

