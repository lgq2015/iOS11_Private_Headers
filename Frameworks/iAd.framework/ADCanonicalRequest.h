/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCanonicalRequest : NSObject {
    bool  _didLeaveGroup;
    NSObject<OS_dispatch_group> * _signingGroup;
    NSObject<OS_dispatch_queue> * _signingQueue;
}

@property (nonatomic) bool didLeaveGroup;
@property (nonatomic) NSObject<OS_dispatch_group> *signingGroup;
@property (nonatomic) NSObject<OS_dispatch_queue> *signingQueue;

+ (id)sharedInstance;

- (id)canonicalRequestForRequest:(id)arg1;
- (bool)didLeaveGroup;
- (id)init;
- (void)setDidLeaveGroup:(bool)arg1;
- (void)setSigningGroup:(id)arg1;
- (void)setSigningQueue:(id)arg1;
- (id)signingGroup;
- (id)signingQueue;

@end
