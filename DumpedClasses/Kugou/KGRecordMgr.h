//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface KGRecordMgr : NSObject
{
    NSLock *_lockerCache;
}

+ (void)fastRunBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)addHashForfile:(id)arg1 hash:(id)arg2 qualityType:(int)arg3;
- (void)insertLocalFiles:(id)arg1 holder:(id)arg2;
- (void)insertDownloadedFiles:(id)arg1 holder:(id)arg2;
- (void)synchronizeFiles:(id)arg1 holder:(id)arg2 source:(id)arg3;
- (void)deleteFilesWithFileIds:(long long *)arg1 count:(long long)arg2;
- (void)deleteFileWithFileId:(long long)arg1;
- (_Bool)deleteHolderWithFileId:(long long)arg1 holder:(id)arg2;
- (_Bool)addHolderToFileId:(long long)arg1 holder:(id)arg2;
- (_Bool)updateFile4Items:(long long)arg1 bitrate:(long long)arg2 duration:(long long)arg3 fileSize:(long long)arg4 extName:(id)arg5;
- (int)increasePlaycountWithId:(long long)arg1 count:(int)arg2;
- (void)updateDownloading:(long long)arg1 tempPath:(id)arg2;
- (void)updateDownloading:(long long)arg1 downInfo:(id)arg2;
- (void)updateFileSizeWithId:(long long)arg1 fileSize:(long long)arg2;
- (void)updateFilePathWithId:(long long)arg1 path:(id)arg2;
- (long long)createDownloadFile:(id)arg1 holder:(id)arg2;
- (id)findLocalFiles:(id)arg1 holder:(id)arg2;
- (id)findFileInfoWithKey:(id)arg1;
- (id)findFileInfoWithMusicHash:(id)arg1 qualityType:(int)arg2;
- (id)findLocalFileWithMusicHash:(id)arg1 qualityType:(int)arg2;
- (id)findLocalFileWithPath:(id)arg1;
- (id)findLocalFilesDictionaryWithSongInfoArray:(id)arg1;
- (id)findLocalFilesWithHashArr:(id)arg1 qualityArr:(id)arg2 orKeyArr:(id)arg3;
- (id)findLocalFileWithKey:(id)arg1;
- (id)queryHoldersForId:(long long)arg1;
- (id)lookupSourceTypeWithHash:(id)arg1 qualityType:(int)arg2;
- (id)lookupSourceTypeWithKey:(id)arg1;
- (id)queryDownloadInfoWithId:(long long)arg1;
- (id)queryDownloadInfoWithHash:(id)arg1 qualityType:(int)arg2;
- (id)queryDownloadInfoWithKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

