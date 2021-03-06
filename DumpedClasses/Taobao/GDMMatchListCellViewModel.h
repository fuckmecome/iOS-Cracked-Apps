//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDMCommonCellViewModelProtocal.h"

@class GDMCommonModle, NSArray, NSString;

@interface GDMMatchListCellViewModel : NSObject <GDMCommonCellViewModelProtocal>
{
    _Bool _isHomePage;
    _Bool _isTop;
    NSString *_feedType;
    NSString *_feedId;
    NSString *_feedDetailURL;
    NSString *_recommendReason;
    NSString *_feedInfo;
    GDMCommonModle *_darenAccountInfo;
    NSString *_mainCoverImageURL;
    NSString *_title;
    NSString *_homePageFeedHeadTitle;
    NSString *_itemCount;
    NSString *_tags;
    NSArray *_tagList;
    NSArray *_detailImageURLList;
}

+ (id)parseViewModelFromData:(id)arg1;
@property(retain, nonatomic) NSArray *detailImageURLList; // @synthesize detailImageURLList=_detailImageURLList;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *itemCount; // @synthesize itemCount=_itemCount;
@property _Bool isTop; // @synthesize isTop=_isTop;
@property(copy, nonatomic) NSString *homePageFeedHeadTitle; // @synthesize homePageFeedHeadTitle=_homePageFeedHeadTitle;
@property _Bool isHomePage; // @synthesize isHomePage=_isHomePage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *mainCoverImageURL; // @synthesize mainCoverImageURL=_mainCoverImageURL;
@property(retain, nonatomic) GDMCommonModle *darenAccountInfo; // @synthesize darenAccountInfo=_darenAccountInfo;
@property(copy, nonatomic) NSString *feedInfo; // @synthesize feedInfo=_feedInfo;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *feedDetailURL; // @synthesize feedDetailURL=_feedDetailURL;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *feedType; // @synthesize feedType=_feedType;
- (void).cxx_destruct;
- (void)updateInteractFooterPraiseStatus:(_Bool)arg1 withFeedId:(id)arg2 praiseNum:(id)arg3;
- (void)updateDarenHeaderFollowStatus:(_Bool)arg1 withAccoutnId:(id)arg2;
- (id)targetURLOfCellViewModel;
- (id)detailImageURLAtIndex:(long long)arg1;
- (id)itemCountText;
- (int)cellType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

