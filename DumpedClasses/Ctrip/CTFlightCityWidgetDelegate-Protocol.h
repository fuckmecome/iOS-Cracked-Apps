//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTFlightCityBaseWidget, FlightCityModelForCityList;

@protocol CTFlightCityWidgetDelegate <NSObject>

@optional
- (void)flightCityWidgetDidCancel:(CTFlightCityBaseWidget *)arg1;
- (void)flightCityWidget:(CTFlightCityBaseWidget *)arg1 didSelect:(FlightCityModelForCityList *)arg2 andSelect:(FlightCityModelForCityList *)arg3;
@end

