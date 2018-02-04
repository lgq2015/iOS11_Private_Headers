/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioRuleCollection : NSObject <NSCopying> {
    int  _aacBlockSize;
    bool  _allowAudioRecording;
    bool  _allowAudioSwitching;
    int  _deviceRole;
    NSMutableArray * _rules;
    NSMutableArray * _secondaryPayloads;
}

@property (nonatomic) int aacBlockSize;
@property (nonatomic) bool allowAudioRecording;
@property (nonatomic) bool allowAudioSwitching;
@property (nonatomic, readonly) NSArray *rules;
@property (nonatomic, readonly) NSArray *secondaryPayloads;

+ (int)getForcedPayload;

- (int)aacBlockSize;
- (void)addAudioPayload:(int)arg1 isSecondary:(bool)arg2 sbr:(bool)arg3;
- (void)addAudioRule:(id)arg1;
- (void)addAudioRules:(id)arg1;
- (bool)allowAudioRecording;
- (bool)allowAudioSwitching;
- (void)clearAudioRules;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initPrimaryPayload:(int)arg1 dtxPayload:(int)arg2 redPayload:(int)arg3 secondaryPayloads:(id)arg4 allowAudioSwitching:(bool)arg5 sbr:(bool)arg6 aacBlockSize:(int)arg7;
- (id)initWithPhoneContinuity:(bool)arg1 allowAudioSwitching:(bool)arg2 sbr:(bool)arg3 aacBlockSize:(int)arg4;
- (bool)isPayloadSupported:(int)arg1;
- (id)rules;
- (id)secondaryPayloads;
- (void)setAacBlockSize:(int)arg1;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAllowAudioSwitching:(bool)arg1;
- (void)setRules:(id)arg1;
- (void)setupAudioRulesWithSBR:(bool)arg1 isContinuity:(bool)arg2;

@end
