//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseDetailViewController.h"

#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLThumbCreationUserInfo.h"

@class NSString, QLFullScreenVideoDetailModel;

@interface QLShortVideoListDetailViewCtl : QLBaseDetailViewController <QLThumbCreationUserInfo, QLJumpObjectOpenUrlDelegate>
{
    QLFullScreenVideoDetailModel *_dataModel;
    _Bool _playerResetted;
    NSString *_cid;
    NSString *_vid;
}

+ (id)getTopMostDetailCtl;
+ (_Bool)OpenJumpUrlWithobject;
@property(nonatomic) _Bool playerResetted; // @synthesize playerResetted=_playerResetted;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getCurrentAttentionItem;
- (void)handlePosterClickWithIndex:(long long)arg1;
- (void)resetPlayer:(long long)arg1 withHistory:(_Bool)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)isPotraitInterface;
- (id)shareReportInfo;
- (id)shareContentTail;
- (id)shareContent;
- (id)shareSingleTitle;
- (id)shareFromPage;
- (id)shareURL;
- (id)shareImage;
- (id)shareImageURL;
- (id)shareSubTitle;
- (id)shareTitle;
- (id)getCurrentShareItem;
- (id)getCacheDataKey;
- (id)shareID;
- (void)handleViewWhenAutoPlay;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshCurrentPage:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)popUp:(_Bool)arg1;
- (_Bool)shouldHeaderViewFixed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

