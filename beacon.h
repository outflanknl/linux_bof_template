#pragma once

#ifndef bool
#define bool int
#endif

typedef struct {
    char* original;
    char* buffer;
    int length;
    int size;
} datap;

void BeaconDataParse(datap* parser, char* buffer, int size);
char* BeaconDataPtr(datap* parser, int size);
int BeaconDataInt(datap* parser);
short BeaconDataShort(datap* parser);
int BeaconDataLength(datap* parser);
char* BeaconDataExtract(datap* parser, int* size);

typedef struct {
    char* original;
    char* buffer;
    int length;
    nt size;
} formatp;

void BeaconFormatAlloc(formatp* format, int maxsz);
void BeaconFormatReset(formatp* format);
void BeaconFormatAppend(formatp* format, char* text, int len);
void BeaconFormatPrintf(formatp* format, char* fmt, ...);
char* BeaconFormatToString(formatp* format, int* size);
void BeaconFormatFree(formatp* format);
void BeaconFormatInt(formatp* format, int value);

#define CALLBACK_OUTPUT 0x0
#define CALLBACK_OUTPUT_OEM 0x1e
#define CALLBACK_OUTPUT_UTF8 0x20
#define CALLBACK_ERROR 0x0d

void BeaconOutput(int type, char* data, int len);
void BeaconPrintf(int type, char* fmt, ...);
bool BeaconIsRoot();
