/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTimelineEntry : NSObject <CLKTimelineEntry, NSCopying, NSSecureCoding> {
    CLKComplicationTemplate * _complicationTemplate;
    NSDate * _date;
    bool  _finalized;
    NSString * _timelineAnimationGroup;
}

@property (nonatomic, copy) CLKComplicationTemplate *complicationTemplate;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timelineAnimationGroup;

+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2;
+ (id)entryWithDate:(id)arg1 complicationTemplate:(id)arg2 timelineAnimationGroup:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complicationTemplate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)finalizedCopy;
- (id)initWithCoder:(id)arg1;
- (void)setComplicationTemplate:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setTimelineAnimationGroup:(id)arg1;
- (id)timelineAnimationGroup;
- (void)validate;
- (void)validateComplicationFamily:(long long)arg1;

@end
