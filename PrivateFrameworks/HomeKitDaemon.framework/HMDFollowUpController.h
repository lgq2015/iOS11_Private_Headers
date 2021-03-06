/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDFollowUpController : HMFObject {
    FLFollowUpController * _followUpController;
}

@property (nonatomic, retain) FLFollowUpController *followUpController;

- (void).cxx_destruct;
- (void)clearFollowUpItems;
- (id)followUpController;
- (id)init;
- (void)setFollowUpController:(id)arg1;

@end
