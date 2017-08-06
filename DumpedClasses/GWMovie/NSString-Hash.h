//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (Hash)
- (id)stringFromBytes:(char *)arg1 length:(int)arg2;
- (id)hmacSHA512StringWithKey:(id)arg1;
- (id)hmacSHA256StringWithKey:(id)arg1;
- (id)hmacSHA1StringWithKey:(id)arg1;
@property(readonly) NSString *sha512String;
@property(readonly) NSString *sha256String;
@property(readonly) NSString *sha1String;
@property(readonly) NSString *MD5Hash;
@end
