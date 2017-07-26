//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "BEEPhotoPickerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString, UITableView;

@interface PKImagePickerController : DTViewController <BEEPhotoPickerDelegate, UITableViewDataSource, UITableViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UITableView *_tableview;
    NSArray *_dataArray;
    NSDictionary *_paramsPassedIn;
}

@property(retain, nonatomic) NSDictionary *paramsPassedIn; // @synthesize paramsPassedIn=_paramsPassedIn;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)saveAndPostNotificationWithUpdateBackgroundImage:(id)arg1 withImageUrlString:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)saveAndPostNotificationWithUpdateBGImage:(id)arg1 withImageUrlString:(id)arg2;
- (void)photoPickerControllerDidCancel:(id)arg1;
- (void)photoPickerControllerDidFinish:(id)arg1;
- (void)photoPickerController:(id)arg1 didFinishPickingAssets:(id)arg2 theOriginal:(_Bool)arg3;
- (void)selectThePhotoLibImage;
- (void)selectTheCameraImage;
- (void)builtInBackgroundSelection;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupUI;
- (void)openURL:(id)arg1;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
