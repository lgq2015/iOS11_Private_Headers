/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUISound : NSObject {
    TLAlertConfiguration * _alertConfiguration;
    long long  _alertType;
    id /* block */  _completionBlock;
    long long  _eventType;
    unsigned int  _resolvedSystemSoundID;
    NSString * _songPath;
    unsigned long long  _soundBehavior;
    long long  _soundType;
    unsigned int  _systemSoundID;
    NSDictionary * _vibrationPattern;
}

@property (setter=_setResolvedSoundID:, nonatomic) unsigned int _resolvedSystemSoundID;
@property (nonatomic, copy) TLAlertConfiguration *alertConfiguration;
@property (nonatomic) long long alertType;
@property (nonatomic) long long eventType;
@property (nonatomic, copy) NSString *songPath;
@property (nonatomic) unsigned long long soundBehavior;
@property (nonatomic) long long soundType;
@property (nonatomic) unsigned int systemSoundID;
@property (nonatomic, retain) NSDictionary *vibrationPattern;

+ (id)soundWithFeedbackEventType:(long long)arg1;

- (void).cxx_destruct;
- (id /* block */)_completionBlock;
- (unsigned int)_resolvedSystemSoundID;
- (void)_setCompletionBlock:(id /* block */)arg1;
- (void)_setResolvedSoundID:(unsigned int)arg1;
- (id)alertConfiguration;
- (long long)alertType;
- (id)description;
- (long long)eventType;
- (id)initWithFeedbackEventType:(long long)arg1;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (id)initWithToneAlertConfiguration:(id)arg1;
- (bool)isPlaying;
- (bool)playInEvironments:(long long)arg1 completion:(id /* block */)arg2;
- (void)setAlertConfiguration:(id)arg1;
- (void)setAlertType:(long long)arg1;
- (void)setEventType:(long long)arg1;
- (void)setSongPath:(id)arg1;
- (void)setSoundBehavior:(unsigned long long)arg1;
- (void)setSoundType:(long long)arg1;
- (void)setSystemSoundID:(unsigned int)arg1;
- (void)setVibrationPattern:(id)arg1;
- (id)songPath;
- (unsigned long long)soundBehavior;
- (long long)soundType;
- (void)stop;
- (unsigned int)systemSoundID;
- (id)vibrationPattern;

@end
