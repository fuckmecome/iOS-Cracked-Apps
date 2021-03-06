//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAuthTransientTokenHandling-Protocol.h"
#import "FBAuthTransientTokenHandlingDelegate-Protocol.h"
#import "FBAuthenticationMethodHandlerDelegate-Protocol.h"

@class FBAuthCheckpointFlowController, FBAuthCheckpointInfo, FBAuthenticationNonceHandler, NSString;
@protocol FBAuthCheckpointFlowUIProviding><FBAuthSpinnerUIProviding, FBAuthControlling, FBAuthControllingDelegate, FBAuthTransientTokenHandlingDelegate, FBAuthUIPresenting, FBNetworkDispatch;

@interface FBAuthCheckpointHandler : NSObject <FBAuthTransientTokenHandlingDelegate, FBAuthenticationMethodHandlerDelegate, FBAuthTransientTokenHandling>
{
    FBAuthCheckpointInfo *_checkpointInfo;
    id <FBAuthControlling> _rootFlowController;
    id <FBAuthCheckpointFlowUIProviding><FBAuthSpinnerUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
    id <FBNetworkDispatch> _requesterConfiguration;
    FBAuthCheckpointFlowController *_authCheckpointFlowController;
    FBAuthenticationNonceHandler *_nonceHandler;
    id <FBAuthTransientTokenHandlingDelegate> _authDelegate;
}

+ (_Bool)checkpointLoginTimedOut;
+ (_Bool)isCheckpointURL:(id)arg1;
@property(nonatomic) __weak id <FBAuthControllingDelegate> authDelegate;
- (void).cxx_destruct;
- (void)_logCheckpointEvent:(id)arg1;
- (void)_loginWithUsername:(id)arg1 nonce:(id)arg2;
- (void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2;
- (void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)authenticationHandler:(id)arg1 isReady:(_Bool)arg2;
- (void)continueAuthenticationUser:(id)arg1 withToken:(id)arg2;
- (void)authenticationDeferred:(id)arg1 withReason:(id)arg2;
- (void)authenticationCompleted:(id)arg1 withResponse:(id)arg2;
- (void)loginUserWithTransientToken:(id)arg1 token:(id)arg2;
- (void)authenticate;
- (id)initWithRootFlowController:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

