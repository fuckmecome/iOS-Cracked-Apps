//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADBannerView.h"

#import "DFPCustomRenderedAdDelegate-Protocol.h"

@class GADCorrelator, NSArray, NSString;
@protocol DFPCustomRenderedBannerViewDelegate, GADAdSizeDelegate, GADAppEventDelegate;

@interface DFPBannerView : GADBannerView <DFPCustomRenderedAdDelegate>
{
    unsigned int _previousCorrelationID;
    id <GADAppEventDelegate> _appEventDelegate;
    id <GADAdSizeDelegate> _adSizeDelegate;
    NSArray *_validAdSizes;
    id <DFPCustomRenderedBannerViewDelegate> _customRenderedBannerViewDelegate;
}

@property(nonatomic) __weak id <DFPCustomRenderedBannerViewDelegate> customRenderedBannerViewDelegate; // @synthesize customRenderedBannerViewDelegate=_customRenderedBannerViewDelegate;
@property(copy, nonatomic) NSArray *validAdSizes; // @synthesize validAdSizes=_validAdSizes;
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @synthesize adSizeDelegate=_adSizeDelegate;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2;
- (BOOL)slotShouldPreemptInProgressRequest:(id)arg1;
- (BOOL)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id *)arg3;
- (void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)slot:(id)arg1 willResizeToAdSize:(struct GADAdSize)arg2;
- (void)setValidAdSizesWithSizes:(struct GADAdSize *)arg1;
- (void)recordImpression;
- (void)resize:(struct GADAdSize)arg1;
@property(nonatomic) BOOL enableManualImpressions;
@property(retain, nonatomic) GADCorrelator *correlator;
- (void)finishedRenderingAdView:(id)arg1;
- (void)recordCustomAdImpression;
- (void)recordClick;

// Remaining properties
@property(copy, nonatomic) NSString *adUnitID; // @dynamic adUnitID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

