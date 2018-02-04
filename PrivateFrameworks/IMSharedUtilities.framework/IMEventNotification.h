/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMEventNotification : IMDoubleLinkedListNode {
    id /* block */  _eventNotificationBlock;
    id /* block */  _eventNotificationWithSenderBlock;
    id  _sender;
    id  _target;
}

@property (copy) id /* block */ eventNotificationBlock;
@property (copy) id /* block */ eventNotificationWithSenderBlock;
@property id sender;
@property id target;

+ (id)eventNotification:(id)arg1;
+ (id)eventNotification:(id)arg1 eventNotificationBlock:(id /* block */)arg2;
+ (id)eventNotification:(id)arg1 sender:(id)arg2 eventNotificationBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)cache;
- (void)cancel;
- (id /* block */)eventNotificationBlock;
- (id /* block */)eventNotificationWithSenderBlock;
- (bool)invoke;
- (id)sender;
- (void)setEventNotificationBlock:(id /* block */)arg1;
- (void)setEventNotificationWithSenderBlock:(id /* block */)arg1;
- (void)setSender:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (bool)wasCancelled;

@end
