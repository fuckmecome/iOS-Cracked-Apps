//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol FBStorylineNarrativeEngineModuleDelegate, OS_dispatch_queue;

@interface FBStorylineNarrativeEngineModule : NSObject <RCTBridgeModule>
{
    id <FBStorylineNarrativeEngineModuleDelegate> _delegate;
}

+ (id)__rct_export__603;
+ (id)__rct_export__552;
+ (id)__rct_export__501;
+ (id)__rct_export__450;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak id <FBStorylineNarrativeEngineModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storylineNarrativeEngineReceiveAnimationDescriptor:(id)arg1;
- (void)storylineNarrativeEngineReceiveAnimationDuration:(float)arg1;
- (void)storylineNarrativeEngineReceiveShaderMap:(id)arg1;
- (void)storylineNarrativeEngineReceiveAssetMetadata:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

