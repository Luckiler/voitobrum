//
// Created by lucas on 24.01.19.
//

#ifndef VOITOBRUM_TEXTEDITORWINDOW_H
#define VOITOBRUM_TEXTEDITORWINDOW_H

typedef struct charBufferStruct {
    charBufferStruct* previous = nullptr;
    char value = '\0';
    charBufferStruct* next = nullptr;
} charBuffer;

// A window that edits text.
// It will be the main editor for things
class textEditorWindow {
public:
    textEditorWindow();
protected:
    charBuffer * bufferStart;
    charBuffer * bufferEnd;
    charBuffer * currentBuffer;

    void addCharToBuffer(char c);
};


#endif //VOITOBRUM_TEXTEDITORWINDOW_H
