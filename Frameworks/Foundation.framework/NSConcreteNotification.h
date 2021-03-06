/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteNotification : NSNotification {
    bool  dyingObject;
    NSString * name;
    id  object;
    NSDictionary * userInfo;
}

+ (id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (void)dealloc;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)name;
- (id)object;
- (void)recycle;
- (id)userInfo;

@end
