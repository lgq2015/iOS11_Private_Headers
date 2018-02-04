/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDigest : NSObject

+ (id)sha1;
+ (id)sha1ForData:(id)arg1;
+ (id)sha1ForFileAtPath:(id)arg1 error:(id*)arg2;
+ (id)sha1ForString:(id)arg1;
+ (id)sha1HmacForString:(id)arg1 key:(id)arg2;
+ (id)sha256;
+ (long long)simpleChecksumForString:(id)arg1;

- (id)digestForData:(id)arg1;
- (id)digestForFileAtPath:(id)arg1 error:(id*)arg2;
- (id)digestForString:(id)arg1;
- (id)final;
- (void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)updateWithData:(id)arg1;
- (void)updateWithDate:(id)arg1;
- (bool)updateWithFile:(id)arg1 error:(id*)arg2;
- (void)updateWithInt32:(int)arg1;
- (void)updateWithInt64:(long long)arg1;
- (void)updateWithString:(id)arg1;

@end
