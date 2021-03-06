//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary, NSString, ONERouterConflictOption;

@interface ONESchemaRouterNode : JSONModel
{
    NSString *_businessName;
    NSString *_moduleName;
    NSString *_className;
    NSDictionary *_paraDict;
    NSDictionary *_constantParaDict;
    ONERouterConflictOption *_conflictOption;
}

@property(retain, nonatomic) ONERouterConflictOption *conflictOption; // @synthesize conflictOption=_conflictOption;
@property(copy, nonatomic) NSDictionary *constantParaDict; // @synthesize constantParaDict=_constantParaDict;
@property(copy, nonatomic) NSDictionary *paraDict; // @synthesize paraDict=_paraDict;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameKindNode:(id)arg1;

@end

