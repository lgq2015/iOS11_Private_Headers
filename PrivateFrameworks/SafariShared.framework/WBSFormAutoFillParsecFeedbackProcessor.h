/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor> {
    unsigned long long  _autoFillVersion;
    WBSCrowdsourcedFeedbackDomainNormalizer * _domainNormalizer;
    <WBSFormAutoFillFeedbackDomainPolicyProvider> * _domainPolicyProvider;
    <WBSParsecGlobalFeedbackDispatcher> * _globalFeedbackDispatcher;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <WBSFormAutoFillFeedbackDomainPolicyProvider> *domainPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_feedbackWithCorrectionSet:(id)arg1 includeOrigin:(bool)arg2;
- (void)_getFeedbackWithCorrectionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)domainPolicyProvider;
- (id)init;
- (id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3;
- (void)sendFeedbackWithCorrectionSet:(id)arg1;
- (void)setDomainPolicyProvider:(id)arg1;

@end