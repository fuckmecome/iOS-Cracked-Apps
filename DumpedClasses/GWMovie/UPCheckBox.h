//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface UPCheckBox : UIView
{
    UIImageView *_imageView_CheckBox;
    _Bool _selected;
    CDUnknownBlockType _actionBlcok;
}

+ (double)boxHeight;
@property(copy, nonatomic) CDUnknownBlockType actionBlcok; // @synthesize actionBlcok=_actionBlcok;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)tapAction;
- (void)chageBackgroundColor;
- (id)initWithOrigin:(struct CGPoint)arg1 title:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
