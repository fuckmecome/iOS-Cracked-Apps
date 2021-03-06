//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSUploadImageManagerDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, SSHttpOperation, SSUploadImageManager;

@interface ArticlePostMomentManager : NSObject <SSUploadImageManagerDelegate>
{
    _Bool _isPosting;
    _Bool _hasCancelled;
    id <ArticlePostMomentManagerDelegate> _delegate;
    NSString *_content;
    long long _forumID;
    unsigned long long _fromSource;
    long long _needForward;
    NSMutableArray *_imageUris;
    NSMutableArray *_imageKeys;
    NSMutableDictionary *_keysImageUris;
    SSHttpOperation *_httpOperation;
    SSUploadImageManager *_uploadImageManager;
}

@property(retain, nonatomic) SSUploadImageManager *uploadImageManager; // @synthesize uploadImageManager=_uploadImageManager;
@property(retain, nonatomic) SSHttpOperation *httpOperation; // @synthesize httpOperation=_httpOperation;
@property(retain, nonatomic) NSMutableDictionary *keysImageUris; // @synthesize keysImageUris=_keysImageUris;
@property(retain, nonatomic) NSMutableArray *imageKeys; // @synthesize imageKeys=_imageKeys;
@property(retain, nonatomic) NSMutableArray *imageUris; // @synthesize imageUris=_imageUris;
@property(nonatomic) long long needForward; // @synthesize needForward=_needForward;
@property(nonatomic) unsigned long long fromSource; // @synthesize fromSource=_fromSource;
@property(nonatomic) long long forumID; // @synthesize forumID=_forumID;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) __weak id <ArticlePostMomentManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)uploadImageManager:(id)arg1 uploadImagesProgress:(id)arg2;
- (void)uploadImageManager:(id)arg1 uploadFinishForUniqueKeys:(id)arg2 results:(id)arg3 error:(id)arg4;
- (void)operation:(id)arg1 result:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)cancelAllOperations;
- (void)PostMomentWithContent:(id)arg1 ForumID:(long long)arg2 AssetsImages:(id)arg3 FromSource:(unsigned long long)arg4 NeedForward:(long long)arg5;
- (void)PostMoment;
- (_Bool)isPosting;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

