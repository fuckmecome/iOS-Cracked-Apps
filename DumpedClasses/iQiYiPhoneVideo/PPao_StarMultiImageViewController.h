//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPMultiImageBrowserViewController.h"

#import "PPao_StarPicPhotoBrowseCellDelegate-Protocol.h"
#import "QYPPActionSheetDelegate-Protocol.h"

@class NSString, QYPPNetRequest;

@interface PPao_StarMultiImageViewController : QYPPMultiImageBrowserViewController <PPao_StarPicPhotoBrowseCellDelegate, QYPPActionSheetDelegate>
{
    NSString *_wallId;
    CDUnknownBlockType _requestImgesBlock;
    CDUnknownBlockType _reloadImagesBlock;
    QYPPNetRequest *_request;
    long long _totalCount;
    long long _pageIndex;
}

@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) QYPPNetRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType reloadImagesBlock; // @synthesize reloadImagesBlock=_reloadImagesBlock;
@property(copy, nonatomic) CDUnknownBlockType requestImgesBlock; // @synthesize requestImgesBlock=_requestImgesBlock;
@property(retain, nonatomic) NSString *wallId; // @synthesize wallId=_wallId;
- (void).cxx_destruct;
- (_Bool)isOriginalImageCacheExists:(id)arg1;
- (void)showOrOpaqueAccessoryViewsWhenPanImageFinish;
- (void)hideOrFadeAccessoryViewsWhenPanImageBeginWithAlpha:(double)arg1;
- (id)imageSizeConverWithReceivedSize:(id)arg1;
- (double)imageObtainingWithReceivedSize:(long long)arg1 expectedSize:(long long)arg2;
- (void)reloadCurrentDownloadButton:(long long)arg1 withProgress:(double)arg2;
- (void)requestImagesSuccess:(id)arg1;
- (void)registerNetRequest:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)starPicPhotoBrowseCell:(id)arg1 longPressImageAtIndex:(long long)arg2;
- (void)starPicPhotoBrowseCell:(id)arg1 downloadOriginalImageAtIndex:(long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (void)starPicPhotoBrowseCell:(id)arg1 didClickLikeAtIndex:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)refreshUIAndLoadImages;
- (void)longPressHanlder:(id)arg1;
- (id)imageBrowserCellReuseIdentifier;
- (Class)imageBrowserCellClass;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

