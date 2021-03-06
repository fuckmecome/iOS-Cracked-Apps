//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IOMCommonActionTarget, IOMGoodsDetailBrandArea, IOMGoodsDetailCommentObject, IOMGoodsDetailVideoObject, NSMutableArray, NSString;

@interface IOMGoodsDetailObject : NSObject
{
    NSString *_goodsID;
    NSString *_title;
    NSString *_desc;
    NSString *_isVideo;
    NSString *_isFavor;
    NSString *_limitNum;
    NSString *_mainImage;
    NSString *_price;
    NSString *_orginPrice;
    NSString *_postFee;
    NSString *_postLocation;
    NSString *_quantity;
    NSString *_refundCommitment;
    NSString *_saleQuantity;
    NSString *_commentNum;
    NSString *_buyUrl;
    NSString *_commentUrl;
    NSString *_formatId;
    NSString *_postFeeType;
    NSString *_shareUrl;
    NSString *_shareImageUrl;
    NSString *_shareDesc;
    NSString *_shareTitle;
    NSString *_shoppingCartUrl;
    NSString *_isVirtualProduct;
    NSString *_mask;
    NSString *_onLine;
    NSString *_shopId;
    NSString *_displayKefu;
    NSString *_isGlobal;
    NSString *_globalLogo;
    NSString *_bannerImage;
    NSString *_bannerToUrl;
    NSString *_useCouponInfo;
    NSString *_seckillEndTime;
    NSString *_fullCutInfo;
    NSString *_hasLogin;
    NSString *_isToLevel;
    NSString *_vipLevel;
    NSString *_hasVipPrice;
    NSString *_isJDProduct;
    NSString *_postFeeDesc;
    NSString *_vipPrice;
    NSString *_jdNoPostfeeDesc;
    NSString *_source;
    IOMCommonActionTarget *_jdNoPostfeeDescTarget;
    IOMCommonActionTarget *_fullCutTarget;
    IOMCommonActionTarget *_JDPostTarget;
    NSMutableArray *_pictures;
    NSMutableArray *_promotionTags;
    IOMGoodsDetailCommentObject *_comments;
    NSMutableArray *_skuProps;
    NSMutableArray *_skus;
    IOMGoodsDetailVideoObject *_video;
    NSMutableArray *_videoTags;
    NSMutableArray *_recommendProducts;
    NSString *_recommendProductIds;
    NSMutableArray *_promisesArea;
    IOMGoodsDetailBrandArea *_brandArea;
}

