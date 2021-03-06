//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliTradeSkuButtonStyleModel, NSString;

@interface AliTradeSkuStyleModel : NSObject
{
    _Bool _openGradient;
    NSString *_priceColor;
    NSString *_priceColor2;
    NSString *_prePriceColor;
    AliTradeSkuButtonStyleModel *_cartStyle;
    AliTradeSkuButtonStyleModel *_buyStyle;
    AliTradeSkuButtonStyleModel *_confirmStyle;
    AliTradeSkuButtonStyleModel *_propStyle;
}

@property(retain, nonatomic) AliTradeSkuButtonStyleModel *propStyle; // @synthesize propStyle=_propStyle;
@property(retain, nonatomic) AliTradeSkuButtonStyleModel *confirmStyle; // @synthesize confirmStyle=_confirmStyle;
@property(retain, nonatomic) AliTradeSkuButtonStyleModel *buyStyle; // @synthesize buyStyle=_buyStyle;
@property(retain, nonatomic) AliTradeSkuButtonStyleModel *cartStyle; // @synthesize cartStyle=_cartStyle;
@property(nonatomic) _Bool openGradient; // @synthesize openGradient=_openGradient;
@property(retain, nonatomic) NSString *prePriceColor; // @synthesize prePriceColor=_prePriceColor;
@property(retain, nonatomic) NSString *priceColor2; // @synthesize priceColor2=_priceColor2;
@property(retain, nonatomic) NSString *priceColor; // @synthesize priceColor=_priceColor;
- (void).cxx_destruct;
- (void)setDefaultConfirmColors;
- (void)setDefaultBuyColors;
- (void)setDefaultCartColors;
- (void)setDefaultPropColors;
- (void)setStyleForModel:(id)arg1 selectedFrontColor:(id)arg2 selectedBgColor:(id)arg3 selectedLineColor:(id)arg4 unselectFrontColor:(id)arg5 unselectBgColor:(id)arg6 unselectLineColor:(id)arg7 disableFrontColor:(id)arg8 disableBgColor:(id)arg9 disableLineColor:(id)arg10;
- (void)setDefaultPirceColor;
- (void)setConfirmColors:(id)arg1 selectedBgColor:(id)arg2 unselectFrontColor:(id)arg3 unselectBgColor:(id)arg4 disableFrontColor:(id)arg5 disableBgColor:(id)arg6;
- (void)setBuyColors:(id)arg1 selectedBgColor:(id)arg2 unselectFrontColor:(id)arg3 unselectBgColor:(id)arg4 disableFrontColor:(id)arg5 disableBgColor:(id)arg6;
- (void)setCartColors:(id)arg1 selectedBgColor:(id)arg2 unselectFrontColor:(id)arg3 unselectBgColor:(id)arg4 disableFrontColor:(id)arg5 disableBgColor:(id)arg6;
- (void)setPropColors:(id)arg1 selectedBgColor:(id)arg2 selectedLineColor:(id)arg3 unselectFrontColor:(id)arg4 unselectBgColor:(id)arg5 unselectLineColor:(id)arg6 disableFrontColor:(id)arg7 disableBgColor:(id)arg8 disableLineColor:(id)arg9;
- (void)setPriceColor:(id)arg1 priceColor:(id)arg2 prePriceColor:(id)arg3;
- (id)init;

@end

