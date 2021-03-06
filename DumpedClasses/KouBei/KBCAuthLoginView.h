//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol KBCAuthLoginViewDelegate;

@interface KBCAuthLoginView : UIView
{
    id <KBCAuthLoginViewDelegate> _delegate;
    UIButton *_otherLoginBtn;
    UIButton *_authLoginButton;
    UIButton *_protcolAgreeBtn;
    UIButton *_protcolBtn;
}

+ (struct CGSize)estimateSize:(id)arg1 withFont:(id)arg2 constrainedToSize:(struct CGSize)arg3;
@property(retain, nonatomic) UIButton *protcolBtn; // @synthesize protcolBtn=_protcolBtn;
@property(retain, nonatomic) UIButton *protcolAgreeBtn; // @synthesize protcolAgreeBtn=_protcolAgreeBtn;
@property(retain, nonatomic) UIButton *authLoginButton; // @synthesize authLoginButton=_authLoginButton;
@property(retain, nonatomic) UIButton *otherLoginBtn; // @synthesize otherLoginBtn=_otherLoginBtn;
@property(nonatomic) __weak id <KBCAuthLoginViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)authLogin;
- (void)otherLogin;
- (void)protocolBtnClick:(id)arg1;
- (void)protocolAgreeBtnClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

