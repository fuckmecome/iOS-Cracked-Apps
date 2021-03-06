//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQVideoCaptureViewControllerDelegate.h"

@class NSDate, NSString, UIButton;

@interface QQStoryBaseViewController : QQViewController <QQVideoCaptureViewControllerDelegate>
{
    _Bool _needShowLeftAvatar;
    _Bool _autoRefreshLater;
    _Bool _autoReloadDataLater;
    _Bool _supportMultRecord;
    _Bool _supportLocalVideo;
    _Bool _needPublicLimit;
    int _viewSource;
    UIButton *_storyBtn;
    double _clickTime;
    NSDate *_lastFreshDate;
}

@property(nonatomic, getter=isNeedPublicLimit) _Bool needPublicLimit; // @synthesize needPublicLimit=_needPublicLimit;
@property(nonatomic, getter=isSupportLocalVideo) _Bool supportLocalVideo; // @synthesize supportLocalVideo=_supportLocalVideo;
@property(nonatomic, getter=isSupportMultRecord) _Bool supportMultRecord; // @synthesize supportMultRecord=_supportMultRecord;
@property(nonatomic) _Bool autoReloadDataLater; // @synthesize autoReloadDataLater=_autoReloadDataLater;
@property(retain, nonatomic) NSDate *lastFreshDate; // @synthesize lastFreshDate=_lastFreshDate;
@property(nonatomic) _Bool autoRefreshLater; // @synthesize autoRefreshLater=_autoRefreshLater;
@property(nonatomic) double clickTime; // @synthesize clickTime=_clickTime;
@property(nonatomic) _Bool needShowLeftAvatar; // @synthesize needShowLeftAvatar=_needShowLeftAvatar;
@property(nonatomic) int viewSource; // @synthesize viewSource=_viewSource;
@property(retain, nonatomic) UIButton *storyBtn; // @synthesize storyBtn=_storyBtn;
- (void)didReceiveMemoryWarning;
- (void)storyVideoCaptureViewControllerDidCancel:(id)arg1;
- (void)storyVideoCaptureViewController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)openVideoCaptureDataReport;
- (void)captureBtnAction:(id)arg1;
- (void)showExitAnimationView:(id)arg1;
- (id)exitAnimationView;
- (id)captureButtonWithFrame:(struct CGRect)arg1;
- (id)getLastFreshDate;
- (void)scrollStoryViewToTop;
- (void)autoRefresh;
- (void)openVideoCaptureWithLabel:(id)arg1;
- (void)openVideoCapture;
- (void)configureCaptureParas;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

