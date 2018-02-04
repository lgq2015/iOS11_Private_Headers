/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelRequest : MPModelRequest {
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    bool  _didSetTimeoutInterval;
    double  _timeoutInterval;
}

@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *clientVersion;
@property (nonatomic) double timeoutInterval;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end
