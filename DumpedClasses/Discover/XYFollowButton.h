//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface XYFollowButton : UIButton
{
    long long style;
}

@property(nonatomic) long long style; // @synthesize style;
- (void)expand;
- (void)shrink;
- (void)reload;
- (void)touchDragInside;
- (void)touchDragExit;
- (void)touchUpInside;
- (void)touchDown;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setIconHidden:(_Bool)arg1;
- (void)didMoveToSuperview;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
