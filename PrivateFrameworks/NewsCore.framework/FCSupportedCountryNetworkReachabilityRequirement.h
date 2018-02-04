/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSupportedCountryNetworkReachabilityRequirement : NSObject <FCNetworkReachabilityRequirement> {
    bool  _satisfied;
    <FCNetworkReachabilityRequirementObserving> * observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <FCNetworkReachabilityRequirementObserving> *observer;
@property (nonatomic, readonly) long long offlineReason;
@property (getter=isSatisfied, nonatomic) bool satisfied;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_update;
- (id)init;
- (bool)isSatisfied;
- (id)observer;
- (long long)offlineReason;
- (void)setObserver:(id)arg1;
- (void)setSatisfied:(bool)arg1;

@end
