//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSMutableArray, UILabel;

@interface CTHotelInvoiceTypeInfoCell : CTCustomeGroupTableViewCell
{
    UILabel *lbTitle;
    UILabel *despLab;
    CDUnknownBlockType typeInfoBlock;
    NSMutableArray *btnTitle;
}

+ (double)despHeight:(id)arg1;
+ (double)getCellHeight:(id)arg1;
- (void).cxx_destruct;
- (void)typeBtnAction:(id)arg1;
- (void)fillData:(id)arg1 selectIndex:(long long)arg2 typeDesp:(id)arg3 typeChange:(CDUnknownBlockType)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
