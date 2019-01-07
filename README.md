# Voitobrum

This is a personal attempt to organise files into ideas and concepts (tags) rather than into folders and hierarchy.

## Motivation

[This](https://www.usenix.org/legacy/event/hotos09/tech/full_papers/seltzer/seltzer.pdf) paper covers much of what I have
to say. However it's a bit old...

The motivation behind this is that human brains do not have a hierarchical organisation of things. They are just there.
However we are capable of remembering pretty much anything in instants. Somehow our brain keeps an index of all the
things related to a certain concept. 

The issue is that in the world we live in today, the amount of information we need to remember is absurd. Amongst all
of this, I personally take way too much time trying to correctly organise everything.


## Architecture Idea

_Will probably change a lot over time_

Ideally all of your memories (files) are contained in one brain (index).

### Mandatory fields

Field Name | Explanation
:---: | ---
`hash` | The actual name stored in the index.
`name` | The user friendly name
`type` | The file type. By default everything is text.
`tags`? | All the tags associated with this file

### Optional generic fields

Field Name | Explanation
:---: | ---
`description` | Some short description of the file
