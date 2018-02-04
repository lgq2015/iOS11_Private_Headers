/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5Event : NSObject <NSCopying, NSSecureCoding> {
    long long  _eventID;
    NSDictionary * _info;
    double  _timestamp;
}

@property (nonatomic) long long eventID;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventID;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (void)setEventID:(long long)arg1;
- (void)setInfo:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
