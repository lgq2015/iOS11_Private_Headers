/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXDiscoverySuggester : PEXContactSuggester {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _seenEvents;
    NSMutableSet * _seenNames;
    NSMutableSet * _seenRecipients;
}

- (void).cxx_destruct;
- (void)_addContacts:(id)arg1;
- (void)_discoveredEvent:(id)arg1 identifier:(id)arg2 store:(id)arg3;
- (void)_discoveredRecipient:(id)arg1;
- (void)clearCaches;
- (void)discoveredEvents:(id)arg1 store:(id)arg2;
- (void)discoveredRecipients:(id)arg1;
- (id)init;
- (void)waitForDiscoveriesToProcess;

@end
