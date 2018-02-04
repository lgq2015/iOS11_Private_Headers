/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationTrustData : NSObject {
    FBApplicationInfo * _appInfo;
    bool  _hasFreeDeveloperProvisioningProfile;
    bool  _hasUniversalProvisioningProfile;
    bool  _isManaged;
    NSArray * _provisioningProfiles;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSArray *profiles;

- (void)_acceptApplicationSignatureIdentity;
- (id)_initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(bool)arg3;
- (void)_initializeProfiles:(id)arg1;
- (id)_workQueue_expirationDateForProvisioningProfile;
- (bool)_workQueue_signatureNeedsExplicitUserTrust;
- (void)acknowledgeTrust;
- (void)dealloc;
- (id)profiles;
- (unsigned long long)trustState;
- (unsigned long long)trustStateWithTrustRequiredReasons:(unsigned long long*)arg1;

@end
