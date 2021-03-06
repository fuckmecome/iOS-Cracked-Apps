//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPopoverActionSheet, FBProfileFriendListActionExecutor;

@interface FBProfileFriendListPopoverActionSheetController : NSObject
{
    FBProfileFriendListActionExecutor *_actionExecutor;
    FBPopoverActionSheet *_popoverActionSheet;
    struct FBProfileFriendListPopoverActionAnalyticsInfo _analyticsInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_presentWithButtons:(id)arg1 inView:(id)arg2;
- (void)_logProfileFriendListOverflowOption:(id)arg1 friendshipStatus:(id)arg2;
- (void)_showBlockPersonAlertForPerson:(id)arg1;
- (id)_blockButtonItemForPerson:(id)arg1;
- (void)_didTapPopOverMenuFollowPersonButton:(id)arg1;
- (void)_didTapPopOverMenuMessagePersonButton:(id)arg1;
- (void)_didTapPopOverMenuSuggestFriendsButton:(id)arg1;
- (void)_didTapPopOverMenuSeeFriendsButton:(id)arg1;
- (void)_didTapPopoverMenuBlockButton:(id)arg1;
- (void)_didTapPopoverMenuUnfriendButton:(id)arg1;
- (void)presentOverflowButtonMenuForPerson:(id)arg1 inView:(id)arg2;
- (void)presentFriendsButtonMenuForPerson:(id)arg1 inView:(id)arg2;
- (id)initWithActionExecutor:(id)arg1 analyticsInfo:(struct FBProfileFriendListPopoverActionAnalyticsInfo)arg2;

@end

