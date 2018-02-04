/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASActivityDataNotification : NSObject {
    ASFriend * _friend;
    HKSample * _sample;
}

@property (nonatomic, retain) ASFriend *friend;
@property (nonatomic, retain) HKSample *sample;

- (void).cxx_destruct;
- (id)friend;
- (id)sample;
- (void)setFriend:(id)arg1;
- (void)setSample:(id)arg1;

@end
