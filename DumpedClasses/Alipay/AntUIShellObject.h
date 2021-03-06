//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AUThirdPartyAdapter.h"

@class NSString, UIWindow;

@interface AntUIShellObject : NSObject <AUThirdPartyAdapter>
{
    UIWindow *_dialogBackWindow;
}

@property(nonatomic) __weak UIWindow *dialogBackWindow; // @synthesize dialogBackWindow=_dialogBackWindow;
- (void).cxx_destruct;
- (id)thirdParty_configForKey:(id)arg1;
- (id)thirdParty_localizedStringForKey:(id)arg1 defaultValue:(id)arg2 inBundle:(id)arg3;
- (void)thirdPartyAPLogInfo:(id)arg1 params:(id)arg2;
- (_Bool)dialogConfigerService;
- (void)dialogWindowDidDismiss;
- (void)dialogWindowWillShow;
- (id)thirdPartyFloatMenuDismissFromLoginNotiName;
- (id)thirdPartyFloatMenuDismissFromAlertNotiName;
- (id)thirdPartyCardMenuDismissNotiName;
- (void)thirdPartySetButtonActionLog:(id)arg1 actionNameLog:(id)arg2;
- (void)thirdPartyBadgeViewWith:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)thirdPartyBadgeViewWith:(id)arg1 updateValue:(id)arg2;
- (void)thirdPartyBadgeViewReg:(id)arg1;
- (void)thirdPartyBadgeViewWith:(id)arg1 widgetId:(id)arg2;
- (id)thirdPartyBadgeViewWithFrame:(struct CGRect)arg1;
- (void)thirdPartypFromImageView:(id)arg1 setImageWithKey:(id)arg2 business:(id)arg3 placeholderImage:(id)arg4 zoom:(struct CGSize)arg5 originalSize:(struct CGSize)arg6 progress:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)thirdPartyGetImage:(id)arg1 business:(id)arg2 zoom:(struct CGSize)arg3 originalSize:(struct CGSize)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

