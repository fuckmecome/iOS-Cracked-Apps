//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCOrderLiftCreateModel.h"

@class DBPreCalcModel, DCCreateOrderPeer, DCDetailedPeopleNumberSelectedResultModel, NSDate, NSNumber, NSString;

@interface DCPOrderLiftCreateModel : DCOrderLiftCreateModel
{
    _Bool _isCancelAndResendOrder;
    _Bool _shownDefaultUserAdd;
    _Bool _shownBubbleUserAdd;
    _Bool _isShowAdditionalView;
    int _peer_check_role;
    NSString *_apiMessage;
    NSString *_message;
    NSString *_preference;
    NSString *_extra_special;
    NSString *_extra_text;
    NSString *_user_add;
    long long _passengers;
    DCCreateOrderPeer *_peer;
    NSNumber *_is_carpool;
    NSString *_route_id;
    NSString *_date_id;
    NSString *_get_coupon_status;
    NSString *_get_coupon_success_info;
    NSString *_source_from;
    NSString *_page_source;
    NSString *_message_from;
    NSString *_from;
    DBPreCalcModel *_priceModel;
    NSNumber *_isShowThanksView;
    NSNumber *_isEdited;
    NSDate *_end_date;
    NSString *_end_date_txt;
    NSString *_old_setup_time;
    DCDetailedPeopleNumberSelectedResultModel *_detailedPeopleNumberModel;
}

+ (id)dateFormatter;
@property(retain, nonatomic) DCDetailedPeopleNumberSelectedResultModel *detailedPeopleNumberModel; // @synthesize detailedPeopleNumberModel=_detailedPeopleNumberModel;
@property(nonatomic) _Bool isShowAdditionalView; // @synthesize isShowAdditionalView=_isShowAdditionalView;
@property(nonatomic) _Bool shownBubbleUserAdd; // @synthesize shownBubbleUserAdd=_shownBubbleUserAdd;
@property(nonatomic) _Bool shownDefaultUserAdd; // @synthesize shownDefaultUserAdd=_shownDefaultUserAdd;
@property(copy, nonatomic) NSString *old_setup_time; // @synthesize old_setup_time=_old_setup_time;
@property(nonatomic) _Bool isCancelAndResendOrder; // @synthesize isCancelAndResendOrder=_isCancelAndResendOrder;
@property(copy, nonatomic) NSString *end_date_txt; // @synthesize end_date_txt=_end_date_txt;
@property(retain, nonatomic) NSDate *end_date; // @synthesize end_date=_end_date;
@property(retain, nonatomic) NSNumber *isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) NSNumber *isShowThanksView; // @synthesize isShowThanksView=_isShowThanksView;
@property(retain, nonatomic) DBPreCalcModel *priceModel; // @synthesize priceModel=_priceModel;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *message_from; // @synthesize message_from=_message_from;
@property(copy, nonatomic) NSString *page_source; // @synthesize page_source=_page_source;
@property(copy, nonatomic) NSString *source_from; // @synthesize source_from=_source_from;
@property(copy, nonatomic) NSString *get_coupon_success_info; // @synthesize get_coupon_success_info=_get_coupon_success_info;
@property(copy, nonatomic) NSString *get_coupon_status; // @synthesize get_coupon_status=_get_coupon_status;
@property(copy, nonatomic) NSString *date_id; // @synthesize date_id=_date_id;
@property(copy, nonatomic) NSString *route_id; // @synthesize route_id=_route_id;
@property(copy, nonatomic) NSNumber *is_carpool; // @synthesize is_carpool=_is_carpool;
@property(nonatomic) int peer_check_role; // @synthesize peer_check_role=_peer_check_role;
@property(retain, nonatomic) DCCreateOrderPeer *peer; // @synthesize peer=_peer;
@property(nonatomic) long long passengers; // @synthesize passengers=_passengers;
@property(copy, nonatomic) NSString *user_add; // @synthesize user_add=_user_add;
@property(copy, nonatomic) NSString *extra_text; // @synthesize extra_text=_extra_text;
@property(copy, nonatomic) NSString *extra_special; // @synthesize extra_special=_extra_special;
@property(copy, nonatomic) NSString *preference; // @synthesize preference=_preference;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *apiMessage; // @synthesize apiMessage=_apiMessage;
- (void).cxx_destruct;
- (_Bool)isPrivateOrder;
- (id)init;

@end

