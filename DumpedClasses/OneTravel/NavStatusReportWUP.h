//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QMConnectionItemDelegate.h"

@class NSDictionary, NSString;

@interface NavStatusReportWUP : NSObject <QMConnectionItemDelegate>
{
    int _status;
    int _autoEnd;
    int _navScence;
    id <NavStatusReportWUPDelegate> _delegate;
    NSDictionary *_dictionaryRsp;
    NSString *_orderID;
    NSString *_routeID;
}

@property int navScence; // @synthesize navScence=_navScence;
@property int autoEnd; // @synthesize autoEnd=_autoEnd;
@property(retain) NSString *routeID; // @synthesize routeID=_routeID;
@property(retain) NSString *orderID; // @synthesize orderID=_orderID;
@property int status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *dictionaryRsp; // @synthesize dictionaryRsp=_dictionaryRsp;
@property(nonatomic) __weak id <NavStatusReportWUPDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectionItem:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionItemDidFinish:(id)arg1;
- (void)getNavStatusReport:(int)arg1 RouteID:(id)arg2 OrderID:(id)arg3 AutoEnd:(int)arg4 NavScene:(int)arg5;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

