//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYReqPacket.h"

@class NSString;

@interface TXYHandShakeReqPacket : TXYReqPacket
{
    int _redirect;
    int _flag;
    NSString *_last_update;
}

@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *last_update; // @synthesize last_update=_last_update;
@property(nonatomic) int redirect; // @synthesize redirect=_redirect;
- (void).cxx_destruct;
- (id)getFilePacket:(int)arg1;

@end

