//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSString, WPPointCardModel, WPShowOrderDicountModel, WPShowTicketModel;

@interface WPShowOrderModel : GWObject
{
    _Bool _detailInfoCellIsExpand;
    NSString *_orderNo;
    NSString *_businessId;
    long long _totalAmount;
    long long _realAmount;
    long long _shouldAmount;
    long long _ticketsNum;
    long long _orderStatus;
    unsigned long long _showStatus;
    NSString *_showStatusName;
    unsigned long long _paymentStatus;
    long long _endTime;
    NSString *_createTime;
    WPPointCardModel *_pointCard;
    NSString *_payMetod;
    NSString *_payTime;
    NSArray *_tickets;
    WPShowOrderDicountModel *_discount;
    NSString *_orderPwd;
    NSString *_orderCodeUrl;
}

+ (id)mj_objectClassInArray;
+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) _Bool detailInfoCellIsExpand; // @synthesize detailInfoCellIsExpand=_detailInfoCellIsExpand;
@property(retain, nonatomic) NSString *orderCodeUrl; // @synthesize orderCodeUrl=_orderCodeUrl;
@property(retain, nonatomic) NSString *orderPwd; // @synthesize orderPwd=_orderPwd;
@property(retain, nonatomic) WPShowOrderDicountModel *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSArray *tickets; // @synthesize tickets=_tickets;
@property(retain, nonatomic) NSString *payTime; // @synthesize payTime=_payTime;
@property(retain, nonatomic) NSString *payMetod; // @synthesize payMetod=_payMetod;
@property(retain, nonatomic) WPPointCardModel *pointCard; // @synthesize pointCard=_pointCard;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(retain, nonatomic) NSString *showStatusName; // @synthesize showStatusName=_showStatusName;
@property(nonatomic) unsigned long long showStatus; // @synthesize showStatus=_showStatus;
@property(nonatomic) long long orderStatus; // @synthesize orderStatus=_orderStatus;
@property(nonatomic) long long ticketsNum; // @synthesize ticketsNum=_ticketsNum;
@property(nonatomic) long long shouldAmount; // @synthesize shouldAmount=_shouldAmount;
@property(nonatomic) long long realAmount; // @synthesize realAmount=_realAmount;
@property(nonatomic) long long totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
@property(retain, nonatomic) WPShowTicketModel *ticket;

@end

