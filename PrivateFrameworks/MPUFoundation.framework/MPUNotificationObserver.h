/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUNotificationObserver : NSObject {
    id  _notificationObservationToken;
}

@property (nonatomic, retain) id notificationObservationToken;

+ (id)observerWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(id /* block */)arg4;
- (id)notificationObservationToken;
- (void)setNotificationObservationToken:(id)arg1;

@end
