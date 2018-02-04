/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint> {
    NSArray * _peopleIdentifiers;
    NSDate * _timestamp;
    NSString * _title;
    bool  _userIsSender;
    bool  _userIsThreadInitiator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *peopleIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool userIsSender;
@property (nonatomic) bool userIsThreadInitiator;

- (void).cxx_destruct;
- (id)peopleIdentifiers;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserIsSender:(bool)arg1;
- (void)setUserIsThreadInitiator:(bool)arg1;
- (id)timestamp;
- (id)title;
- (bool)userIsSender;
- (bool)userIsThreadInitiator;

@end
