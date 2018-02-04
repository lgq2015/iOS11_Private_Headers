/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXAutocompleteDelegate : NSObject <CNAutocompleteFetchDelegate> {
    CNAutocompleteStore * _autocompleteStore;
    NSMutableSet * _contextsInProgress;
    NSCache * _fetchToContextMap;
    NSCache * _resultCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)clearCaches;
- (id)convertAutocompleteResultToContact:(id)arg1;
- (id)init;
- (id)lookupCachedContactsWithNamePrefix:(id)arg1 recipients:(id)arg2;
- (id)queryForPrefix:(id)arg1 recipients:(id)arg2;

@end
