//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface APShareExtInfo : NSObject
{
    _Bool _NoInput;
    _Bool _hasCheckBox;
    _Bool _checkBoxDefaultValue;
    _Bool _gifModel;
    NSString *_bizMemo;
    NSString *_link;
    NSString *_channel;
    NSString *_strangerSource;
    NSString *_name;
    NSString *_logo;
    NSString *_appId;
    NSString *_extendRPCData;
    NSString *_checkBoxText;
    NSString *_selectMaxNum;
    NSString *_contentId;
    NSString *_contentType;
    NSString *_contentSource;
    NSString *_bizLogMonitor;
    NSString *_dtLogMonitor;
    long long _imageWidth;
    long long _imageHeight;
    NSArray *_sendToContacts;
    NSDictionary *_shareExtDic;
    NSString *_bizActionFir;
    NSString *_bizActionSec;
    NSString *_bizActionUrl;
}

@property(retain, nonatomic) NSString *bizActionUrl; // @synthesize bizActionUrl=_bizActionUrl;
@property(retain, nonatomic) NSString *bizActionSec; // @synthesize bizActionSec=_bizActionSec;
@property(retain, nonatomic) NSString *bizActionFir; // @synthesize bizActionFir=_bizActionFir;
@property(retain, nonatomic) NSDictionary *shareExtDic; // @synthesize shareExtDic=_shareExtDic;
@property(nonatomic) _Bool gifModel; // @synthesize gifModel=_gifModel;
@property(retain, nonatomic) NSArray *sendToContacts; // @synthesize sendToContacts=_sendToContacts;
@property(nonatomic) long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) long long imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *bizLogMonitor; // @synthesize bizLogMonitor=_bizLogMonitor;
@property(retain, nonatomic) NSString *contentSource; // @synthesize contentSource=_contentSource;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *selectMaxNum; // @synthesize selectMaxNum=_selectMaxNum;
@property(nonatomic) _Bool checkBoxDefaultValue; // @synthesize checkBoxDefaultValue=_checkBoxDefaultValue;
@property(retain, nonatomic) NSString *checkBoxText; // @synthesize checkBoxText=_checkBoxText;
@property(nonatomic) _Bool hasCheckBox; // @synthesize hasCheckBox=_hasCheckBox;
@property(nonatomic) _Bool NoInput; // @synthesize NoInput=_NoInput;
@property(retain, nonatomic) NSString *extendRPCData; // @synthesize extendRPCData=_extendRPCData;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *strangerSource; // @synthesize strangerSource=_strangerSource;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *bizMemo; // @synthesize bizMemo=_bizMemo;
- (void).cxx_destruct;

@end

