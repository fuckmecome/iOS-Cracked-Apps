//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedLabel;

@interface WDPostAnsSectionHeaderView : SSThemedView
{
    id <WDPostAnsSectionHeaderViewDelegate> _delegate;
    SSThemedLabel *_titleLabel;
    SSThemedButton *_titleButton;
}

@property(retain, nonatomic) SSThemedButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WDPostAnsSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doneButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
