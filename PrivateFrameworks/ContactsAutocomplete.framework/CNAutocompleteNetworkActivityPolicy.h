/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteNetworkActivityPolicy : NSObject <CNAutocompleteNetworkActivityPolicy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)policyWithNoDelay;
+ (id)policyWithThrottlingDelayForString:(id)arg1;

- (double)delayBeforeBeginningNetworkActivity;
- (bool)shouldSearchServers;

@end
