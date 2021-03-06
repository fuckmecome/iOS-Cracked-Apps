//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBDAddRouteRequest, DBDRouteDeleteRequest, DBDRouteListModel, DBDRouteUpdateRequest, DBDRoutesListRequest, NSArray;

@interface DBDRouteDataManager : NSObject
{
    DBDRouteListModel *_routeListModel;
    NSArray *_routeList;
    DBDAddRouteRequest *_addRouteReqest;
    DBDRoutesListRequest *_routeListRequest;
    DBDRouteUpdateRequest *_routeUpdateRequest;
    DBDRouteDeleteRequest *_routeDeleteReqeust;
}

+ (void)destoryRouteDataManager;
+ (id)currentRouteDataManager;
@property(retain, nonatomic) DBDRouteDeleteRequest *routeDeleteReqeust; // @synthesize routeDeleteReqeust=_routeDeleteReqeust;
@property(retain, nonatomic) DBDRouteUpdateRequest *routeUpdateRequest; // @synthesize routeUpdateRequest=_routeUpdateRequest;
@property(retain, nonatomic) DBDRoutesListRequest *routeListRequest; // @synthesize routeListRequest=_routeListRequest;
@property(retain, nonatomic) DBDAddRouteRequest *addRouteReqest; // @synthesize addRouteReqest=_addRouteReqest;
@property(copy, nonatomic) NSArray *routeList; // @synthesize routeList=_routeList;
@property(retain, nonatomic) DBDRouteListModel *routeListModel; // @synthesize routeListModel=_routeListModel;
- (void).cxx_destruct;
- (void)updateUserRouteCount;
- (void)getRouteListWithRetryCount:(long long)arg1 withModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestRouteAddRouteData:(id)arg1 orderId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestDeleteRouteList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestModifyRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestRouteListData:(CDUnknownBlockType)arg1;
- (void)receiveTokenInvalid:(id)arg1;
- (id)init;
- (void)dealloc;

@end

