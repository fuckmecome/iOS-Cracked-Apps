//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSession;

@interface DDIMOAUserProfileRequest : NSObject
{
    double _timeOutInterval;
    NSURLSession *_session;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) double timeOutInterval; // @synthesize timeOutInterval=_timeOutInterval;
- (void).cxx_destruct;
- (id)dataTaskWithUserID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)messageBaseURL;
- (id)urlStringWithUserID:(id)arg1;
- (id)init;

@end

