/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerFeedbackCommand : _MPCPlayerItemCommand <MPCPlayerFeedbackCommand> {
    unsigned int  _command;
    NSString * _localizedShortTitle;
    NSString * _localizedTitle;
    long long  _presentationStyle;
    bool  _value;
}

@property (nonatomic, readonly) unsigned int command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedShortTitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic) bool value;

- (void).cxx_destruct;
- (id)changeValue:(bool)arg1;
- (unsigned int)command;
- (id)initWithResponse:(id)arg1 mediaRemoteCommand:(unsigned int)arg2;
- (id)localizedShortTitle;
- (id)localizedTitle;
- (long long)presentationStyle;
- (void)setLocalizedShortTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
