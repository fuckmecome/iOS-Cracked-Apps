//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBProfileCoverPhotoComponentUploadListenerAnnouncer, FBUserSession, NSObject;
@protocol FBProfileCoverPhotoComponentTapHandler;

@protocol FBProfileCoverPhotoComponentToolbox <NSObject>
@property(readonly, nonatomic) FBProfileCoverPhotoComponentUploadListenerAnnouncer *profileCoverPhotoComponentUploadListenerAnnouncer;
@property(readonly, nonatomic) id <FBProfileCoverPhotoComponentTapHandler> profileCoverPhotoComponentTapHandler;
@property(readonly, nonatomic) NSObject *scenePath;
@property(readonly, nonatomic) FBUserSession *session;
@end

