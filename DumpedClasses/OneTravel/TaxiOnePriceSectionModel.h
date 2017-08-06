//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TaxiOnePriceSectionModel : JSONModel
{
    NSNumber<Optional> *_price;
    NSString<Optional> *_op_id;
    NSNumber<Optional> *_modify_price;
    NSNumber<Optional> *_change_model;
    NSNumber<Optional> *_max;
    NSNumber<Optional> *_min;
    NSString<Optional> *_group;
    NSNumber<Optional> *_price_step;
    NSNumber<Optional> *_is_popup;
    NSNumber<Optional> *_test_type;
    NSString<Optional> *_deal_rate_suc;
    NSString<Optional> *_deal_rate_fail;
    NSNumber<Optional> *_recommend_one_price;
}

@property(retain, nonatomic) NSNumber<Optional> *recommend_one_price; // @synthesize recommend_one_price=_recommend_one_price;
@property(copy, nonatomic) NSString<Optional> *deal_rate_fail; // @synthesize deal_rate_fail=_deal_rate_fail;
@property(copy, nonatomic) NSString<Optional> *deal_rate_suc; // @synthesize deal_rate_suc=_deal_rate_suc;
@property(retain, nonatomic) NSNumber<Optional> *test_type; // @synthesize test_type=_test_type;
@property(retain, nonatomic) NSNumber<Optional> *is_popup; // @synthesize is_popup=_is_popup;
@property(retain, nonatomic) NSNumber<Optional> *price_step; // @synthesize price_step=_price_step;
@property(copy, nonatomic) NSString<Optional> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSNumber<Optional> *min; // @synthesize min=_min;
@property(retain, nonatomic) NSNumber<Optional> *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber<Optional> *change_model; // @synthesize change_model=_change_model;
@property(retain, nonatomic) NSNumber<Optional> *modify_price; // @synthesize modify_price=_modify_price;
@property(copy, nonatomic) NSString<Optional> *op_id; // @synthesize op_id=_op_id;
@property(retain, nonatomic) NSNumber<Optional> *price; // @synthesize price=_price;
- (void).cxx_destruct;

@end
