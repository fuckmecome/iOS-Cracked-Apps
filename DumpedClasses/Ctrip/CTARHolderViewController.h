//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class CTARMapView;

@interface CTARHolderViewController : CTRootViewController
{
    _Bool _isTappedIn;
    double _lBSActivityID;
    CTARMapView *_mapView;
}

@property(retain, nonatomic) CTARMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) double lBSActivityID; // @synthesize lBSActivityID=_lBSActivityID;
@property(nonatomic) _Bool isTappedIn; // @synthesize isTappedIn=_isTappedIn;
- (void).cxx_destruct;
- (void)pressBackBtn:(id)arg1;
- (void)initBaseView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)init:(_Bool)arg1 lBSActivityID:(double)arg2;
- (id)init:(_Bool)arg1;
- (void)viewDidLoad;

@end
