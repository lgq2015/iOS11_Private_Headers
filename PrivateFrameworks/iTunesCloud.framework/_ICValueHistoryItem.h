/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface _ICValueHistoryItem : NSObject <NSSecureCoding> {
    unsigned long long  _timestamp;
    id  _value;
}

@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 timestamp:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)timestamp;
- (id)value;

@end
