//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FXSCity, NSArray;

@interface FXArtistCityPickerVm : NSObject
{
    _Bool _needShowAllProvince;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cacheBlock;
    CDUnknownBlockType _failedBlock;
    NSArray *_data;
    FXSCity *_locationCity;
    NSArray *_allCity;
    NSArray *_livingCity;
}

@property(retain, nonatomic) NSArray *livingCity; // @synthesize livingCity=_livingCity;
@property(retain, nonatomic) NSArray *allCity; // @synthesize allCity=_allCity;
@property(nonatomic) _Bool needShowAllProvince; // @synthesize needShowAllProvince=_needShowAllProvince;
@property(retain, nonatomic) FXSCity *locationCity; // @synthesize locationCity=_locationCity;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType cacheBlock; // @synthesize cacheBlock=_cacheBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)searchCityInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)searchCity:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)handleResult:(_Bool)arg1;
- (_Bool)isInfoIntegrity:(id)arg1;
- (void)requestData;

@end

