/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCButtonEvent : NSObject <NSSecureCoding> {
    TVRCButton * _button;
    long long  _eventType;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) TVRCButton *button;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly, copy) NSDate *timestamp;

+ (id)buttonEventForButton:(id)arg1 eventType:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)button;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)timestamp;

@end