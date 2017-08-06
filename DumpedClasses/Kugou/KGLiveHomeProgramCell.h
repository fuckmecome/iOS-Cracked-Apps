//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, KGLiveProgramCollectionVLL, KGThemeImageView, KGThemeLine, UILabel;

@interface KGLiveHomeProgramCell : UIView
{
    KGLiveProgramCollectionVLL *_collectionVll;
    CDUnknownBlockType _cellSelectedAction;
    CDUnknownBlockType _showCollectionBlock;
    CDUnknownBlockType _hideCollectionBlock;
    KGThemeLine *_seperateLine;
    KGThemeLine *_bottomLine;
    KGThemeImageView *_titleImg;
    UILabel *_title;
    double _scale;
    UIView *_tapCellView;
    KGThemeImageView *_arrowImage;
    CAGradientLayer *_leftGradientLayer;
    CAGradientLayer *_rightGradientLayer;
    UILabel *_lbTitle;
}

@property(retain, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(retain, nonatomic) CAGradientLayer *rightGradientLayer; // @synthesize rightGradientLayer=_rightGradientLayer;
@property(retain, nonatomic) CAGradientLayer *leftGradientLayer; // @synthesize leftGradientLayer=_leftGradientLayer;
@property(retain, nonatomic) KGThemeImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UIView *tapCellView; // @synthesize tapCellView=_tapCellView;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) KGThemeImageView *titleImg; // @synthesize titleImg=_titleImg;
@property(retain, nonatomic) KGThemeLine *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) KGThemeLine *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(copy, nonatomic) CDUnknownBlockType hideCollectionBlock; // @synthesize hideCollectionBlock=_hideCollectionBlock;
@property(copy, nonatomic) CDUnknownBlockType showCollectionBlock; // @synthesize showCollectionBlock=_showCollectionBlock;
@property(copy, nonatomic) CDUnknownBlockType cellSelectedAction; // @synthesize cellSelectedAction=_cellSelectedAction;
@property(retain, nonatomic) KGLiveProgramCollectionVLL *collectionVll; // @synthesize collectionVll=_collectionVll;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)refreshData:(CDUnknownBlockType)arg1 faild:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)configBackground;
- (void)refreshSkinChange;
- (void)registNotify;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
