/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUserNotification : NSObject {
    NSString * _cancelButton;
    NSString * _defaultButton;
    NSString * _message;
    struct __CFUserNotification { } * _notification;
    NSString * _otherButton;
    id /* block */  _responseHandler;
    NSString * _title;
}

@property (nonatomic, copy) NSString *cancelButton;
@property (nonatomic, copy) NSString *defaultButton;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) struct __CFUserNotification { }*notification;
@property (nonatomic, copy) NSString *otherButton;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_handleResponse:(unsigned long long)arg1;
- (id)cancelButton;
- (id)defaultButton;
- (id)message;
- (struct __CFUserNotification { }*)notification;
- (id)otherButton;
- (void)presentWithResponseHandler:(id /* block */)arg1;
- (id /* block */)responseHandler;
- (void)setCancelButton:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNotification:(struct __CFUserNotification { }*)arg1;
- (void)setOtherButton:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
