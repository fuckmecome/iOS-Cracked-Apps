//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NearbyGroupNewGroupRecruitRequestProxy : NSObject
{
}

+ (id)handleNewGroupRecruitRequestResult:(CDStruct_7895f40e)arg1;
+ (id)getNearbyGroupLabelsFromWupData:(struct CPBMessageDecoder *)arg1;
+ (id)getNearbyLabelRspInfoFromWupData:(struct CPBMessageDecoder *)arg1;
+ (id)getNearbyLabelInfoFromWupData:(struct CPBMessageDecoder *)arg1;
+ (id)getNearbyLabelFromWupData:(struct CPBMessageDecoder *)arg1;
+ (id)getNearByColor:(struct CPBMessageDecoder *)arg1;
+ (id)createNewGroupRecruitRequest:(unsigned int)arg1 maxDistance:(unsigned int)arg2 locType:(unsigned int)arg3 msgGPS:(id)arg4;
+ (id)getOIDBSSOPKGCmdV2:(long long)arg1 serviceType:(long long)arg2 buffer:(basic_string_075b6133)arg3;

@end
