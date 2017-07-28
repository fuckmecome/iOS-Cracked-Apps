//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMMsgCardDO, NSArray<FMServiceMenuDO>, NSString;

@interface FMServiceMenuDO : NSObject
{
    NSString *_menuId;
    NSString *_menuName;
    NSString *_menuDesc;
    FMMsgCardDO *_msgPayLoad;
    NSString *_menuUrl;
    NSArray<FMServiceMenuDO> *_submenuList;
    unsigned long long _showType;
}

@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSArray<FMServiceMenuDO> *submenuList; // @synthesize submenuList=_submenuList;
@property(copy, nonatomic) NSString *menuUrl; // @synthesize menuUrl=_menuUrl;
@property(retain, nonatomic) FMMsgCardDO *msgPayLoad; // @synthesize msgPayLoad=_msgPayLoad;
@property(copy, nonatomic) NSString *menuDesc; // @synthesize menuDesc=_menuDesc;
@property(copy, nonatomic) NSString *menuName; // @synthesize menuName=_menuName;
@property(copy, nonatomic) NSString *menuId; // @synthesize menuId=_menuId;
- (void).cxx_destruct;

@end
