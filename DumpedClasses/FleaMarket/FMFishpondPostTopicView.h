//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class FMFishpondTopicDO, FMTextView, NSString, UITextField;

@interface FMFishpondPostTopicView : UIScrollView <UITextViewDelegate, UITextFieldDelegate>
{
    UITextField *_titleField;
    FMTextView *_contentView;
    FMFishpondTopicDO *_topicDO;
}

- (void).cxx_destruct;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)isTitleFirstResponder;
- (void)titleFirstResponder;
@property(retain, nonatomic) FMFishpondTopicDO *topicDO;
- (void)dealloc;
- (void)customView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

