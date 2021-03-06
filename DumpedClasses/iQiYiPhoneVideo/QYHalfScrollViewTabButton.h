//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel, UIView;

@interface QYHalfScrollViewTabButton : UIButton
{
    _Bool _hasTabIcon;
    UILabel *_tabTitle;
    UIImageView *_tabIcon;
    UILabel *_hotpotL;
    NSString *_tabImgName;
    UIView *_shadow;
}

@property(retain, nonatomic) UIView *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) _Bool hasTabIcon; // @synthesize hasTabIcon=_hasTabIcon;
@property(retain, nonatomic) NSString *tabImgName; // @synthesize tabImgName=_tabImgName;
@property(retain, nonatomic) UILabel *hotpotL; // @synthesize hotpotL=_hotpotL;
@property(retain, nonatomic) UIImageView *tabIcon; // @synthesize tabIcon=_tabIcon;
@property(retain, nonatomic) UILabel *tabTitle; // @synthesize tabTitle=_tabTitle;
- (void).cxx_destruct;
- (void)setTabTitleStr:(id)arg1 andIconName:(id)arg2;
- (void)setNumber:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 iconFlag:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

