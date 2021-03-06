//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSArray, NSString, SSThemedImageView, SSThemedView, TTActivityShareManager, TTAlphaThemedButton, UICollectionView;

@interface TTScreenshotShareViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _preStatusHidden;
    SSThemedImageView *_imageView;
    TTAlphaThemedButton *_closeButton;
    UICollectionView *_shareCollectionView;
    SSThemedImageView *_toolbarView;
    TTActivityShareManager *_activityShareManager;
    NSArray *_activities;
    NSArray *_panelControllerItems;
    SSThemedView *_backgroundView;
    NSString *_trackLabel;
}

+ (void)show;
+ (_Bool)screenshotEnable;
@property(retain, nonatomic) NSString *trackLabel; // @synthesize trackLabel=_trackLabel;
@property(nonatomic) _Bool preStatusHidden; // @synthesize preStatusHidden=_preStatusHidden;
@property(retain, nonatomic) SSThemedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSArray *panelControllerItems; // @synthesize panelControllerItems=_panelControllerItems;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) TTActivityShareManager *activityShareManager; // @synthesize activityShareManager=_activityShareManager;
@property(retain, nonatomic) SSThemedImageView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) UICollectionView *shareCollectionView; // @synthesize shareCollectionView=_shareCollectionView;
@property(retain, nonatomic) TTAlphaThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SSThemedImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)show;
- (void)closeAction;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

