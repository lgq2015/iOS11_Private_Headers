/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSUserNotificationOperation : NSOperation {
    NSString * _alternateButtonTitle;
    NSString * _defaultButtonTitle;
    NSURL * _iconURL;
    NSString * _message;
    struct __CFUserNotification { } * _notification;
    unsigned long long  _response;
    NSString * _title;
    int (* _userNotificationCancelProc;
    int (* _userNotificationCreateProc;
    int (* _userNotificationReceiveResponseProc;
}

@property (nonatomic, copy) NSString *alternateButtonTitle;
@property (nonatomic, copy) NSString *defaultButtonTitle;
@property (nonatomic, copy) NSURL *iconURL;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) unsigned long long response;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int (*userNotificationCancelProc;
@property (nonatomic) int (*userNotificationCreateProc;
@property (nonatomic) int (*userNotificationReceiveResponseProc;

- (void).cxx_destruct;
- (id)alternateButtonTitle;
- (void)cancel;
- (id)defaultButtonTitle;
- (id)iconURL;
- (id)init;
- (void)main;
- (id)message;
- (unsigned long long)response;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setResponse:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserNotificationCancelProc:(int (*)arg1;
- (void)setUserNotificationCreateProc:(int (*)arg1;
- (void)setUserNotificationReceiveResponseProc:(int (*)arg1;
- (id)title;
- (int (*)userNotificationCancelProc;
- (int (*)userNotificationCreateProc;
- (int (*)userNotificationReceiveResponseProc;

@end
