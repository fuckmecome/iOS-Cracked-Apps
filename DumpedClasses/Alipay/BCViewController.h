//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

@class NSDictionary, NSString;

@interface BCViewController : DTViewController
{
    _Bool _appeared;
    NSString *viewType;
    NSDictionary *data;
    NSString *retAppId;
}

@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
@property(retain, nonatomic) NSString *retAppId; // @synthesize retAppId;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data;
@property(retain, nonatomic) NSString *viewType; // @synthesize viewType;
- (void).cxx_destruct;
- (void)releaseNotify;
- (void)setupNotify;
- (void)releaseUI;
- (void)setupUI;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithBizData:(id)arg1;
- (void)back;
- (void)dealloc;

@end
