//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x186 : WloginTlv
{
    unsigned char cVer;
    unsigned char cFlag;
}

@property unsigned char cFlag; // @synthesize cFlag;
@property unsigned char cVer; // @synthesize cVer;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

