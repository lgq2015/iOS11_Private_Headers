/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsEventRecord : NSObject <NSSecureCoding> {
    NSDate * _dateCreated;
    AFAnalyticsEvent * _event;
    NSString * _streamUID;
}

@property (nonatomic, readonly, copy) NSDate *dateCreated;
@property (nonatomic, readonly, copy) AFAnalyticsEvent *event;
@property (nonatomic, readonly, copy) NSString *streamUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateCreated;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 streamUID:(id)arg2 dateCreated:(id)arg3;
- (id)streamUID;

@end
