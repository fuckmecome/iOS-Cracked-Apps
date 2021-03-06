//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TaxiGoingPageEtaModel, TaxiTextField, UIButton, UIImageView, UILabel;

@interface TaxiHelpToCallShareView : UIView
{
    TaxiGoingPageEtaModel *_etaModel;
    UIButton *_contentView;
    UIImageView *_driverIconView;
    UILabel *_driverNameLabel;
    UILabel *_driverNumberLabel;
    UIButton *_timeButton;
    TaxiTextField *_textField;
    UIButton *_shareButton;
    NSString *_oid;
    CDUnknownBlockType _shareBlock;
}

@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(readonly, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(readonly, nonatomic) TaxiTextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) UIButton *timeButton; // @synthesize timeButton=_timeButton;
@property(readonly, nonatomic) UILabel *driverNumberLabel; // @synthesize driverNumberLabel=_driverNumberLabel;
@property(readonly, nonatomic) UILabel *driverNameLabel; // @synthesize driverNameLabel=_driverNameLabel;
@property(readonly, nonatomic) UIImageView *driverIconView; // @synthesize driverIconView=_driverIconView;
@property(readonly, nonatomic) UIButton *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TaxiGoingPageEtaModel *etaModel; // @synthesize etaModel=_etaModel;
- (void).cxx_destruct;
- (_Bool)isWaitingTaxi;
- (id)shareTitle;
- (void)showHelpToCallShareView:(id)arg1 shareIconUrl:(id)arg2;
- (void)getShareUrlRequest;
- (void)showShareView:(id)arg1;
- (void)resign;
- (void)dismissView;
- (void)setValueForSubViews;
- (void)createSubviews;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)mainWindow;
- (void)show;
- (void)dealloc;
- (id)initWithOid:(id)arg1 shareBlock:(CDUnknownBlockType)arg2;

@end

