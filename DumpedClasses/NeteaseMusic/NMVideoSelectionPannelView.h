//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UITapGestureRecognizer;

@interface NMVideoSelectionPannelView : UIView
{
    NSMutableArray *_videoInfos;
    NSMutableArray *_videoViews;
    UITapGestureRecognizer *_tapGesture;
    long long _selected;
    id <NMVideoSelectionPannelDelegate> _delegate;
}

+ (double)width;
+ (double)height;
@property(nonatomic) __weak id <NMVideoSelectionPannelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)didVideoViewSelect:(id)arg1;
- (id)videoAtIndex:(long long)arg1;
- (void)updateVideoInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addVideo:(id)arg1;
@property(copy, nonatomic) NSArray *videos;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
