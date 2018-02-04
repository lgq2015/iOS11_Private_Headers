/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineCacheOperation : NSObject <NSCoding> {
    long long  _rowid;
}

@property (nonatomic) long long rowid;

- (void)encodeWithCoder:(id)arg1;
- (bool)hasRowid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)rowid;
- (void)setRowid:(long long)arg1;

@end
