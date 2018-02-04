/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTTimer : NSObject <MTDictionarySerializable, MTDiffable, MTScheduleable, NAEquatable, NSCopying, NSMutableCopying, NSSecureCoding> {
    id /* block */  _currentDateProvider;
    NSDate * _dismissedDate;
    double  _duration;
    <MTTimerTime> * _fireTime;
    NSDate * _firedDate;
    NSDate * _lastModifiedDate;
    MTSound * _sound;
    unsigned long long  _state;
    NSUUID * _timerID;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *dismissedDate;
@property (nonatomic, readonly) NSString *displayTitle;
@property (nonatomic) double duration;
@property (nonatomic, copy) <MTTimerTime> *fireTime;
@property (nonatomic, copy) NSDate *firedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, copy) MTSound *sound;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *timerID;
@property (nonatomic, readonly) NSString *timerIDString;
@property (nonatomic, readonly) NSURL *timerURL;
@property (nonatomic, copy) NSString *title;

+ (id)_timerTimeForState:(unsigned long long)arg1 remainingTime:(double)arg2 currentDateProvider:(id /* block */)arg3;
+ (id)descriptionForState:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_copyStateOntoTimer:(id)arg1;
- (id)_initForCopy;
- (bool)_isEqualToTimer:(id)arg1 checkLastModified:(bool)arg2;
- (void)_setDuration:(double)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)currentDateProvider;
- (id)description;
- (id)dismissedDate;
- (id)displayTitle;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fireTime;
- (id)firedDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 duration:(double)arg2;
- (id)initWithState:(unsigned long long)arg1 duration:(double)arg2 currentDateProvider:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringLastModifiedDate:(id)arg1;
- (bool)isEqualToTimer:(id)arg1;
- (id)keyForIdentifier;
- (id)lastModifiedDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nextTrigger;
- (id)nextTriggerAfterDate:(id)arg1;
- (double)remainingTime;
- (void)setCurrentDateProvider:(id /* block */)arg1;
- (void)setDismissedDate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFireTime:(id)arg1;
- (void)setFiredDate:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldBeScheduled;
- (id)sound;
- (unsigned long long)state;
- (id)timerByRestarting;
- (id)timerByUpdatingWithState:(unsigned long long)arg1;
- (id)timerID;
- (id)timerIDString;
- (id)timerURL;
- (id)title;
- (id)upcomingTriggersAfterDate:(id)arg1;

@end
