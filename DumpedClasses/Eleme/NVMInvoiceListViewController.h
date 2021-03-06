//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, NVMEmptyHintView, NVMInvoice, UITableView, UIView;

@interface NVMInvoiceListViewController : NVMViewController <UITableViewDataSource, UITableViewDelegate>
{
    NVMInvoice *_selectedInvoice;
    CDUnknownBlockType _didSelectedInvoiceAction;
    CDUnknownBlockType _didUpdatedInvoiceAction;
    UITableView *_tableView;
    NSIndexPath *_selectedIndexPath;
    UIView *_bottomView;
    NSMutableArray *_invoices;
    NVMEmptyHintView *_emptyHintView;
}

@property(retain, nonatomic) NVMEmptyHintView *emptyHintView; // @synthesize emptyHintView=_emptyHintView;
@property(retain, nonatomic) NSMutableArray *invoices; // @synthesize invoices=_invoices;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType didUpdatedInvoiceAction; // @synthesize didUpdatedInvoiceAction=_didUpdatedInvoiceAction;
@property(copy, nonatomic) CDUnknownBlockType didSelectedInvoiceAction; // @synthesize didSelectedInvoiceAction=_didSelectedInvoiceAction;
@property(retain, nonatomic) NVMInvoice *selectedInvoice; // @synthesize selectedInvoice=_selectedInvoice;
- (void).cxx_destruct;
- (unsigned long long)indexOfInvoices:(id)arg1;
- (_Bool)hasInvoices;
- (void)selectInvoiceAtIndex:(unsigned long long)arg1;
- (void)setNoNeedInvoice;
- (void)deleteInvoice:(id)arg1;
- (void)updateInvoice:(id)arg1;
- (void)addInvoice:(id)arg1;
- (void)gotoAddInvoice;
- (void)gotoEditInvoice:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadEmptyView;
- (void)adjustViews;
- (void)loadData;
- (void)loadBottomView;
- (void)loadTableView;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

