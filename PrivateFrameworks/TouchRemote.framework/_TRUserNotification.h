/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface _TRUserNotification : NSObject {
    int  _response;
    unsigned long long  _responseFlags;
    struct __CFUserNotification { } * _userNotification;
}

@property (nonatomic, readonly) struct __CFUserNotification { }*CFUserNotification;
@property (nonatomic, readonly) bool didAccept;
@property (nonatomic, readonly) int response;
@property (nonatomic, readonly) unsigned long long responseFlags;

+ (id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;
+ (id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 isTopMost:(bool)arg5 dismissOnUnlock:(bool)arg6;

- (struct __CFUserNotification { }*)CFUserNotification;
- (void)cancel;
- (void)dealloc;
- (bool)didAccept;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (int)response;
- (unsigned long long)responseFlags;
- (void)show;
- (id)textFieldValueAtIndex:(unsigned long long)arg1;

@end
