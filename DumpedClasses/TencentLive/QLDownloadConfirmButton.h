//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLDownloadSpaceStateView, UIButton, UIImageView, UILabel;

@interface QLDownloadConfirmButton : UIView
{
    UILabel *_countLabel;
    UIImageView *_countBGView;
    UIButton *_button;
    UIImageView *_folderImageView;
    _Bool _translucent;
    QLDownloadSpaceStateView *_downloadSpaceStateView;
    long long _downloadCount;
}

+ (long long)buttonHeight;
@property(nonatomic) long long downloadCount; // @synthesize downloadCount=_downloadCount;
- (void).cxx_destruct;
- (void)flushSpaceProgress;
- (long long)getAddedSpace;
- (void)updateForSpace:(long long)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (struct CGSize)buttonTitleSize;
- (void)setTranslucent:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

