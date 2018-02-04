/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivity : NSObject {
    NSSet * _activityKeywords;
    NSString * _activitySubtitle;
    NSString * _activityTitle;
    unsigned long long  _type;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSSet *activityKeywords;
@property (nonatomic, retain) NSString *activitySubtitle;
@property (nonatomic, retain) NSString *activityTitle;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long version;

+ (double)_doubleFromDictionary:(id)arg1 key:(id)arg2 error:(bool*)arg3;
+ (long long)_integerFromDictionary:(id)arg1 key:(id)arg2 error:(bool*)arg3;
+ (id)_stringFromDictionary:(id)arg1 key:(id)arg2 error:(bool*)arg3;
+ (unsigned long long)_typeFromDictionary:(id)arg1;
+ (unsigned long long)_unsignedIntegerFromDictionary:(id)arg1 key:(id)arg2 error:(bool*)arg3;
+ (id)activityForActivity:(id)arg1;
+ (id)activityForDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)activityKeywords;
- (id)activitySubtitle;
- (id)activityTitle;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (void)setActivityKeywords:(id)arg1;
- (void)setActivitySubtitle:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)updateActivity:(id)arg1;
- (unsigned long long)version;

@end
