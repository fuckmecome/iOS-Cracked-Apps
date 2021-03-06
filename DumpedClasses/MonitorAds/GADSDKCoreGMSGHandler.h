//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADGMSGHandler.h"

#import "GADAdFetcherDelegate-Protocol.h"

@class GADSDKCoreWebView, NSMutableDictionary, NSObject, NSString;
@protocol GADSDKCoreGMSGHandlerDelegate, OS_dispatch_queue;

@interface GADSDKCoreGMSGHandler : GADGMSGHandler <GADAdFetcherDelegate>
{
    NSMutableDictionary *_adFetchers;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADSDKCoreWebView *_SDKCoreWebView;
    id <GADSDKCoreGMSGHandlerDelegate> _delegate;
}

+ (id)actionBlockDictionary;
@property(nonatomic) __weak id <GADSDKCoreGMSGHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GADSDKCoreWebView *SDKCoreWebView; // @synthesize SDKCoreWebView=_SDKCoreWebView;
- (void).cxx_destruct;
- (void)adFetcher:(id)arg1 didFailToFetchAd:(id)arg2 withError:(id)arg3 responseCode:(unsigned int)arg4;
- (void)adFetcher:(id)arg1 didFetchAd:(id)arg2;
- (BOOL)isFetchInProgressForFetchRequestID:(id)arg1;
- (void)removeAdFetcherForFetchRequestID:(id)arg1;
- (void)setAdFetcher:(id)arg1 forFetchRequestID:(id)arg2;
- (id)fetchRequestIDForAdFetcher:(id)arg1;
- (void)failedToFetchAd:(id)arg1 forRequestID:(id)arg2 withError:(id)arg3 responseCode:(int)arg4;
- (void)fetchedAd:(id)arg1 forFetchRequestID:(id)arg2 responseCode:(int)arg3;
- (void)didReceiveFetchAdAction:(id)arg1;
- (void)didReceiveSDKCoreReloadRequestWithParameters:(id)arg1;
- (void)didReceiveLoadAdAction:(id)arg1;
- (void)didReceiveloadSDKConstantsAction:(id)arg1;
- (void)didReceiveInvalidAdRequestAction:(id)arg1;
- (void)didReceiveloadAdURLAction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

