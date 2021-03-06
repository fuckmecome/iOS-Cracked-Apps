//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluLocationManager.h"

@class aluLBSLocation;
@protocol aluSearchLocationManagerDelegate;

@interface aluSearchLocationManager : aluLocationManager
{
    id <aluSearchLocationManagerDelegate> _searchDelegate;
    aluLBSLocation *_lbsLocation;
}

@property(retain, nonatomic) aluLBSLocation *lbsLocation; // @synthesize lbsLocation=_lbsLocation;
@property(nonatomic) __weak id <aluSearchLocationManagerDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (id)standardFormateMAC:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)doProcessLocation:(id)arg1 manager:(id)arg2 fromWifi:(_Bool)arg3;

@end

