# include "replace.hpp"

void ft_replace(char **av, std::ifstream& fileRead, std::ofstream& fileWrite, std::string newFile)
{
    std::string search_string;
    std::string replace_string;
    std::string temp_str;
    std::size_t index;

    search_string = av[2];
    replace_string = av[3];

    if(search_string.length() && replace_string.length())
    {   
        fileWrite.open(newFile);
        if(fileWrite.fail())
        {
            std::cout << "Error: Can't open file for writing." << std::endl;
            return ;
        }
        else
        {
            while(std::getline(fileRead, temp_str))
            {
                
                while( (index = temp_str.find(search_string)) != std::string::npos )
                {
                    temp_str.erase(index, search_string.length());
                    temp_str.insert(index, replace_string);
                }
                fileWrite << temp_str << std::endl;
            }
            fileWrite.close();
            return ;
        }
    }
    else
    {
        std::cout << "Error: Invalid paameters." << std::endl;
        return ;
    }

}

int main(int ac, char **av)
{
    std::string fileName;
    std::string newFile;
    std::ifstream fileRead;
    std::ofstream fileWrite;

    if (ac == 4)
    {

        fileName = av[1];
        newFile = fileName + ".replace";
        fileRead.open(fileName);

        if (!fileRead.fail() && fileName.length())
        {
            ft_replace(av, fileRead, fileWrite, newFile);
            fileRead.close();
        }
        else
        {
            std::cout << "Error: can't open file" << std::endl;
            return (1);
        }
        return (0);
    }
    else
    {
        std::cout << "Error: invalid count arguments" << std::endl;
        return (1);
    }
}