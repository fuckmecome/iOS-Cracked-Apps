//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CTTrainOrderQiangPiaoZhongDetailView : UIView
{
    UILabel *_labelFirst;
    UILabel *_labelSecond;
    UILabel *_labelThird;
    UIView *_circleFirst;
    UIView *_circleSecond;
    UIView *_circleThird;
}

@property(retain, nonatomic) UIView *circleThird; // @synthesize circleThird=_circleThird;
@property(retain, nonatomic) UIView *circleSecond; // @synthesize circleSecond=_circleSecond;
@property(retain, nonatomic) UIView *circleFirst; // @synthesize circleFirst=_circleFirst;
@property(retain, nonatomic) UILabel *labelThird; // @synthesize labelThird=_labelThird;
@property(retain, nonatomic) UILabel *labelSecond; // @synthesize labelSecond=_labelSecond;
@property(retain, nonatomic) UILabel *labelFirst; // @synthesize labelFirst=_labelFirst;
- (void).cxx_destruct;
- (void)setupContentWithFirstText:(id)arg1 secondText:(id)arg2 thirdText:(id)arg3;
- (void)awakeFromNib;

@end

