//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AliTallyImageCache : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_indexArray;
    long long _usedCacheSize;
}

@property(nonatomic) long long usedCacheSize; // @synthesize usedCacheSize=_usedCacheSize;
@property(retain, nonatomic) NSMutableArray *indexArray; // @synthesize indexArray=_indexArray;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
- (void).cxx_destruct;
- (id)dataFromDiskForKey:(id)arg1;
- (void)removeImageAndThumbnailForKey:(id)arg1;
- (void)setThumbnailImageData:(id)arg1 forKey:(id)arg2;
- (void)setImageData:(id)arg1 forKey:(id)arg2;
- (id)thumbnailImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)diskPathForImageCache;
- (void)removeDiskImageForKey:(id)arg1;
- (_Bool)saveDiskImageData:(id)arg1 forKey:(id)arg2;
- (id)diskDataForKey:(id)arg1;
- (id)diskImageForKey:(id)arg1;
- (void)releaseDiskCache;
- (void)initDiskCache;
- (long long)memorySizeForImage:(id)arg1;
- (void)removeMemoryImageForKey:(id)arg1;
- (void)setMemoryImage:(id)arg1 forKey:(id)arg2;
- (id)memoryImageForKey:(id)arg1;
- (void)releaseMemoryCache;
- (void)initMemoryCache;

@end

