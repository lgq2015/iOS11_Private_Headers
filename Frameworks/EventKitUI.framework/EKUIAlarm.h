/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIAlarm : NSObject {
    EKAlarm * _alarm;
    bool  _isLeaveNowAlarm;
}

@property (nonatomic, readonly) EKAlarm *alarm;
@property (nonatomic, readonly) bool isLeaveNowAlarm;

- (void).cxx_destruct;
- (id)alarm;
- (id)description;
- (id)initLeaveNowAlarm;
- (id)initWithAlarm:(id)arg1;
- (bool)isEqualToUIAlarm:(id)arg1;
- (bool)isLeaveNowAlarm;
- (id)localizedDescriptionAllDay:(bool)arg1;

@end
