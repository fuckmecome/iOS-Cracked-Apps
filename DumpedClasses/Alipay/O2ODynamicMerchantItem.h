//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OMistListItem.h"

@class NSObject;

@interface O2ODynamicMerchantItem : O2OMistListItem
{
    struct NodeLayout _layout;
    NSObject *_orignItem;
}

+ (id)getCdpServer:(id)arg1 blockId:(id)arg2 shopid:(id)arg3 vc:(id)arg4;
+ (id)parseBlock:(id)arg1 commonDic:(id)arg2 monitorDic:(id)arg3 sectionIndex:(unsigned long long)arg4 rowIndex:(unsigned long long)arg5 cache:(_Bool)arg6 viewController:(id)arg7;
+ (void)addTheLastOneFlag:(id)arg1;
+ (id)parseFromArray:(id)arg1 commonDic:(id)arg2 monitorDic:(id)arg3 cache:(_Bool)arg4 viewController:(id)arg5 ignoreBlankBlock:(_Bool)arg6;
+ (id)parseFeedDataList:(id)arg1 templateDic:(id)arg2 commonDic:(id)arg3 monitorDic:(id)arg4 viewController:(id)arg5 startIndex:(long long)arg6;
+ (id)parseFeedTemplateDic:(id)arg1;
+ (id)parsePayInfoBlock:(id)arg1 commonDic:(id)arg2 monitorDic:(id)arg3 cache:(_Bool)arg4 viewController:(id)arg5 protocolItem:(id)arg6;
+ (long long)getSystemTime:(id)arg1;
@property(retain, nonatomic) NSObject *orignItem; // @synthesize orignItem=_orignItem;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateSectionItem:(id)arg1 withTemplate:(id)arg2 allTemplates:(id)arg3;

@end

