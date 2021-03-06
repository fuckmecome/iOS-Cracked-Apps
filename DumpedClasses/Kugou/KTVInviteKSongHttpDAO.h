//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVHttpJsonBaseDAO.h"

@interface KTVInviteKSongHttpDAO : KTVHttpJsonBaseDAO
{
}

- (void)asyncGetChorusHotRecommendListWithPageSize:(int)arg1 page:(int)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncGetChorusFriendRecommendListWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetInviteExpriyStatusWithPlayerID:(int)arg1 inviteId:(long long)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncClearShakeHistoryListWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetLuckyGiftForFreeWithPlayerID:(int)arg1 playerSex:(int)arg2 sourceType:(unsigned int)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)asyncGetGiftsWarehouseListWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetShakeHistoryListWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetTargetInfoForShakeInType:(unsigned int)arg1 playerID:(int)arg2 filterSex:(int)arg3 playerSex:(int)arg4 playerLongitude:(float)arg5 playerLatitude:(float)arg6 succeed:(CDUnknownBlockType)arg7 failed:(CDUnknownBlockType)arg8;
- (void)asyncGetShakeCapacityStateWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetUserFollowListWithPlayerID:(int)arg1 page:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)asyncGetPlayerInviteToWhomWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetInviteCreditWithPlayerId:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetInviteDetailWithPlayerId:(int)arg1 targetId:(long long)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncGetInviteInfoWithPlayerId:(int)arg1 targetId:(long long)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncAssertInviteWithPlayerId:(int)arg1 forInviteId:(long long)arg2 opusId:(long long)arg3 reason:(id)arg4 succeed:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;
- (void)asyncRejectInviteWithPlayerId:(int)arg1 forInviteId:(long long)arg2 reason:(id)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)asyncAcceptInviteWithPlayerId:(int)arg1 forInviteId:(long long)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncGetLbsInvitePlayerListWithPlayerID:(int)arg1 page:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 latitude:(double)arg4 longitude:(double)arg5 succeed:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (void)asyncInvitePlayerTypeWithPlayerId:(int)arg1 targetId:(int)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncInviteOpusInfoWithOpusId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetInviteSongRecordWithPlayerID:(int)arg1 type:(int)arg2 subType:(int)arg3 lastId:(unsigned long long)arg4 pageSize:(unsigned long long)arg5 succeed:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (void)asyncGetInviteOpusListWithPlayerID:(int)arg1 lastId:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)asyncGetAchievementListWithPlayerID:(int)arg1 lastId:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)asyncGetAchievementWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncVertifyInviteSongWithPlayerID:(int)arg1 inviteId:(long long)arg2 opusId:(long long)arg3 reason:(id)arg4 status:(int)arg5 succeed:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (void)asyncSetPlayerInviteTypeWithPlayerID:(int)arg1 inviteType:(int)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncCheckSongListCanInvitedWithPlayerID:(int)arg1 accompanyIDs:(id)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncGetSongRecordsListLatestHistoryWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetSongListCanBeInvitedWithPlayerID:(int)arg1 page:(int)arg2 pageSize:(int)arg3 ownerAccess:(_Bool)arg4 succeed:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;
- (void)asyncDeleteSongFromCanInvitedListWithPlayerID:(int)arg1 songDeleteID:(int)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncAddSongCanBeInvitedWithPlayerID:(int)arg1 songID:(int)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncGetPlayerFriendsRelationshipsWithPlayerID:(int)arg1 friendsIDs:(id)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncSetPlayerGoldMikeNumWithPlayerID:(int)arg1 mikeNum:(int)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)asyncPostKSongInvitedReqWithInfo:(id)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetPlayerInvitedKSongInfoWithPlayerID:(int)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end

