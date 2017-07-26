//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface TBSNSListContainerHeaderItem : TBJSONModel
{
    NSString *_pageId;
    NSString *_pageName;
    NSString *_url;
    long long _pageHeight;
    long long _pageWidth;
    long long _aggregationType;
    long long _scheme;
    NSString *_headerDataVersion;
    NSDictionary *_headerData;
}

@property(retain, nonatomic) NSDictionary *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) NSString *headerDataVersion; // @synthesize headerDataVersion=_headerDataVersion;
@property(nonatomic) long long scheme; // @synthesize scheme=_scheme;
@property(nonatomic) long long aggregationType; // @synthesize aggregationType=_aggregationType;
@property(nonatomic) long long pageWidth; // @synthesize pageWidth=_pageWidth;
@property(nonatomic) long long pageHeight; // @synthesize pageHeight=_pageHeight;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
- (double)getHeaderH;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
