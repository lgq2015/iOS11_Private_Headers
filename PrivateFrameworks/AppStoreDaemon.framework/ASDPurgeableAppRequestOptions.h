/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurgeableAppRequestOptions : ASDRequestOptions {
    bool  _performAvailablityCheck;
    long long  _urgency;
    NSString * _volume;
}

@property (nonatomic) bool performAvailablityCheck;
@property (nonatomic) long long urgency;
@property (nonatomic, copy) NSString *volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolume:(id)arg1 urgency:(long long)arg2;
- (bool)performAvailablityCheck;
- (void)setPerformAvailablityCheck:(bool)arg1;
- (void)setUrgency:(long long)arg1;
- (void)setVolume:(id)arg1;
- (long long)urgency;
- (id)volume;

@end
