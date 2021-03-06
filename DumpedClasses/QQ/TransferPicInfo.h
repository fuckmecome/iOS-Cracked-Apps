//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface TransferPicInfo : NSObject
{
    NSString *_fileName;
    NSData *_fileMd5;
    long long _fileSize;
    unsigned int _picWidth;
    unsigned int _picHeight;
    unsigned int _picType;
    NSString *_fileIndex;
    int _xo;
}

- (id)description;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *fileIndex; // @dynamic fileIndex;
@property(retain, nonatomic) NSData *fileMd5; // @dynamic fileMd5;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(nonatomic) long long fileSize; // @dynamic fileSize;
@property(nonatomic) unsigned int picHeight; // @dynamic picHeight;
@property(nonatomic) unsigned int picType; // @dynamic picType;
@property(nonatomic) unsigned int picWidth; // @dynamic picWidth;

@end

