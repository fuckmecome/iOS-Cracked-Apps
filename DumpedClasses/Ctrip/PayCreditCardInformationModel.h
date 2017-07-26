//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class AddCardInformationModel, BillAddressInformationModel, CheckCardInformationModel, DCCInfoEntityModel, NSString, PriceType;

@interface PayCreditCardInformationModel : CTBusinessBean
{
    NSString *paymentWayID;
    NSString *brandId;
    NSString *brandType;
    NSString *bindId;
    NSString *channelId;
    int operateType;
    NSString *billAddress;
    NSString *bankCountry;
    int cardStatusBitMap;
    DCCInfoEntityModel *dCCInfoModel;
    NSString *exchange;
    PriceType *cardAmount;
    BillAddressInformationModel *billingAddressModel;
    AddCardInformationModel *addCardInfoModel;
    CheckCardInformationModel *checkCardInfoModel;
    CheckCardInformationModel *updateCardInfoModel;
}

@property(retain, nonatomic) CheckCardInformationModel *updateCardInfoModel; // @synthesize updateCardInfoModel;
@property(retain, nonatomic) CheckCardInformationModel *checkCardInfoModel; // @synthesize checkCardInfoModel;
@property(retain, nonatomic) AddCardInformationModel *addCardInfoModel; // @synthesize addCardInfoModel;
@property(retain, nonatomic) BillAddressInformationModel *billingAddressModel; // @synthesize billingAddressModel;
@property(retain, nonatomic) PriceType *cardAmount; // @synthesize cardAmount;
@property(copy, nonatomic) NSString *exchange; // @synthesize exchange;
@property(retain, nonatomic) DCCInfoEntityModel *dCCInfoModel; // @synthesize dCCInfoModel;
@property(nonatomic) int cardStatusBitMap; // @synthesize cardStatusBitMap;
@property(copy, nonatomic) NSString *bankCountry; // @synthesize bankCountry;
@property(copy, nonatomic) NSString *billAddress; // @synthesize billAddress;
@property(nonatomic) int operateType; // @synthesize operateType;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId;
@property(copy, nonatomic) NSString *bindId; // @synthesize bindId;
@property(copy, nonatomic) NSString *brandType; // @synthesize brandType;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId;
@property(copy, nonatomic) NSString *paymentWayID; // @synthesize paymentWayID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end
