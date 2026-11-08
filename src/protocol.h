#ifndef PROTOCOL_H
#define PROTOCOL_H

typedef struct{
	const char *id;
} Agent;

typedef enum {
	START,
	MESSAGE_BODY,
	END,
} MessageType;

typedef struct{
	const char *sender;
	const char *recipient;
	MessageType type;
	const char *content;
	size_t content_length;
} Message;
