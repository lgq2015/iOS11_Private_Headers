/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5PerfConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _additionalClientParameters;
    NSString * _additionalServerParameters;
    long long  _bandwidth;
    W5Peer * _client;
    long long  _duration;
    long long  _numberOfClientStreams;
    bool  _overAWDL;
    W5Peer * _server;
    bool  _upload;
    bool  _usingUDP;
}

@property (nonatomic, copy) NSString *additionalClientParameters;
@property (nonatomic, copy) NSString *additionalServerParameters;
@property (nonatomic) long long bandwidth;
@property (nonatomic, copy) W5Peer *client;
@property (nonatomic) long long duration;
@property (nonatomic) long long numberOfClientStreams;
@property (nonatomic) bool overAWDL;
@property (nonatomic, copy) W5Peer *server;
@property (nonatomic) bool upload;
@property (nonatomic) bool usingUDP;

+ (bool)supportsSecureCoding;

- (id)additionalClientParameters;
- (id)additionalServerParameters;
- (long long)bandwidth;
- (id)client;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)numberOfClientStreams;
- (bool)overAWDL;
- (id)server;
- (void)setAdditionalClientParameters:(id)arg1;
- (void)setAdditionalServerParameters:(id)arg1;
- (void)setBandwidth:(long long)arg1;
- (void)setClient:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setNumberOfClientStreams:(long long)arg1;
- (void)setOverAWDL:(bool)arg1;
- (void)setServer:(id)arg1;
- (void)setUpload:(bool)arg1;
- (void)setUsingUDP:(bool)arg1;
- (bool)upload;
- (bool)usingUDP;

@end
