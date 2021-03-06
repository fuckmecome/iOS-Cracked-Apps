//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FDIndexPathHeightCache : NSObject
{
    _Bool _automaticallyInvalidateEnabled;
    struct NSMutableArray *_heightsBySectionForPortrait;
    struct NSMutableArray *_heightsBySectionForLandscape;
}

@property(retain, nonatomic) NSMutableArray *heightsBySectionForLandscape; // @synthesize heightsBySectionForLandscape=_heightsBySectionForLandscape;
@property(retain, nonatomic) NSMutableArray *heightsBySectionForPortrait; // @synthesize heightsBySectionForPortrait=_heightsBySectionForPortrait;
@property(nonatomic) _Bool automaticallyInvalidateEnabled; // @synthesize automaticallyInvalidateEnabled=_automaticallyInvalidateEnabled;
- (void).cxx_destruct;
- (void)buildRowsIfNeeded:(long long)arg1 inExistSection:(long long)arg2;
- (void)buildSectionsIfNeeded:(long long)arg1;
- (void)buildCachesAtIndexPathsIfNeeded:(id)arg1;
- (void)invalidateAllHeightCache;
- (void)invalidateHeightAtIndexPath:(id)arg1;
- (double)heightForIndexPath:(id)arg1;
- (void)cacheHeight:(double)arg1 byIndexPath:(id)arg2;
- (_Bool)existsHeightAtIndexPath:(id)arg1;
- (void)enumerateAllOrientationsUsingBlock:(CDUnknownBlockType)arg1;
- (struct NSMutableArray *)heightsBySectionForCurrentOrientation;
- (id)init;

@end

