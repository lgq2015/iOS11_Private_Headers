/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding> {
    long long  _channel;
    int  _flags;
}

@property (nonatomic, readonly) long long channel;
@property (nonatomic, readonly) int flags;

+ (bool)supportsSecureCoding;

- (long long)channel;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)flags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithChannel:(long long)arg1 flags:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannel:(id)arg1;

@end