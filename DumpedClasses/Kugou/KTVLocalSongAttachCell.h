//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

#import "KTVPlayProgressDelegate.h"

@class AMSegmentMenu, KGKTVManager, KTVPlayProgressView, KTV_LocalWorksInfo, NSMutableArray, NSString, NSTimer, UIButton, UIView;

@interface KTVLocalSongAttachCell : KFCommedTableViewCell <KTVPlayProgressDelegate>
{
    KTV_LocalWorksInfo *curInfo;
    NSString *filePath;
    NSString *accompanyPath;
    int curShowType;
    _Bool _isCloseThePlaybar;
    id <KTV_AttachCellProtocol> _delegate;
    KGKTVManager *_audioPlayer;
    KTVPlayProgressView *_playView;
    UIButton *_shareBtn;
    UIButton *_reUploadBtn;
    UIButton *_cancelUploadBtn;
    UIButton *_reSingBtn;
    UIButton *_reTouneBtn;
    UIButton *_reSingAtNodeBtn;
    UIButton *_delBtn;
    NSTimer *_updateTimer;
    UIView *_funcBoundView;
    UIView *_mask;
    NSMutableArray *_menus;
    NSMutableArray *_tempTimeArray;
    AMSegmentMenu *_segmentMenu;
}

@property(nonatomic) _Bool isCloseThePlaybar; // @synthesize isCloseThePlaybar=_isCloseThePlaybar;
@property(retain, nonatomic) AMSegmentMenu *segmentMenu; // @synthesize segmentMenu=_segmentMenu;
@property(retain, nonatomic) NSMutableArray *tempTimeArray; // @synthesize tempTimeArray=_tempTimeArray;
@property(retain, nonatomic) NSMutableArray *menus; // @synthesize menus=_menus;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UIView *funcBoundView; // @synthesize funcBoundView=_funcBoundView;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UIButton *reSingAtNodeBtn; // @synthesize reSingAtNodeBtn=_reSingAtNodeBtn;
@property(retain, nonatomic) UIButton *reTouneBtn; // @synthesize reTouneBtn=_reTouneBtn;
@property(retain, nonatomic) UIButton *reSingBtn; // @synthesize reSingBtn=_reSingBtn;
@property(retain, nonatomic) UIButton *cancelUploadBtn; // @synthesize cancelUploadBtn=_cancelUploadBtn;
@property(retain, nonatomic) UIButton *reUploadBtn; // @synthesize reUploadBtn=_reUploadBtn;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) KTVPlayProgressView *playView; // @synthesize playView=_playView;
@property(nonatomic) __weak KGKTVManager *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <KTV_AttachCellProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)actionDelBtn:(id)arg1;
- (void)actionReSingAtNodeBtn:(id)arg1;
- (void)actionReTouneBtn:(id)arg1;
- (void)actionReSingBtn:(id)arg1;
- (void)actionCancelUploadBtn:(id)arg1;
- (void)actionResumeUploadBtn:(id)arg1;
- (void)actionShareBtn:(id)arg1;
- (void)update:(id)arg1;
- (void)actionProgress:(float)arg1;
- (void)actionPause;
- (void)actionPlay;
- (void)resumePlayPrivate;
- (void)resumePlay;
- (void)pausePlay;
- (void)stopPlayWithOutUnActiveRemoteControl;
- (void)stopPlay;
- (void)configureToneBoardStageKrcTime;
- (void)loadSetting;
- (void)changePlayViewOrFuncView;
- (int)getCurShowType;
- (id)convertFromWork:(id)arg1;
- (void)initContentWithData:(id)arg1;
- (void)showCancelUploadBtn;
- (void)showUploadFail;
- (void)showShareBtn;
- (void)configButtonWithButtons:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)handleforLivePlayer:(unsigned long long)arg1 ext1:(int)arg2 ext2:(int)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

