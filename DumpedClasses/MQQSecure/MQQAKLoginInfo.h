//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQAKInfo-Protocol.h"
#import "MQQAKInfoUI-Protocol.h"

@class NSArray, NSString;

@interface MQQAKLoginInfo : NSObject <MQQAKInfoUI, MQQAKInfo>
{
    NSString *_ID;
    long long _timestamp;
    NSString *_locale;
    NSString *_IP;
    NSString *_type;
    long long _stateDescription;
    long long _state;
    NSArray *_keys;
}

@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long stateDescription; // @synthesize stateDescription=_stateDescription;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *IP; // @synthesize IP=_IP;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void)dealloc;
@property(readonly, nonatomic) NSString *stateText;
@property(readonly, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSString *titleText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

