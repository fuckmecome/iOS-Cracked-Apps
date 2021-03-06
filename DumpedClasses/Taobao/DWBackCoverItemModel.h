//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DWGoodListItmeAry, DWVideoRecommendItemList, NSString;

@interface DWBackCoverItemModel : NSObject
{
    _Bool _needRecommend;
    _Bool _needGoodsList;
    _Bool _needFavorsList;
    _Bool _needGoshop;
    _Bool _needShare;
    NSString *_shopUrl;
    NSString *_shortKeyId;
    NSString *_userId;
    DWVideoRecommendItemList *_recommendItems;
    DWGoodListItmeAry *_favorListItems;
    DWGoodListItmeAry *_goodListItems;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) DWGoodListItmeAry *goodListItems; // @synthesize goodListItems=_goodListItems;
@property(retain, nonatomic) DWGoodListItmeAry *favorListItems; // @synthesize favorListItems=_favorListItems;
@property(retain, nonatomic) DWVideoRecommendItemList *recommendItems; // @synthesize recommendItems=_recommendItems;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *shortKeyId; // @synthesize shortKeyId=_shortKeyId;
@property(copy, nonatomic) NSString *shopUrl; // @synthesize shopUrl=_shopUrl;
@property(nonatomic) _Bool needShare; // @synthesize needShare=_needShare;
@property(nonatomic) _Bool needGoshop; // @synthesize needGoshop=_needGoshop;
@property(nonatomic) _Bool needFavorsList; // @synthesize needFavorsList=_needFavorsList;
@property(nonatomic) _Bool needGoodsList; // @synthesize needGoodsList=_needGoodsList;
@property(nonatomic) _Bool needRecommend; // @synthesize needRecommend=_needRecommend;
- (void).cxx_destruct;

@end

