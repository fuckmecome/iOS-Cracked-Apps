//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XModuleProtocol.h"
#import "XVersionProtocol.h"

@class NSString, UIWindow;

@interface XVersionModule : NSObject <XModuleProtocol, XVersionProtocol>
{
    NSString *_priorVersion;
}

@property(copy, nonatomic) NSString *priorVersion; // @synthesize priorVersion=_priorVersion;
- (void).cxx_destruct;
- (_Bool)isUpgradeInstall;
- (_Bool)isNewlyInstall;
- (void)getNewVersionWithMTL:(CDUnknownBlockType)arg1;
- (void)applicationDidFinishLaunchingAfterHomeViewControllerDidAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
