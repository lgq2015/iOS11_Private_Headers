/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSignificantTimeEvent : HMTimeEvent <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDateComponents * _offset;
    NSString * _significantEvent;
}

@property (nonatomic, retain) NSDateComponents *offset;
@property (nonatomic, retain) NSString *significantEvent;

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_update:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateOffset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3;
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)offset;
- (void)setOffset:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (id)significantEvent;
- (void)updateOffset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(id /* block */)arg2;

@end
