//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NVMOrderShare;

@interface NVMOrderDetailInfoCellRedEnvelopeView : UIView
{
    UIView *_redEnvelopeView;
    UIView *_separatorview;
    UIView *_whoTakeOrderView;
    NSString *_orderID;
    NVMOrderShare *_shareInfo;
}

@property(retain, nonatomic) NVMOrderShare *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) UIView *whoTakeOrderView; // @synthesize whoTakeOrderView=_whoTakeOrderView;
@property(retain, nonatomic) UIView *separatorview; // @synthesize separatorview=_separatorview;
@property(retain, nonatomic) UIView *redEnvelopeView; // @synthesize redEnvelopeView=_redEnvelopeView;
- (void).cxx_destruct;
- (void)whoTakeOrderViewDidClicked;
- (void)redEnvelopeViewDidClicked;
- (id)generateSeparator;
- (id)viewWithImageName:(id)arg1 title:(id)arg2;
- (void)setStatus:(id)arg1 andShareInfo:(id)arg2 orderID:(id)arg3;
- (_Bool)isEmptyForStatus:(id)arg1 andShareInfo:(id)arg2;
- (void)configViews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

