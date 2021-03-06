//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>, SSCarOrderShareModel<Optional>, TRGetOrderPayResultModel<Optional>, TRStationInfoModel<Optional>, TRWanLiuTotalFeeModel<Optional>, TRWanliuDriverModel<Optional>, TRWanliuDriverPosModel<Optional>, TRWanliuOrderDetailCommentModel<Optional>, TRWanliuOrderDetailOrderModel<Optional>, TRWanliuRealTimeFeeModel<Optional>;

@interface TRWanliuOrderDetailModel : TRBaseModel
{
    NSString<Optional> *_pushTips;
    NSString<Optional> *_pushTips_bubble;
    NSNumber<Optional> *_is_service_control;
    NSNumber<Optional> *_service_control_wait_time;
    NSString<Optional> *_pushTips_passenger_late;
    NSString<Optional> *_pushTips_passenger_late_bubble;
    NSString<Optional> *_not_arrived_right_pos;
    NSString<Optional> *_driverBubbleInfo;
    NSNumber<Optional> *_driver_num;
    TRWanliuOrderDetailOrderModel<Optional> *_order;
    NSNumber<Optional> *_button_control;
    TRWanliuDriverModel<Optional> *_driver;
    TRWanliuOrderDetailCommentModel<Optional> *_comment;
    SSCarOrderShareModel<Optional> *_share;
    TRGetOrderPayResultModel<Optional> *_payResult;
    TRWanliuDriverPosModel<Optional> *_driver_pos;
    NSNumber<Optional> *_strive_order_driver_num;
    NSNumber<Optional> *_count_down_time;
    NSString<Optional> *_push_passenger_msg;
    NSNumber<Optional> *_order_pay_status;
    NSString<Optional> *_order_pay_title;
    NSString<Optional> *_order_pay_subject;
    NSString<Optional> *_order_pay_msg;
    NSString<Optional> *_fresh_msg;
    TRWanLiuTotalFeeModel<Optional> *_feeInfo;
    NSString<Optional> *_product_id;
    TRWanliuRealTimeFeeModel<Optional> *_RealtimeFeeInfo;
    NSNumber<Optional> *_reward_status;
    NSNumber<Optional> *_reward_amount;
    NSNumber<Optional> *_arrivedTime;
    TRStationInfoModel<Optional> *_station_info;
}

@property(retain, nonatomic) TRStationInfoModel<Optional> *station_info; // @synthesize station_info=_station_info;
@property(retain, nonatomic) NSNumber<Optional> *arrivedTime; // @synthesize arrivedTime=_arrivedTime;
@property(retain, nonatomic) NSNumber<Optional> *reward_amount; // @synthesize reward_amount=_reward_amount;
@property(retain, nonatomic) NSNumber<Optional> *reward_status; // @synthesize reward_status=_reward_status;
@property(retain, nonatomic) TRWanliuRealTimeFeeModel<Optional> *RealtimeFeeInfo; // @synthesize RealtimeFeeInfo=_RealtimeFeeInfo;
@property(retain, nonatomic) NSString<Optional> *product_id; // @synthesize product_id=_product_id;
@property(retain, nonatomic) TRWanLiuTotalFeeModel<Optional> *feeInfo; // @synthesize feeInfo=_feeInfo;
@property(copy, nonatomic) NSString<Optional> *fresh_msg; // @synthesize fresh_msg=_fresh_msg;
@property(copy, nonatomic) NSString<Optional> *order_pay_msg; // @synthesize order_pay_msg=_order_pay_msg;
@property(copy, nonatomic) NSString<Optional> *order_pay_subject; // @synthesize order_pay_subject=_order_pay_subject;
@property(copy, nonatomic) NSString<Optional> *order_pay_title; // @synthesize order_pay_title=_order_pay_title;
@property(retain, nonatomic) NSNumber<Optional> *order_pay_status; // @synthesize order_pay_status=_order_pay_status;
@property(retain, nonatomic) NSString<Optional> *push_passenger_msg; // @synthesize push_passenger_msg=_push_passenger_msg;
@property(retain, nonatomic) NSNumber<Optional> *count_down_time; // @synthesize count_down_time=_count_down_time;
@property(retain, nonatomic) NSNumber<Optional> *strive_order_driver_num; // @synthesize strive_order_driver_num=_strive_order_driver_num;
@property(retain, nonatomic) TRWanliuDriverPosModel<Optional> *driver_pos; // @synthesize driver_pos=_driver_pos;
@property(retain, nonatomic) TRGetOrderPayResultModel<Optional> *payResult; // @synthesize payResult=_payResult;
@property(retain, nonatomic) SSCarOrderShareModel<Optional> *share; // @synthesize share=_share;
@property(retain, nonatomic) TRWanliuOrderDetailCommentModel<Optional> *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) TRWanliuDriverModel<Optional> *driver; // @synthesize driver=_driver;
@property(retain, nonatomic) NSNumber<Optional> *button_control; // @synthesize button_control=_button_control;
@property(retain, nonatomic) TRWanliuOrderDetailOrderModel<Optional> *order; // @synthesize order=_order;
@property(retain, nonatomic) NSNumber<Optional> *driver_num; // @synthesize driver_num=_driver_num;
@property(retain, nonatomic) NSString<Optional> *driverBubbleInfo; // @synthesize driverBubbleInfo=_driverBubbleInfo;
@property(retain, nonatomic) NSString<Optional> *not_arrived_right_pos; // @synthesize not_arrived_right_pos=_not_arrived_right_pos;
@property(retain, nonatomic) NSString<Optional> *pushTips_passenger_late_bubble; // @synthesize pushTips_passenger_late_bubble=_pushTips_passenger_late_bubble;
@property(retain, nonatomic) NSString<Optional> *pushTips_passenger_late; // @synthesize pushTips_passenger_late=_pushTips_passenger_late;
@property(retain, nonatomic) NSNumber<Optional> *service_control_wait_time; // @synthesize service_control_wait_time=_service_control_wait_time;
@property(retain, nonatomic) NSNumber<Optional> *is_service_control; // @synthesize is_service_control=_is_service_control;
@property(retain, nonatomic) NSString<Optional> *pushTips_bubble; // @synthesize pushTips_bubble=_pushTips_bubble;
@property(retain, nonatomic) NSString<Optional> *pushTips; // @synthesize pushTips=_pushTips;
- (void).cxx_destruct;
- (id)postOrderRecStartPoiModel;
- (_Bool)isNewControl;
- (_Bool)isCarpoolOrder;

@end

