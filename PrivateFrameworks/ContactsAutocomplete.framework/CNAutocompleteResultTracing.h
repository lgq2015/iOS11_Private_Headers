/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteResultTracing : NSObject {
    unsigned long long  _countOfContactsResults;
    unsigned long long  _countOfRecentsResults;
    unsigned long long  _countOfServerResults;
    double  _localLatency;
    double  _serverLatency;
    double  _startTime;
    bool  _waitingForContactsResults;
    bool  _waitingForRecentsResults;
    bool  _waitingForServerResults;
}

@property unsigned long long countOfContactsResults;
@property unsigned long long countOfRecentsResults;
@property unsigned long long countOfServerResults;

+ (id)resultTracer;

- (unsigned long long)countOfContactsResults;
- (unsigned long long)countOfRecentsResults;
- (unsigned long long)countOfServerResults;
- (void)expectContactsResults:(bool)arg1;
- (void)expectRecentsResults:(bool)arg1;
- (void)expectServerResults:(bool)arg1;
- (id)init;
- (void)logLocalLatencyIfReady;
- (void)logServerLatency;
- (void)sendLocalResultsTracer;
- (void)sendMessageTracers;
- (void)sendMessageTracersIfReady;
- (void)sendServerResultsTracer;
- (void)setCountOfContactsResults:(unsigned long long)arg1;
- (void)setCountOfRecentsResults:(unsigned long long)arg1;
- (void)setCountOfServerResults:(unsigned long long)arg1;

@end
