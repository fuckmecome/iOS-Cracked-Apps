//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class NMCountDownAndResendView, NSString, UIButton, UIGestureRecognizer, UILabel, UITextField;

@interface NMPhoneCaptchaView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    NSString *_phoneNumber;
    UILabel *_hintLabel;
    UIView *_formView;
    UITextField *_captchaText;
    UIButton *_nextButton;
    NMCountDownAndResendView *_countDownView;
    id _delegate;
    UIGestureRecognizer *_cancelGesture;
    _Bool _submitButtonAsComplete;
}

@property(nonatomic) _Bool submitButtonAsComplete; // @synthesize submitButtonAsComplete=_submitButtonAsComplete;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)beginCountDown;
- (id)getCapthca;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

