/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMetrics : NSObject <NSSecureCoding> {
    long long  _category;
    NSNumber * _duration;
    NSDictionary * _eventInfo;
    NSString * _originalCommandId;
}

@property (nonatomic) long long category;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, copy) NSDictionary *eventInfo;
@property (nonatomic, copy) NSString *originalCommandId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_roundDouble:(double)arg1 toSignificantDigits:(unsigned long long)arg2;
- (id)aceMetrics;
- (long long)category;
- (id)categoryString;
- (id)description;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)eventInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 duration:(id)arg3;
- (id)initWithOriginalCommandId:(id)arg1 category:(long long)arg2 eventInfo:(id)arg3 duration:(id)arg4;
- (id)originalCommandId;
- (void)setCategory:(long long)arg1;
- (void)setDuration:(id)arg1;
- (void)setEventInfo:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;

@end
