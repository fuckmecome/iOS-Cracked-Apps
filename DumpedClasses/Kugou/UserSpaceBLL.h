//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CloudPlayListHttpDao, SongMenuMoudleHttpDAO, UserMoudleHttpDAO;

@interface UserSpaceBLL : NSObject
{
    CloudPlayListHttpDao *_favoriteDao;
    UserMoudleHttpDAO *_userMoudleDao;
    SongMenuMoudleHttpDAO *_songMenuMoudleDao;
}

@property(retain, nonatomic) SongMenuMoudleHttpDAO *songMenuMoudleDao; // @synthesize songMenuMoudleDao=_songMenuMoudleDao;
@property(retain, nonatomic) UserMoudleHttpDAO *userMoudleDao; // @synthesize userMoudleDao=_userMoudleDao;
@property(retain, nonatomic) CloudPlayListHttpDao *favoriteDao; // @synthesize favoriteDao=_favoriteDao;
- (void).cxx_destruct;
- (void)getUserRecommendLabelsWithRep:(CDUnknownBlockType)arg1 AndException:(CDUnknownBlockType)arg2;

@end

