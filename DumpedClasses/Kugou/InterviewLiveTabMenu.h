//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface InterviewLiveTabMenu : UIView
{
    id <InterviewMenuDelegate> _delegate;
    UIView *_bottomoLine;
    UIView *_selectedLine;
    UIButton *_selectedBtn;
    UIButton *_subscribeBtn;
}

@property(retain, nonatomic) UIButton *subscribeBtn; // @synthesize subscribeBtn=_subscribeBtn;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) UIView *selectedLine; // @synthesize selectedLine=_selectedLine;
@property(retain, nonatomic) UIView *bottomoLine; // @synthesize bottomoLine=_bottomoLine;
@property(nonatomic) __weak id <InterviewMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menuClicked:(id)arg1;
- (void)buttonWithName:(id)arg1 type:(int)arg2;
- (void)subscribeSuccess;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

