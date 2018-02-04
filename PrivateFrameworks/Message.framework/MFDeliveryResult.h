/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDeliveryResult : NSObject {
    long long  _attributes;
    unsigned long long  _bytesSent;
    double  _duration;
    bool  _isWifi;
    long long  _status;
}

@property (nonatomic) long long attributes;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) double duration;
@property (nonatomic) bool isWifi;
@property (nonatomic) long long status;

- (long long)attributes;
- (unsigned long long)bytesSent;
- (id)description;
- (double)duration;
- (id)initWithStatus:(long long)arg1;
- (bool)isWifi;
- (void)setAttributes:(long long)arg1;
- (void)setBytesSent:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setIsWifi:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
