#include <iostream>

class RandomClass
{
    public:
        std::string name;
        
        std::string getSecrets() 
        {
            return secret;
        }

        void setCredentials(std::string newCredentails) {
            credentials = newCredentails;
        }

        std::string getCredentials() {
            return credentials;
        }
        RandomClass(std::string secr)
        {
            secret = secr;
        }
    private:
        std::string secret;
    protected:
        std::string credentials;

};

int main(int argc, char const *argv[])
{
    RandomClass random("my-secret");
    std::cout << random.getSecrets() << "\n";
    random.setCredentials("credential 1234");
    std::cout << random.getCredentials();
    
    return 0;
}
