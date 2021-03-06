//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMDynamicActionDO>, NSDictionary, NSString;

@interface FMDynamicActionDO : NSObject
{
    _Bool _showGuideAlways;
    int _actionType;
    long long _actionStyle;
    long long _iosActionStyle;
    NSString *_actionName;
    NSString *_url;
    NSString *_urlIcon;
    NSDictionary *_urlParams;
    NSString *_toast;
    NSString *_title;
    NSString *_subTitle;
    NSArray<FMDynamicActionDO> *_actionList;
    NSString *_apiName;
    NSString *_apiVersion;
    NSDictionary *_apiParams;
    NSString *_actionGuidePicUrl;
    NSString *_utName;
    NSDictionary *_utParams;
}

@property(retain, nonatomic) NSDictionary *utParams; // @synthesize utParams=_utParams;
@property(copy, nonatomic) NSString *utName; // @synthesize utName=_utName;
@property(nonatomic) _Bool showGuideAlways; // @synthesize showGuideAlways=_showGuideAlways;
@property(retain, nonatomic) NSString *actionGuidePicUrl; // @synthesize actionGuidePicUrl=_actionGuidePicUrl;
@property(retain, nonatomic) NSDictionary *apiParams; // @synthesize apiParams=_apiParams;
@property(copy, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSArray<FMDynamicActionDO> *actionList; // @synthesize actionList=_actionList;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) NSDictionary *urlParams; // @synthesize urlParams=_urlParams;
@property(copy, nonatomic) NSString *urlIcon; // @synthesize urlIcon=_urlIcon;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(nonatomic) long long iosActionStyle; // @synthesize iosActionStyle=_iosActionStyle;
@property(nonatomic) long long actionStyle; // @synthesize actionStyle=_actionStyle;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;

@end

