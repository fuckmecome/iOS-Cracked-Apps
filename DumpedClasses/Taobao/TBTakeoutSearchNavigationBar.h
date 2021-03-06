//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, TBIconFontButton, UIButton, UITextField;

@interface TBTakeoutSearchNavigationBar : UIView <UITextFieldDelegate>
{
    id <TBTakeoutSearchNavigationBarDelegate> _delegate;
    UITextField *_searchBarTextField;
    UIButton *_searchButton;
    TBIconFontButton *_backButton;
}

@property(retain, nonatomic) TBIconFontButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UITextField *searchBarTextField; // @synthesize searchBarTextField=_searchBarTextField;
@property(nonatomic) __weak id <TBTakeoutSearchNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSearchWord:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)searchButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)cleanSearchWord:(id)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

