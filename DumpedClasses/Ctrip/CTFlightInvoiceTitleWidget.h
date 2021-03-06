//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class CTCustomeGroupTableViewCell, CTInvoiceTitleManagerCacheBean, CTTableView, CustomerUserInvoiceModel, NSMutableArray;

@interface CTFlightInvoiceTitleWidget : CTRootViewController
{
    _Bool _isSuccess;
    CustomerUserInvoiceModel *_selectedInvoiceTitleModel;
    id <CTFlightInvoiceTitleWidgetDelegate> _delegate;
    CTTableView *_mainTableView;
    CTCustomeGroupTableViewCell *_addCell;
    NSMutableArray *_invoiceTitleArray;
    CTInvoiceTitleManagerCacheBean *_cacheBean;
}

@property(retain, nonatomic) CTInvoiceTitleManagerCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(retain, nonatomic) NSMutableArray *invoiceTitleArray; // @synthesize invoiceTitleArray=_invoiceTitleArray;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *addCell; // @synthesize addCell=_addCell;
@property(retain, nonatomic) CTTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) __weak id <CTFlightInvoiceTitleWidgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CustomerUserInvoiceModel *selectedInvoiceTitleModel; // @synthesize selectedInvoiceTitleModel=_selectedInvoiceTitleModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)handleEditButton:(id)arg1;
- (void)updateTableView;
- (void)deleteInvoiceTitleSuccess:(id)arg1;
- (void)addAndEditInvoiceTitleSuccess:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)sendService;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pressBackBtn;
- (void)dealloc;

@end

