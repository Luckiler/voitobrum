//
// Created by lucas on 15.01.19.
//

#ifndef VOITOBRUM_V_WINDOWMANAGER_H
#define VOITOBRUM_V_WINDOWMANAGER_H

class V_windowManager {
public:

    template<class T>
    void createNewWindow();

private:
    std::vector<std::thread> windowThreads;

    template<class T>
    static void windowCreator();
};

#endif //VOITOBRUM_V_WINDOWMANAGER_H
