//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "MFAttributedLabelDelegate.h"
#import "NineCellProcotol.h"

@class MFAttributeLabel, NCover, NSDictionary, NSMutableArray, NSString, SUImageView;

@interface Biz029Cell : UICollectionViewCell <MFAttributedLabelDelegate, NineCellProcotol>
{
    SUImageView *_icon;
    MFAttributeLabel *_iconTitle;
    MFAttributeLabel *_iconDescriber;
    MFAttributeLabel *_content;
    SUImageView *_img1;
    SUImageView *_img1_attach;
    SUImageView *_img2;
    SUImageView *_img2_attach;
    SUImageView *_img3;
    SUImageView *_img3_attach;
    NCover *_cover;
    NSMutableArray *_imgList;
    NSDictionary *_option;
}

@property(retain, nonatomic) NSDictionary *option; // @synthesize option=_option;
@property(retain, nonatomic) NSMutableArray *imgList; // @synthesize imgList=_imgList;
@property(retain, nonatomic) NCover *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) SUImageView *img3_attach; // @synthesize img3_attach=_img3_attach;
@property(retain, nonatomic) SUImageView *img3; // @synthesize img3=_img3;
@property(retain, nonatomic) SUImageView *img2_attach; // @synthesize img2_attach=_img2_attach;
@property(retain, nonatomic) SUImageView *img2; // @synthesize img2=_img2;
@property(retain, nonatomic) SUImageView *img1_attach; // @synthesize img1_attach=_img1_attach;
@property(retain, nonatomic) SUImageView *img1; // @synthesize img1=_img1;
@property(retain, nonatomic) MFAttributeLabel *content; // @synthesize content=_content;
@property(retain, nonatomic) MFAttributeLabel *iconDescriber; // @synthesize iconDescriber=_iconDescriber;
@property(retain, nonatomic) MFAttributeLabel *iconTitle; // @synthesize iconTitle=_iconTitle;
@property(retain, nonatomic) SUImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)showpic:(id)arg1 uri:(id)arg2;
- (id)richParse:(id)arg1;
- (void)mfAttributedLabel:(id)arg1 longPressOnLink:(id)arg2 CGRect:(struct CGRect)arg3;
- (void)mfAttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)onRespTapGesture:(id)arg1;
- (void)layout:(id)arg1;
@property(retain, nonatomic) id input;
- (void)configSelf;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

