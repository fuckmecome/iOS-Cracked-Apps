//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBDetailEventBaseSubscriber.h"

@interface TBDetailRefreshPageSubscriber : TBDetailEventBaseSubscriber
{
}

- (id)findControl:(_Bool)arg1;
- (id)handleRequestDataEvent:(id)arg1;
- (id)handleBackEvent:(id)arg1;
- (void)openUrlWithRedirectUrl:(id)arg1;
- (void)loadH5PageWithRedirectUrl:(id)arg1;
- (id)handlePopViewController:(id)arg1;
- (id)handleRedirectToH5Event:(id)arg1;
- (id)handleReloadSingleCellEvent:(id)arg1;
- (id)handleReloadTableViewEvent:(id)arg1;
- (id)handleReloadSingleCellWithKeyEvent:(id)arg1;
- (id)handleReloadDataEvent:(id)arg1;
- (id)handleRequestDataForJHSEvent:(id)arg1;
- (struct _NSRange)eventRange;
- (id)handleEvent:(id)arg1;

@end
