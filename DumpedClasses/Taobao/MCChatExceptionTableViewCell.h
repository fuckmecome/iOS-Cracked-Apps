//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MCCellProtocol.h"

@class NSString;

@interface MCChatExceptionTableViewCell : UITableViewCell <MCCellProtocol>
{
}

+ (id)getReuseIdentifier;
- (id)cellObject;
- (void)updateCellObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 model:(id)arg2 cellHandler:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

