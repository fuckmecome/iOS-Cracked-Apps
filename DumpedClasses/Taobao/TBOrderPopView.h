//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TBOrderPopView : UIView
{
    id <TBOrderPopViewDelegate> _delegate;
    UIButton *_backgroundButton;
}

@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <TBOrderPopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dismissPopView;
- (void)initButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end
