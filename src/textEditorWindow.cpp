//
// Created by lucas on 24.01.19.
//

#include <textEditorWindow.h>

textEditorWindow::textEditorWindow() {
    currentBuffer = new charBuffer();
    bufferStart = currentBuffer;
    bufferEnd = currentBuffer;
}

void textEditorWindow::addCharToBuffer(const char c) {
    auto * cb = new charBuffer();

    cb->previous = currentBuffer;
    cb->next = currentBuffer->next;
    cb->previous->next = cb;
    cb->next->previous = cb;
}
