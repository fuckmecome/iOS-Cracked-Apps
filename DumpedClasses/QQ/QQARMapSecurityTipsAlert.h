//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleAlertView.h"

#import "NIAttributedLabelDelegate.h"
#import "QQARMapSecurityWebViewControllerDelegate.h"

@class NSString;

@interface QQARMapSecurityTipsAlert : SimpleAlertView <QQARMapSecurityWebViewControllerDelegate, NIAttributedLabelDelegate>
{
    _Bool _isOpen;
}

- (void)helpShowTip;
- (void)securityTipsShow;
- (void)securityTipsHide;
- (id)navigationVC;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)logoutBeforeNotification;
- (id)initWithStyle:(int)arg1 delegate:(id)arg2 title:(id)arg3 message:(id)arg4 buttonArray:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

