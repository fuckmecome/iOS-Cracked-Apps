//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KGTextRollViewDelegate.h"

@class KGThemeLine, NSMutableArray, NSString, NSTimer, UIImageView, UIScrollView;

@interface KTVHomeAdvertView : UIView <KGTextRollViewDelegate>
{
    _Bool _isAdScrollingHorizontal;
    _Bool _needToResetAdPosition;
    int _adIndex;
    id <KTVHomeAdvertViewDelegate> _delegate;
    UIImageView *_typeImgView;
    KGThemeLine *_sepLine;
    UIScrollView *_scrollView;
    NSTimer *_timer;
    NSMutableArray *_adsArray;
}

@property(nonatomic) _Bool needToResetAdPosition; // @synthesize needToResetAdPosition=_needToResetAdPosition;
@property(nonatomic) _Bool isAdScrollingHorizontal; // @synthesize isAdScrollingHorizontal=_isAdScrollingHorizontal;
@property(nonatomic) int adIndex; // @synthesize adIndex=_adIndex;
@property(retain, nonatomic) NSMutableArray *adsArray; // @synthesize adsArray=_adsArray;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) KGThemeLine *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIImageView *typeImgView; // @synthesize typeImgView=_typeImgView;
@property(nonatomic) __weak id <KTVHomeAdvertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textRollViewDidPauseRunning:(id)arg1;
- (void)textRollViewDidStopRunning:(id)arg1;
- (void)changeAds;
- (void)stopTimer;
- (void)startTimer;
- (void)interruptAdScrolling;
- (void)startToShowAds;
- (void)acitonAds:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (void)setAdsInfos:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

