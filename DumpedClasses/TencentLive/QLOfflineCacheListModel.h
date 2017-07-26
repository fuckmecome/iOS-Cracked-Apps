//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLJCECacheListModel.h"

#import "QLOfflineSelectControllerDataSource.h"
#import "QLRequestModelDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, QLMovieItem;

@interface QLOfflineCacheListModel : QLJCECacheListModel <QLRequestModelDelegate, QLOfflineSelectControllerDataSource>
{
    long long _videoType;
    QLMovieItem *_movieItem;
    NSDictionary *_fileSizes;
    NSArray *_filterCacheItems;
    CDUnknownBlockType _callBack;
    NSMutableArray *_allCacheItems;
}

@property(retain, nonatomic) NSMutableArray *allCacheItems; // @synthesize allCacheItems=_allCacheItems;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) NSArray *filterCacheItems; // @synthesize filterCacheItems=_filterCacheItems;
@property(retain, nonatomic) NSDictionary *fileSizes; // @synthesize fileSizes=_fileSizes;
@property(retain, nonatomic) QLMovieItem *movieItem; // @synthesize movieItem=_movieItem;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
- (void).cxx_destruct;
- (long long)numberOfMovieItems;
- (unsigned long long)cellStateAtIndexPath:(id)arg1;
- (struct CGSize)headerSizeForSection:(long long)arg1;
- (struct UIEdgeInsets)insetsForSection:(long long)arg1;
- (double)minimumInteritemSpacingForSection:(long long)arg1;
- (double)minimumLineSpacingForSection:(long long)arg1;
- (id)cacheItemAtIndexPath:(id)arg1;
- (struct CGSize)sizeAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)isPreCacheForIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool hasPreCache;
@property(readonly, nonatomic) NSString *pageDescription;
@property(readonly, nonatomic) long long currentDownloadCount;
@property(readonly, nonatomic) NSString *currentDefinition;
- (void)queryIndexPathForVid:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCacheItemUsingBlock:(CDUnknownBlockType)arg1;
- (id)fileSizesFromFiltedCacheItems:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2 forceReload:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
