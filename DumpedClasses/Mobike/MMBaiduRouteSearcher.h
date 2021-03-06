//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMRouteSearcher.h"

#import "BMKGeneralDelegate.h"
#import "BMKRouteSearchDelegate.h"

@class MMWalkingRouteSearchTupleManager, NSString;

@interface MMBaiduRouteSearcher : MMRouteSearcher <BMKRouteSearchDelegate, BMKGeneralDelegate>
{
    MMWalkingRouteSearchTupleManager *_processingRequests;
}

@property(retain, nonatomic) MMWalkingRouteSearchTupleManager *processingRequests; // @synthesize processingRequests=_processingRequests;
- (void).cxx_destruct;
- (void)notifyWalkingSearchWithSearcher:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)onGetWalkingRouteResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (void)walkingSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

