//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface GetDistrictByCityResponse : CTBusinessBean <NSCoding>
{
    int districtId;
    NSString *districtName;
    _Bool isInChina;
    int gsDistrictId;
    NSString *gsDistrictName;
    _Bool gsIsInChina;
}

@property(nonatomic) _Bool gsIsInChina; // @synthesize gsIsInChina;
@property(copy, nonatomic) NSString *gsDistrictName; // @synthesize gsDistrictName;
@property(nonatomic) int gsDistrictId; // @synthesize gsDistrictId;
@property(nonatomic) _Bool isInChina; // @synthesize isInChina;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName;
@property(nonatomic) int districtId; // @synthesize districtId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

