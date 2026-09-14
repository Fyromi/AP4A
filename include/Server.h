#ifndef SERVER_H
#define SERVER_H

class Server {

    private:
        void handleRequest();
        void sendResponse();
        
    public:
        Server();
        void start();
        void stop();
};

#endif