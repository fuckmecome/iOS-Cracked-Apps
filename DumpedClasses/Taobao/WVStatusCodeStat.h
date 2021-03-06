//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVStatusCodeStat : NSObject <WVMonitorInfoProtocol>
{
    _Bool _isHTML;
    NSString *_url;
    NSString *_statusCode;
    NSString *_referrer;
    NSString *_bizCode;
}

+ (id)monitorPoint;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(readonly, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(readonly, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) _Bool isHTML; // @synthesize isHTML=_isHTML;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 isHTML:(_Bool)arg2 statusCode:(id)arg3 withReferrer:(id)arg4 withBizCode:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

