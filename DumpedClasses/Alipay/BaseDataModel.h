//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPSpaceObjectInfo, NSArray, NSDictionary, NSString, UIColor, WealthMarkInfo;

@interface BaseDataModel : NSObject
{
    _Bool _hideMainText;
    _Bool _useCache;
    _Bool _hidden;
    _Bool _useFullLine;
    NSString *_appId;
    NSString *_widgetId;
    NSString *_icon;
    NSString *_iconUrl;
    NSString *_title;
    NSString *_mainText;
    CDPSpaceObjectInfo *_cdpInfo;
    WealthMarkInfo *_cdpMarkInfo;
    NSDictionary *_extInfos;
    NSString *_jumpUrl;
    UIColor *_mainTextColor;
    WealthMarkInfo *_markInfo;
    NSString *_markFlag;
    long long _index;
    NSString *_stageCode;
    NSArray *_heightInfo;
}

@property(retain, nonatomic) NSArray *heightInfo; // @synthesize heightInfo=_heightInfo;
@property(nonatomic) _Bool useFullLine; // @synthesize useFullLine=_useFullLine;
@property(copy, nonatomic) NSString *stageCode; // @synthesize stageCode=_stageCode;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *markFlag; // @synthesize markFlag=_markFlag;
@property(retain, nonatomic) WealthMarkInfo *markInfo; // @synthesize markInfo=_markInfo;
@property(retain, nonatomic) UIColor *mainTextColor; // @synthesize mainTextColor=_mainTextColor;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) _Bool useCache; // @synthesize useCache=_useCache;
@property(nonatomic) _Bool hideMainText; // @synthesize hideMainText=_hideMainText;
@property(retain, nonatomic) NSDictionary *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) WealthMarkInfo *cdpMarkInfo; // @synthesize cdpMarkInfo=_cdpMarkInfo;
@property(retain, nonatomic) CDPSpaceObjectInfo *cdpInfo; // @synthesize cdpInfo=_cdpInfo;
@property(retain, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *widgetId; // @synthesize widgetId=_widgetId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)exposureValue;
- (id)spmValue;
- (id)entityId;
- (void)fillDataFromACApp:(id)arg1 fromWealthModel:(id)arg2 cdpInfo:(id)arg3 hideSubTitle:(_Bool)arg4;
- (void)markRedPointDidClicked;
- (void)fillDataFromWealthModel:(id)arg1;

@end

