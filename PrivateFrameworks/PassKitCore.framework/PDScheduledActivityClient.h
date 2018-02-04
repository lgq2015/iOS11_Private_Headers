/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDScheduledActivityClient : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _activityQueue;
    NSMutableDictionary * _activityRegistrations;
    <PDScheduledActivityClient> * _clientInstance;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *activityQueue;
@property (nonatomic, retain) NSMutableDictionary *activityRegistrations;
@property (nonatomic) <PDScheduledActivityClient> *clientInstance;
@property (nonatomic, readonly) bool isValid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityQueue;
- (id)activityRegistrations;
- (id)clientInstance;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientInstance:(id)arg1 activityQueue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (void)setActivityQueue:(id)arg1;
- (void)setActivityRegistrations:(id)arg1;
- (void)setClientInstance:(id)arg1;

@end
