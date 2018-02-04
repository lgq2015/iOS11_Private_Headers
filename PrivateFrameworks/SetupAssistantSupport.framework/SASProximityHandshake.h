/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

@interface SASProximityHandshake : NSObject <NSSecureCoding> {
    bool  _hasPasscodeSet;
    long long  _platformType;
    int  _simplePasscodeType;
    int  _unlockType;
}

@property bool hasPasscodeSet;
@property long long platformType;
@property int simplePasscodeType;
@property int unlockType;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)hasPasscodeSet;
- (id)initWithCoder:(id)arg1;
- (void)loadInformation;
- (long long)platformType;
- (void)setHasPasscodeSet:(bool)arg1;
- (void)setPlatformType:(long long)arg1;
- (void)setSimplePasscodeType:(int)arg1;
- (void)setUnlockType:(int)arg1;
- (int)simplePasscodeType;
- (int)unlockType;

@end
