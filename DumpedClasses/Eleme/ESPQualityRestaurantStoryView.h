//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPRestaurant, MASConstraint, UIImageView, UILabel, UITextView;

@interface ESPQualityRestaurantStoryView : UIView
{
    ESPRestaurant *_restaurant;
    MASConstraint *_logoSizeConstraint;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UITextView *_detailTextView;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UITextView *detailTextView; // @synthesize detailTextView=_detailTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) MASConstraint *logoSizeConstraint; // @synthesize logoSizeConstraint=_logoSizeConstraint;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
