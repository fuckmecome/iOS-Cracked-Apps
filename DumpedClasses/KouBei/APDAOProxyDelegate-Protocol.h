//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APDAOResult, APDatabaseConnection, NSDictionary, NSString;
@protocol APDAOHistoryManager, APDAOVersionManager;

@protocol APDAOProxyDelegate <NSObject>
- (void)waitUntilDatabaseOpenEventDone;
- (void)handleFatalError:(int)arg1 errorString:(NSString *)arg2;
- (void)reportInsertion:(NSDictionary *)arg1 rowId:(long long)arg2 tableName:(NSString *)arg3;
- (APDAOResult *)daoTransaction:(unsigned int)arg1;
- (id <APDAOHistoryManager>)historyManager;
- (id <APDAOVersionManager>)versionManager;
- (void)prepareParallelConnection:(double)arg1;
- (void)releaseParallelDatabaseConnection:(APDatabaseConnection *)arg1;
- (APDatabaseConnection *)parallelDatabaseConnection;
- (APDatabaseConnection *)databaseConnection;
- (void)setTempStoreToFile;
- (_Bool)shouldRetryOnSQLiteFull;
- (void)vacuumDatabase;
- (void)removeDatabaseFile;
- (_Bool)databaseLocked;
- (void)databaseConnectionUnlock;
- (void)databaseConnectionLock:(NSString *)arg1;
- (_Bool)goodConnection;

@optional
- (void)unregisterProxy;
- (void)registerProxy;
@end

