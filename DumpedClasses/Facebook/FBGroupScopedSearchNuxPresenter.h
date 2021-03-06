//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBGroupNuxPresenting-Protocol.h"

@class FBNuxController, FBUserSession, NSString;

@interface FBGroupScopedSearchNuxPresenter : NSObject <FBGroupNuxPresenting>
{
    FBUserSession *_session;
    FBNuxController *_scopedSearchNuxController;
}

- (void).cxx_destruct;
- (id)_scopedSearchTooltipNuxForGroup:(id)arg1;
- (void)_registerNuxPresenterForGroup:(id)arg1 viewController:(id)arg2;
- (void)_unregisterPresenter;
- (void)updatePresenterForGroup:(id)arg1 viewController:(id)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

