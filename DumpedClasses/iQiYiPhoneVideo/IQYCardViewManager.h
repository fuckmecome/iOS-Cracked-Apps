//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYCardViewManager : DataLoadManager
{
    _Bool _needExtraParameter;
    _Bool _isSaveToFile;
    _Bool _isHomePage;
    _Bool _isFirstPage;
    NSString *_fromtype;
    NSString *_fromsubtype;
    NSString *_s2;
    NSString *_s3;
    NSString *_url;
    NSString *_paopaoDeviceId;
    NSString *_province_id;
    NSString *_customCacheKey;
}

+ (_Bool)hasExpired:(id)arg1;
@property(copy, nonatomic) NSString *customCacheKey; // @synthesize customCacheKey=_customCacheKey;
@property(nonatomic) _Bool isFirstPage; // @synthesize isFirstPage=_isFirstPage;
@property(nonatomic) _Bool isHomePage; // @synthesize isHomePage=_isHomePage;
@property(nonatomic) _Bool isSaveToFile; // @synthesize isSaveToFile=_isSaveToFile;
@property(nonatomic) _Bool needExtraParameter; // @synthesize needExtraParameter=_needExtraParameter;
@property(copy, nonatomic) NSString *province_id; // @synthesize province_id=_province_id;
@property(copy, nonatomic) NSString *paopaoDeviceId; // @synthesize paopaoDeviceId=_paopaoDeviceId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *s3; // @synthesize s3=_s3;
@property(copy, nonatomic) NSString *s2; // @synthesize s2=_s2;
@property(copy, nonatomic) NSString *fromsubtype; // @synthesize fromsubtype=_fromsubtype;
@property(copy, nonatomic) NSString *fromtype; // @synthesize fromtype=_fromtype;
- (void).cxx_destruct;
- (void)sendQOSLog;
- (void)saveHomePageFile;
- (void)didNetFinish;
- (_Bool)parse:(id)arg1;
- (_Bool)hasExpired:(id)arg1;
- (id)urlStl;
- (id)keyForCache;
- (id)init;

@end

