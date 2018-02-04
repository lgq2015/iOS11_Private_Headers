/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCall : NSObject <CXCopying, NSSecureCoding> {
    NSUUID * _UUID;
    bool  _endpointOnCurrentDevice;
    bool  _hasConnected;
    bool  _hasEnded;
    bool  _hostedOnCurrentDevice;
    bool  _onHold;
    bool  _outgoing;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEndpointOnCurrentDevice, nonatomic) bool endpointOnCurrentDevice;
@property (nonatomic) bool hasConnected;
@property (nonatomic) bool hasEnded;
@property (readonly) unsigned long long hash;
@property (getter=isHostedOnCurrentDevice, nonatomic) bool hostedOnCurrentDevice;
@property (getter=isOnHold, nonatomic) bool onHold;
@property (getter=isOutgoing, nonatomic) bool outgoing;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConnected;
- (bool)hasEnded;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEndpointOnCurrentDevice;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCall:(id)arg1;
- (bool)isHostedOnCurrentDevice;
- (bool)isOnHold;
- (bool)isOutgoing;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setEndpointOnCurrentDevice:(bool)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHostedOnCurrentDevice:(bool)arg1;
- (void)setOnHold:(bool)arg1;
- (void)setOutgoing:(bool)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
