//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, O2OLCTextView, UILabel;
@protocol O2OLCQusetionEditorViewDelegate;

@interface O2OLCQusetionEditorView : UIView <UITextViewDelegate>
{
    _Bool _editing;
    _Bool _overflowHintShowed;
    NSString *_title;
    unsigned long long _maxWordCount;
    id <O2OLCQusetionEditorViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIView *_backgroundView;
    O2OLCTextView *_textView;
    UILabel *_wordsHintLabel;
}

@property(nonatomic) _Bool overflowHintShowed; // @synthesize overflowHintShowed=_overflowHintShowed;
@property(retain, nonatomic) UILabel *wordsHintLabel; // @synthesize wordsHintLabel=_wordsHintLabel;
@property(retain, nonatomic) O2OLCTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <O2OLCQusetionEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxWordCount; // @synthesize maxWordCount=_maxWordCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(copy, nonatomic) NSString *placeholder; // @dynamic placeholder;
- (_Bool)resignFirstResponder;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateWordsHint;
- (void)updateTitle;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 placeholder:(id)arg3 maxWords:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

