//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBBookmarksUnreadCountsFetcherListenerAnnouncer, FBUserSession;

@interface FBBookmarksUnreadCountsFetcher : NSObject
{
    FBUserSession *_session;
    FBBookmarksUnreadCountsFetcherListenerAnnouncer *_announcer;
    _Bool _isQueryRunning;
}

- (void).cxx_destruct;
- (id)_unreadCountsForFolder:(id)arg1;
- (id)_pagesUnreadCountsForViewer:(id)arg1;
- (id)_unreadCountsForViewer:(id)arg1;
- (void)_loadFinishedWithError:(id)arg1;
- (void)_loadFinishedWithResponse:(id)arg1;
- (void)fetchUnreadCounts;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

