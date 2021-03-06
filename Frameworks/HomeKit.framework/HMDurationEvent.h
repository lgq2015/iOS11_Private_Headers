/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMDurationEvent : HMTimeEvent <NSCopying, NSMutableCopying, NSSecureCoding> {
    double  _duration;
}

@property (nonatomic) double duration;

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateDuration:(double)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 duration:(double)arg2;
- (id)initWithDuration:(double)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDuration:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)updateDuration:(double)arg1 completionHandler:(id /* block */)arg2;

@end
