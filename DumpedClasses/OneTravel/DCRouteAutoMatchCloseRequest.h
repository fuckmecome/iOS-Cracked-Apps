//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBBaseRequest.h"

@class NSString;

@interface DCRouteAutoMatchCloseRequest : DBBaseRequest
{
    NSString *_routeId;
    NSString *_dateId;
}

@property(copy, nonatomic) NSString *dateId; // @synthesize dateId=_dateId;
@property(copy, nonatomic) NSString *routeId; // @synthesize routeId=_routeId;
- (void).cxx_destruct;
- (void)requestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)pathName;

@end

