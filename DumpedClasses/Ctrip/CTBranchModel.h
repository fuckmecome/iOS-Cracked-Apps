//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface CTBranchModel : CTBusinessBean
{
    int _branchId;
    int _manageGroupId;
    NSString *_brandName;
    NSString *_brandNameCN;
    NSString *_brandNamePY;
    NSString *_hotFlag;
    long long _flag;
}

@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *hotFlag; // @synthesize hotFlag=_hotFlag;
@property(copy, nonatomic) NSString *brandNamePY; // @synthesize brandNamePY=_brandNamePY;
@property(copy, nonatomic) NSString *brandNameCN; // @synthesize brandNameCN=_brandNameCN;
@property(nonatomic) int manageGroupId; // @synthesize manageGroupId=_manageGroupId;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(nonatomic) int branchId; // @synthesize branchId=_branchId;
- (void).cxx_destruct;
- (id)init;

@end
