//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FMMediaPickerCtrlViewDelegate <NSObject>
- (void)onPreviewState:(_Bool)arg1;
- (void)onTakePhotoAction;
- (void)onFinishRecordAction;
- (void)onDelectRecordAction;
- (void)onCancelRecordAction;
- (void)onSwitchCameraAction;
- (void)onBeautyAction:(_Bool)arg1;
- (void)onPauseRecordAction:(void (^)(void))arg1;
- (void)onStartRecordAction;
@end

