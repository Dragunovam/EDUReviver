#include <stdint.h>

int request_payload_online(int sn, const char* uid, const char* signature, const char* payloadname, const char* payloadopt, char** reply, size_t* replylen);