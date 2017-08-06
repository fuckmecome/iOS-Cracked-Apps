//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FM_ProgramBean, UIButton, UIImage, UIImageView, UILabel;

@interface DetachSongBar : UIView
{
    UIButton *songBtn;
    UIImageView *barBackground;
    UILabel *songName;
    UILabel *singer;
    struct CGRect initFrame;
    struct CGPoint startTouch;
    _Bool _isMoving;
    int dicection;
    UIButton *lynBtn;
    FM_ProgramBean *pbean;
    UIImageView *singerLogo;
    UILabel *weishibie;
    UIImageView *line;
    UIButton *downloadBtn;
    UIButton *songwordBtn;
    UIButton *identyBtn;
    UIImage *loadingimg;
    _Bool isIdentify;
    UIButton *bgBtn;
    _Bool _isDrag;
    id <DetachSongBarDelegate> _delegate;
    UIButton *_likeBtn;
}

@property(retain, nonatomic) UIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property _Bool isDrag; // @synthesize isDrag=_isDrag;
@property(nonatomic) __weak id <DetachSongBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)songBarAnimation:(int)arg1;
- (void)singerLogoTap:(id)arg1;
- (void)singerLogoDownload;
- (void)refreshSongBar:(id)arg1;
- (void)lynBtnClick:(id)arg1;
- (void)songBtnClick:(id)arg1;
- (void)refreshSongBtnImageWithIsPop:(_Bool)arg1;
- (void)silderAnimation:(int)arg1;
- (void)moveViewWithX:(float)arg1;
- (void)panMove:(id)arg1;
- (void)detachBarBtnClick:(id)arg1;
- (void)identifyBtnClick:(id)arg1;
- (void)notIdentifySong;
- (void)identifySong;
- (void)stopIdentify;
- (void)startIdentify;
- (void)initIdentfyBtn;
- (id)initWithFrame:(struct CGRect)arg1;

@end
