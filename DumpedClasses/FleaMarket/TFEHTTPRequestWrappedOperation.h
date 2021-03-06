//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFEHTTPRequestOperation.h"

@class NSDate, NSString;

@interface TFEHTTPRequestWrappedOperation : TFEHTTPRequestOperation
{
    _Bool _needLog;
    NSString *_logLabel;
    NSDate *_requestStartTime;
    CDUnknownBlockType _startNotification;
}

+ (void)startNotification:(id)arg1;
+ (void)initNotification;
@property(copy, nonatomic) CDUnknownBlockType startNotification; // @synthesize startNotification=_startNotification;
@property(retain, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) NSString *logLabel; // @synthesize logLabel=_logLabel;
@property(nonatomic) _Bool needLog; // @synthesize needLog=_needLog;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2 start:(CDUnknownBlockType)arg3;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;
- (void)callStart;

@end

