/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationActionRecord : NSObject {
    NSString * _actionType;
    bool  _authenticationRequired;
    bool  _destructive;
    bool  _foreground;
    NSString * _identifier;
    NSString * _textInputButtonTitle;
    NSArray * _textInputButtonTitleLocalizationArguments;
    NSString * _textInputButtonTitleLocalizationKey;
    NSString * _textInputPlaceholder;
    NSArray * _textInputPlaceholderLocalizationArguments;
    NSString * _textInputPlaceholderLocalizationKey;
    NSString * _title;
    NSArray * _titleLocalizationArguments;
    NSString * _titleLocalizationKey;
}

@property (nonatomic, copy) NSString *actionType;
@property (getter=isAuthenticationRequired, nonatomic) bool authenticationRequired;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (getter=isForeground, nonatomic) bool foreground;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *textInputButtonTitle;
@property (nonatomic, copy) NSArray *textInputButtonTitleLocalizationArguments;
@property (nonatomic, copy) NSString *textInputButtonTitleLocalizationKey;
@property (nonatomic, copy) NSString *textInputPlaceholder;
@property (nonatomic, copy) NSArray *textInputPlaceholderLocalizationArguments;
@property (nonatomic, copy) NSString *textInputPlaceholderLocalizationKey;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleLocalizationArguments;
@property (nonatomic, copy) NSString *titleLocalizationKey;

- (void).cxx_destruct;
- (id)actionType;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isAuthenticationRequired;
- (bool)isDestructive;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (void)setActionType:(id)arg1;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setForeground:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTextInputButtonTitle:(id)arg1;
- (void)setTextInputButtonTitleLocalizationArguments:(id)arg1;
- (void)setTextInputButtonTitleLocalizationKey:(id)arg1;
- (void)setTextInputPlaceholder:(id)arg1;
- (void)setTextInputPlaceholderLocalizationArguments:(id)arg1;
- (void)setTextInputPlaceholderLocalizationKey:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocalizationArguments:(id)arg1;
- (void)setTitleLocalizationKey:(id)arg1;
- (id)textInputButtonTitle;
- (id)textInputButtonTitleLocalizationArguments;
- (id)textInputButtonTitleLocalizationKey;
- (id)textInputPlaceholder;
- (id)textInputPlaceholderLocalizationArguments;
- (id)textInputPlaceholderLocalizationKey;
- (id)title;
- (id)titleLocalizationArguments;
- (id)titleLocalizationKey;

@end
