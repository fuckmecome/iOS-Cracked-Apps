//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMomentItemBase.h"

#import "NSCoding.h"
#import "QLMovieCoreReportItemsProtocal.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QLAppLiveCommentUserInfo, QLAppLiveFeedH5Info, QLAppLiveFeedLocation, QLAppLiveFeedLottery, QLAppLiveFeedQQMusicItem, QLAppLiveFeedVideoItem, QLAppLiveFeedVoteItem, QLAppLiveInteraction, QLAppLiveRankInfo, QLJCEApolloVoiceData, QLJCECommentParentInfoExtra;

@interface QLAppLiveCommentBaseInfo : QLMomentItemBase <NSCoding, QLMovieCoreReportItemsProtocal>
{
    _Bool _showRetry;
    _Bool _retryAbile;
    _Bool _isHotFeeds;
    int _showType;
    int _type;
    int _richType;
    int _userType;
    int _msgStatus;
    int _engineVersion;
    NSString *_commentID;
    NSString *_content;
    double _time;
    double _upTime;
    double _exposureTime;
    long long _topIndex;
    QLAppLiveCommentUserInfo *_userInfo;
    QLAppLiveCommentUserInfo *_parentUserInfo;
    NSString *_parentID;
    NSString *_rootID;
    NSString *_msgId;
    long long _upCount;
    QLAppLiveFeedLocation *_location;
    NSDictionary *_thrdes;
    NSArray *_picUrl;
    QLAppLiveFeedVideoItem *_videoInfo;
    QLAppLiveFeedQQMusicItem *_musicInfo;
    QLAppLiveFeedVoteItem *_voteInfo;
    QLAppLiveFeedVoteItem *_gueseInfo;
    QLAppLiveFeedH5Info *_h5info;
    QLAppLiveFeedLottery *_lotteryInfo;
    QLAppLiveRankInfo *_rankInfo;
    QLAppLiveInteraction *_interAction;
    QLJCEApolloVoiceData *_voiceData;
    long long _replyCount;
    long long _oriReplyCount;
    long long _commentFlag;
    NSString *_errorDesc;
    NSMutableArray *_subCommentList;
    NSMutableArray *_origSubCommentList;
    NSMutableArray *_filterSubCommentList;
    NSString *_commentKey;
    NSString *_oriParentId;
    NSString *_oriRootId;
    QLAppLiveCommentBaseInfo *_oriParentInfo;
    unsigned long long _optionType;
    NSMutableDictionary *_voteInfoFromBase;
    NSMutableDictionary *_interactiveInfoFromBase;
    long long _commentInPageType;
    QLJCECommentParentInfoExtra *_parentInfoExtra;
}

+ (id)commentWith:(id)arg1;
+ (id)commentWithJceObj:(id)arg1;
+ (id)formatObjectModelByJCE:(id)arg1;
@property(retain, nonatomic) QLJCECommentParentInfoExtra *parentInfoExtra; // @synthesize parentInfoExtra=_parentInfoExtra;
@property(nonatomic) long long commentInPageType; // @synthesize commentInPageType=_commentInPageType;
@property(nonatomic) int engineVersion; // @synthesize engineVersion=_engineVersion;
@property(nonatomic) _Bool isHotFeeds; // @synthesize isHotFeeds=_isHotFeeds;
@property(retain, nonatomic) NSMutableDictionary *interactiveInfoFromBase; // @synthesize interactiveInfoFromBase=_interactiveInfoFromBase;
@property(retain, nonatomic) NSMutableDictionary *voteInfoFromBase; // @synthesize voteInfoFromBase=_voteInfoFromBase;
@property(nonatomic) unsigned long long optionType; // @synthesize optionType=_optionType;
@property(retain, nonatomic) QLAppLiveCommentBaseInfo *oriParentInfo; // @synthesize oriParentInfo=_oriParentInfo;
@property(retain, nonatomic) NSString *oriRootId; // @synthesize oriRootId=_oriRootId;
@property(retain, nonatomic) NSString *oriParentId; // @synthesize oriParentId=_oriParentId;
@property(retain, nonatomic) NSString *commentKey; // @synthesize commentKey=_commentKey;
@property(retain, nonatomic) NSMutableArray *filterSubCommentList; // @synthesize filterSubCommentList=_filterSubCommentList;
@property(retain, nonatomic) NSMutableArray *origSubCommentList; // @synthesize origSubCommentList=_origSubCommentList;
@property(retain, nonatomic) NSMutableArray *subCommentList; // @synthesize subCommentList=_subCommentList;
@property(nonatomic) int msgStatus; // @synthesize msgStatus=_msgStatus;
@property(retain, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
@property(nonatomic) _Bool retryAbile; // @synthesize retryAbile=_retryAbile;
@property(nonatomic) _Bool showRetry; // @synthesize showRetry=_showRetry;
@property(nonatomic) long long commentFlag; // @synthesize commentFlag=_commentFlag;
@property(nonatomic) int userType; // @synthesize userType=_userType;
@property(nonatomic) long long oriReplyCount; // @synthesize oriReplyCount=_oriReplyCount;
@property(nonatomic) long long replyCount; // @synthesize replyCount=_replyCount;
@property(retain, nonatomic) QLJCEApolloVoiceData *voiceData; // @synthesize voiceData=_voiceData;
@property(retain, nonatomic) QLAppLiveInteraction *interAction; // @synthesize interAction=_interAction;
@property(retain, nonatomic) QLAppLiveRankInfo *rankInfo; // @synthesize rankInfo=_rankInfo;
@property(retain, nonatomic) QLAppLiveFeedLottery *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) QLAppLiveFeedH5Info *h5info; // @synthesize h5info=_h5info;
@property(retain, nonatomic) QLAppLiveFeedVoteItem *gueseInfo; // @synthesize gueseInfo=_gueseInfo;
@property(retain, nonatomic) QLAppLiveFeedVoteItem *voteInfo; // @synthesize voteInfo=_voteInfo;
@property(retain, nonatomic) QLAppLiveFeedQQMusicItem *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) QLAppLiveFeedVideoItem *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) NSArray *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) int richType; // @synthesize richType=_richType;
@property(retain, nonatomic) NSDictionary *thrdes; // @synthesize thrdes=_thrdes;
@property(retain, nonatomic) QLAppLiveFeedLocation *location; // @synthesize location=_location;
@property(nonatomic) long long upCount; // @synthesize upCount=_upCount;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *rootID; // @synthesize rootID=_rootID;
@property(retain, nonatomic) NSString *parentID; // @synthesize parentID=_parentID;
@property(nonatomic) int showType; // @synthesize showType=_showType;
@property(retain, nonatomic) QLAppLiveCommentUserInfo *parentUserInfo; // @synthesize parentUserInfo=_parentUserInfo;
@property(retain, nonatomic) QLAppLiveCommentUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long topIndex; // @synthesize topIndex=_topIndex;
@property(nonatomic) double exposureTime; // @synthesize exposureTime=_exposureTime;
@property(nonatomic) double upTime; // @synthesize upTime=_upTime;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isRootForwardFeed;
- (id)getParentIDWithRootID;
- (_Bool)canDelete;
- (_Bool)canReport;
- (id)getCommentIDWithOriCommentID;
- (_Bool)canOperate;
- (id)movieCoreReportCGIItems;
- (id)movieCoreReportItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

