//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIImageView, UILabel;

@interface TBCouponwalletGListCellSubView : UIControl
{
    UIImageView *_iconImageView;
    UILabel *_titlelabel;
    UILabel *_contextlabel;
    UILabel *_badgeView;
    UILabel *_richLabel;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UILabel *richLabel; // @synthesize richLabel=_richLabel;
@property(retain, nonatomic) UILabel *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *contextlabel; // @synthesize contextlabel=_contextlabel;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)configCell:(id)arg1;
- (void)contextRichLabelWithStr:(id)arg1;
- (_Bool)isRichText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

