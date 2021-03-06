//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYABCellModel.h"

#import "QIYIPaopaoActionSheetDelegate-Protocol.h"

@class NSString;

@interface QYPersonBaseModel : QYABCellModel <QIYIPaopaoActionSheetDelegate>
{
    _Bool _isChanged;
    _Bool _isJoin;
    NSString *_name;
    NSString *_phoneNumber;
    NSString *_lastName;
    NSString *_firstName;
    NSString *_avatarUrl;
    NSString *_searchKey;
    NSString *_nickName;
    NSString *_uid;
    NSString *_sectionIndex;
}

@property(readonly, nonatomic) NSString *sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool isJoin; // @synthesize isJoin=_isJoin;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) _Bool isChanged; // @synthesize isChanged=_isChanged;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)selectCell;
- (void)requestLogin;
- (_Bool)willShowUserLoginWithToast:(id)arg1;
- (void)privateChatPerson;
- (void)chatPerson;
- (id)convertToSearchModelWithHighlightRange:(struct _NSRange)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

