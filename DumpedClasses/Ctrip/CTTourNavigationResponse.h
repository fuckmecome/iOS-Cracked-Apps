//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSArray, NSNumber;

@interface CTTourNavigationResponse : CTJSONModel
{
    NSNumber *_IMSwitch;
    NSNumber *_ThreeBodySwitch;
    NSNumber *_MyConsultantSwitch;
    NSArray *_threeBodyCityIdArrary;
    NSArray *_navigationArrary;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *navigationArrary; // @synthesize navigationArrary=_navigationArrary;
@property(retain, nonatomic) NSArray *threeBodyCityIdArrary; // @synthesize threeBodyCityIdArrary=_threeBodyCityIdArrary;
@property(retain, nonatomic) NSNumber *MyConsultantSwitch; // @synthesize MyConsultantSwitch=_MyConsultantSwitch;
@property(retain, nonatomic) NSNumber *ThreeBodySwitch; // @synthesize ThreeBodySwitch=_ThreeBodySwitch;
@property(retain, nonatomic) NSNumber *IMSwitch; // @synthesize IMSwitch=_IMSwitch;
- (void).cxx_destruct;

@end

