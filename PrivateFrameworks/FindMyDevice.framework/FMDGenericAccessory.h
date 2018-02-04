/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDGenericAccessory : NSObject <FMDAccessory, FMDAudioAccessory, NSSecureCoding> {
    FMDAccessoryIdentifier * _accessoryIdentifier;
    NSString * _audioRoutingIdentifier;
    NSURL * _audioURL;
}

@property (nonatomic, retain) FMDAccessoryIdentifier *accessoryIdentifier;
@property (nonatomic, retain) NSString *audioRoutingIdentifier;
@property (nonatomic, retain) NSURL *audioURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool playingSound;
@property (readonly) Class superclass;

+ (id)copyAccessory:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)audioRoutingIdentifier;
- (id)audioURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)playingSound;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAudioRoutingIdentifier:(id)arg1;
- (void)setAudioURL:(id)arg1;

@end