@property(retain, nonatomic) IOMGoodsDetailBrandArea *brandArea; // @synthesize brandArea=_brandArea;
@property(retain, nonatomic) NSMutableArray *promisesArea; // @synthesize promisesArea=_promisesArea;
@property(retain, nonatomic) NSString *recommendProductIds; // @synthesize recommendProductIds=_recommendProductIds;
@property(retain, nonatomic) NSMutableArray *recommendProducts; // @synthesize recommendProducts=_recommendProducts;
@property(retain, nonatomic) NSMutableArray *videoTags; // @synthesize videoTags=_videoTags;
@property(retain, nonatomic) IOMGoodsDetailVideoObject *video; // @synthesize video=_video;
@property(retain, nonatomic) NSMutableArray *skus; // @synthesize skus=_skus;
@property(retain, nonatomic) NSMutableArray *skuProps; // @synthesize skuProps=_skuProps;
@property(retain, nonatomic) IOMGoodsDetailCommentObject *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSMutableArray *promotionTags; // @synthesize promotionTags=_promotionTags;
@property(retain, nonatomic) NSMutableArray *pictures; // @synthesize pictures=_pictures;
@property(retain, nonatomic) IOMCommonActionTarget *JDPostTarget; // @synthesize JDPostTarget=_JDPostTarget;
@property(retain, nonatomic) IOMCommonActionTarget *fullCutTarget; // @synthesize fullCutTarget=_fullCutTarget;
@property(retain, nonatomic) IOMCommonActionTarget *jdNoPostfeeDescTarget; // @synthesize jdNoPostfeeDescTarget=_jdNoPostfeeDescTarget;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *jdNoPostfeeDesc; // @synthesize jdNoPostfeeDesc=_jdNoPostfeeDesc;
@property(copy, nonatomic) NSString *vipPrice; // @synthesize vipPrice=_vipPrice;
@property(copy, nonatomic) NSString *postFeeDesc; // @synthesize postFeeDesc=_postFeeDesc;
@property(copy, nonatomic) NSString *isJDProduct; // @synthesize isJDProduct=_isJDProduct;
@property(copy, nonatomic) NSString *hasVipPrice; // @synthesize hasVipPrice=_hasVipPrice;
@property(copy, nonatomic) NSString *vipLevel; // @synthesize vipLevel=_vipLevel;
@property(copy, nonatomic) NSString *isToLevel; // @synthesize isToLevel=_isToLevel;
@property(copy, nonatomic) NSString *hasLogin; // @synthesize hasLogin=_hasLogin;
@property(copy, nonatomic) NSString *fullCutInfo; // @synthesize fullCutInfo=_fullCutInfo;
@property(copy, nonatomic) NSString *seckillEndTime; // @synthesize seckillEndTime=_seckillEndTime;
@property(copy, nonatomic) NSString *useCouponInfo; // @synthesize useCouponInfo=_useCouponInfo;
@property(copy, nonatomic) NSString *bannerToUrl; // @synthesize bannerToUrl=_bannerToUrl;
@property(copy, nonatomic) NSString *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(copy, nonatomic) NSString *globalLogo; // @synthesize globalLogo=_globalLogo;
@property(copy, nonatomic) NSString *isGlobal; // @synthesize isGlobal=_isGlobal;
@property(copy, nonatomic) NSString *displayKefu; // @synthesize displayKefu=_displayKefu;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *onLine; // @synthesize onLine=_onLine;
@property(copy, nonatomic) NSString *mask; // @synthesize mask=_mask;
@property(copy, nonatomic) NSString *isVirtualProduct; // @synthesize isVirtualProduct=_isVirtualProduct;
@property(copy, nonatomic) NSString *shoppingCartUrl; // @synthesize shoppingCartUrl=_shoppingCartUrl;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(copy, nonatomic) NSString *shareImageUrl; // @synthesize shareImageUrl=_shareImageUrl;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *postFeeType; // @synthesize postFeeType=_postFeeType;
@property(copy, nonatomic) NSString *formatId; // @synthesize formatId=_formatId;
@property(copy, nonatomic) NSString *commentUrl; // @synthesize commentUrl=_commentUrl;
@property(copy, nonatomic) NSString *buyUrl; // @synthesize buyUrl=_buyUrl;
@property(copy, nonatomic) NSString *commentNum; // @synthesize commentNum=_commentNum;
@property(copy, nonatomic) NSString *saleQuantity; // @synthesize saleQuantity=_saleQuantity;
@property(copy, nonatomic) NSString *refundCommitment; // @synthesize refundCommitment=_refundCommitment;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *postLocation; // @synthesize postLocation=_postLocation;
@property(copy, nonatomic) NSString *postFee; // @synthesize postFee=_postFee;
@property(copy, nonatomic) NSString *orginPrice; // @synthesize orginPrice=_orginPrice;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *mainImage; // @synthesize mainImage=_mainImage;
@property(copy, nonatomic) NSString *limitNum; // @synthesize limitNum=_limitNum;
@property(copy, nonatomic) NSString *isFavor; // @synthesize isFavor=_isFavor;
@property(copy, nonatomic) NSString *isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *goodsID; // @synthesize goodsID=_goodsID;
- (void).cxx_destruct;
- (void)parseDataDic:(id)arg1;

@end

