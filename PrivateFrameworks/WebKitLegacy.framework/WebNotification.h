/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNotification : NSObject {
    WebNotificationPrivate * _private;
}

- (id)body;
- (void)dealloc;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)iconURL;
- (id)init;
- (id)lang;
- (unsigned long long)notificationID;
- (id)origin;
- (id)tag;
- (id)title;

@end
