//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GMSPlaceFilter;

@interface GMSPlaceRequest : NSObject <NSCopying>
{
    GMSPlaceFilter *_filter;
    double _distanceFilter;
    double _accuracy;
    CDUnknownBlockType _callback;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double distanceFilter; // @synthesize distanceFilter=_distanceFilter;
@property(readonly, nonatomic) GMSPlaceFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilter:(id)arg1 distanceFilter:(double)arg2 accuracy:(double)arg3 callback:(CDUnknownBlockType)arg4;
- (id)init;

@end

