//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBNuxPresenter-Protocol.h"
#import "FBNuxStepChainControllerDelegate-Protocol.h"
#import "FBSelfPresentingNux-Protocol.h"

@class FBDBLNuxServerContext, FBNuxStepChainController, FBUserPreferences, NSArray, NSDictionary, NSString;
@protocol FBNuxDelegate, FBNuxStep, FBNuxStepChainControllerDelegate;

@interface FBDBLNuxController : NSObject <FBNuxStepChainControllerDelegate, FBNuxPresenter, FBSelfPresentingNux>
{
    long long _generation;
    NSString *_nuxID;
    NSString *_userFBID;
    NSArray *_triggerIDs;
    id <FBNuxStep> _firstStep;
    int _eligibility;
    FBUserPreferences *_userPreferences;
    FBNuxStepChainController *_stepChainController;
    FBDBLNuxServerContext *_serverContext;
    _Bool _isBeingDisplayed;
    id <FBNuxDelegate> nuxCoordinator;
    id <FBNuxStepChainControllerDelegate> _stepDelegate;
    unsigned long long _presenterOptions;
}

@property(nonatomic) unsigned long long presenterOptions; // @synthesize presenterOptions=_presenterOptions;
@property(nonatomic) __weak id <FBNuxStepChainControllerDelegate> stepDelegate; // @synthesize stepDelegate=_stepDelegate;
@property(readonly, nonatomic) _Bool isBeingDisplayed; // @synthesize isBeingDisplayed=_isBeingDisplayed;
@property(nonatomic) id <FBNuxDelegate> nuxCoordinator; // @synthesize nuxCoordinator;
- (void).cxx_destruct;
- (long long)_getUserNuxGeneration;
- (void)_setUserNuxGeneration:(long long)arg1;
- (id)stepChainController;
- (void)stepChainControllerDidCancel:(id)arg1 onStep:(id)arg2;
- (void)stepChainControllerDidEnd:(id)arg1;
- (void)stepChainController:(id)arg1 didTransitionToStep:(id)arg2;
- (void)closeNuxAnimated:(_Bool)arg1;
- (void)showNux;
- (void)setEligibilityFromTriggerGeneration;
- (void)prepareWithServerContext:(id)arg1;
- (void)prepareWithGraphQLData:(id)arg1;
- (Class)serverContextClass;
- (id)viewControllerForPresentation;
- (int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2;
@property(readonly, nonatomic) int nuxType;
@property(readonly, copy, nonatomic) NSArray *triggerIDs;
@property(readonly, copy, nonatomic) NSString *nuxID;
- (id)initWithNuxID:(id)arg1 triggerIDs:(id)arg2 firstStep:(id)arg3 userPreferences:(id)arg4 userFBID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *extraLogData;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *nuxAnalyticsModule;
@property(copy, nonatomic) CDUnknownBlockType onClosedBlock;
@property(readonly) Class superclass;

@end

