//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, ONEApoloSubAssign<Optional>;

@interface ONEApoloSubItem : JSONModel
{
    NSString *_name;
    NSNumber *_allow;
    ONEApoloSubAssign<Optional> *_assign;
}

@property(copy, nonatomic) ONEApoloSubAssign<Optional> *assign; // @synthesize assign=_assign;
@property(copy, nonatomic) NSNumber *allow; // @synthesize allow=_allow;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)testInventory;
- (_Bool)isAllow;

@end

