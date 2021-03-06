//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FALiveMVComposeController, FAViewController, NSMutableArray;

@interface FALiveMVComposeManager : NSObject
{
    _Bool _pushing;
    FAViewController *_mainViewController;
    NSMutableArray *_composeList;
    FALiveMVComposeController *_currentController;
}

+ (void)startComposeWidthDict:(id)arg1;
+ (void)insertComposeModel:(id)arg1;
+ (id)shareManager;
@property(nonatomic) _Bool pushing; // @synthesize pushing=_pushing;
@property(retain, nonatomic) FALiveMVComposeController *currentController; // @synthesize currentController=_currentController;
@property(retain, nonatomic) NSMutableArray *composeList; // @synthesize composeList=_composeList;
@property(nonatomic) __weak FAViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (void).cxx_destruct;
- (void)clean;
- (void)endCompose;
- (void)startCompose;
- (id)init;

@end

