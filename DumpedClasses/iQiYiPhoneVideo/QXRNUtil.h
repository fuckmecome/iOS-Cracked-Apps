//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface QXRNUtil : NSObject <RCTBridgeModule>
{
}

+ (id)__rct_export__513;
+ (id)__rct_export__422;
+ (id)__rct_export__311;
+ (id)__rct_export__190;
+ (void)load;
+ (id)moduleName;
- (void)setObject:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)signParameters:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)signParameters:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

