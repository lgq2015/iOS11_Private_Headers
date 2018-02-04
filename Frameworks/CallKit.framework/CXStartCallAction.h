/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXStartCallAction : CXCallAction <CXVideoAspectRatioDescriptor> {
    NSString * _contactIdentifier;
    NSDate * _dateStarted;
    bool  _emergency;
    CXHandle * _handle;
    struct CGSize { 
        double width; 
        double height; 
    }  _localLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _localPortraitAspectRatio;
    bool  _relay;
    bool  _retry;
    long long  _ttyType;
    bool  _upgrade;
    bool  _video;
    bool  _voicemail;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSDate *dateStarted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmergency, nonatomic) bool emergency;
@property (nonatomic, copy) CXHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } localPortraitAspectRatio;
@property (getter=isRelay, nonatomic) bool relay;
@property (getter=isRetry, nonatomic) bool retry;
@property (readonly) Class superclass;
@property (setter=setTTYType:, nonatomic) long long ttyType;
@property (getter=isUpgrade, nonatomic) bool upgrade;
@property (getter=isVideo, nonatomic) bool video;
@property (getter=isVoicemail, nonatomic) bool voicemail;

+ (bool)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)customDescription;
- (id)dateStarted;
- (void)encodeWithCoder:(id)arg1;
- (void)fulfill;
- (void)fulfillWithDateStarted:(id)arg1;
- (id)handle;
- (id)initWithCallUUID:(id)arg1 handle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEmergency;
- (bool)isRelay;
- (bool)isRetry;
- (bool)isUpgrade;
- (bool)isVideo;
- (bool)isVoicemail;
- (struct CGSize { double x1; double x2; })localLandscapeAspectRatio;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (void)setContactIdentifier:(id)arg1;
- (void)setDateStarted:(id)arg1;
- (void)setEmergency:(bool)arg1;
- (void)setHandle:(id)arg1;
- (void)setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRelay:(bool)arg1;
- (void)setRetry:(bool)arg1;
- (void)setTTYType:(long long)arg1;
- (void)setUpgrade:(bool)arg1;
- (void)setVideo:(bool)arg1;
- (void)setVoicemail:(bool)arg1;
- (long long)ttyType;
- (void)updateAsFulfilledWithDateStarted:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
