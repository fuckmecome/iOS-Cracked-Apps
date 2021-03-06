//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSMutableArray, NSString, QLASIHTTPRequest;

@interface QLPageDataBaseModel : QLRequestModel
{
    _Bool _hasNextPage;
    _Bool _haveCurrentPlay;
    _Bool _haveTimePoster;
    _Bool _haveOrderPoster;
    int _baseTimeOut;
    NSString *_dataKey;
    NSString *_pageContext;
    NSString *_refreshContext;
    NSMutableArray *_aryItems;
    QLASIHTTPRequest *_dataRequest;
    NSString *_title;
    NSString *_refreshWording;
    NSMutableArray *_remainAryItems;
}

+ (_Bool)isNetworkRedsPoster:(id)arg1;
+ (_Bool)isShowBoxShouldAutoRefresh:(id)arg1;
+ (_Bool)isOrderPoster:(id)arg1;
+ (_Bool)isTimePoster:(id)arg1;
+ (_Bool)isCurrentPlayItem:(id)arg1;
@property(retain, nonatomic) NSMutableArray *remainAryItems; // @synthesize remainAryItems=_remainAryItems;
@property(copy, nonatomic) NSString *refreshWording; // @synthesize refreshWording=_refreshWording;
@property(nonatomic) int baseTimeOut; // @synthesize baseTimeOut=_baseTimeOut;
@property(nonatomic) _Bool haveOrderPoster; // @synthesize haveOrderPoster=_haveOrderPoster;
@property(nonatomic) _Bool haveTimePoster; // @synthesize haveTimePoster=_haveTimePoster;
@property(nonatomic) _Bool haveCurrentPlay; // @synthesize haveCurrentPlay=_haveCurrentPlay;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) NSMutableArray *aryItems; // @synthesize aryItems=_aryItems;
@property(copy, nonatomic) NSString *refreshContext; // @synthesize refreshContext=_refreshContext;
@property(copy, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
- (void).cxx_destruct;
- (id)getDataWithDataKey:(id)arg1;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancel;
- (void)cancelDataRequest;
- (void)dealloc;
- (id)init;

@end

