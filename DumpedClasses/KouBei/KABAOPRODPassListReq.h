//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KABAOPRODPassListReq : NSObject
{
    _Bool _needPaging;
    _Bool _isFromMsg;
    int _rowSize;
    int _pageSize;
    NSString *_passCategory;
    NSString *_timeStatus;
    NSString *_updateFlag;
}

@property(nonatomic) _Bool isFromMsg; // @synthesize isFromMsg=_isFromMsg;
@property(retain, nonatomic) NSString *updateFlag; // @synthesize updateFlag=_updateFlag;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) _Bool needPaging; // @synthesize needPaging=_needPaging;
@property(retain, nonatomic) NSString *timeStatus; // @synthesize timeStatus=_timeStatus;
@property(retain, nonatomic) NSString *passCategory; // @synthesize passCategory=_passCategory;
- (void).cxx_destruct;

@end

