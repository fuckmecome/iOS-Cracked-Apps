//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QMemoryFile : NSObject
{
    char *_buf;
    unsigned long long _bufLen;
    unsigned long long _curOffset;
}

- (id)readString;
- (unsigned int)readUInt32;
- (unsigned short)readUInt16;
- (unsigned char)readUInt8;
- (void)clear;
- (void)seek:(unsigned long long)arg1;
- (_Bool)loadFile:(id)arg1;
- (void)dealloc;
- (id)init;

@end

