//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (JTExt)
+ (id)strUrlEncode:(id)arg1;
- (id)DecryptUseAESECBthKey:(id)arg1 iv:(id)arg2 padding:(unsigned long long)arg3;
- (id)EncryptUseAESECBWithKey:(id)arg1 iv:(id)arg2 padding:(unsigned long long)arg3;
- (id)DecryptUseAESWithKey:(id)arg1 iv:(id)arg2 padding:(unsigned long long)arg3;
- (id)EncryptUseAESWithKey:(id)arg1 iv:(id)arg2 padding:(unsigned long long)arg3;
- (id)DecryptUseRc4WithKey:(id)arg1 iv:(id)arg2 padding:(unsigned long long)arg3;
- (id)EncryptUseRc4WithKey:(id)arg1 iv:(id)arg2 padding:(unsigned long long)arg3;
- (id)md5;
@end

