//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VUIImage360NodeTextureProvider.h"

@class NSArray, NSString, VUITexture;

@interface TBVRImage360NodeTextureProvider : NSObject <VUIImage360NodeTextureProvider>
{
    float rotateDegreesPerSecond;
    _Bool _provideFailed;
    _Bool _readyForProvide;
    int _imageCount;
    int _currentIndex;
    NSString *_identifier;
    NSString *_zipUrl;
    NSString *_md5;
    NSArray *_imageFiles;
    VUITexture *_currentTexture;
}

@property(retain, nonatomic) VUITexture *currentTexture; // @synthesize currentTexture=_currentTexture;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSArray *imageFiles; // @synthesize imageFiles=_imageFiles;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *zipUrl; // @synthesize zipUrl=_zipUrl;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int imageCount; // @synthesize imageCount=_imageCount;
@property(nonatomic) _Bool readyForProvide; // @synthesize readyForProvide=_readyForProvide;
@property(nonatomic) _Bool provideFailed; // @synthesize provideFailed=_provideFailed;
- (void).cxx_destruct;
- (void)dealloc;
- (id)provideTextureAtIndex:(int)arg1;
- (void)unzipFile:(id)arg1;
- (void)setModificationDateIfImageDirectoryExist;
- (void)downloadZipFile;
@property(readonly, nonatomic) float rotateDegreesPerSecond;
@property(readonly, nonatomic) int totalCount;
- (id)initWithIdentifier:(id)arg1 zipUrl:(id)arg2 md5:(id)arg3 rotateDegreesPerSecond:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

