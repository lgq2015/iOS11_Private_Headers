/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKEphemeralEventSequence : NSObject <CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence> {
    void queue;
}

@property (nonatomic, readonly) CKEntity *historyStartEvent;
@property (nonatomic, readonly) OS_dispatch_queue *queue;

+ (id)JOINER;
+ (id)identifierDateFormat;

- (id /* block */).cxx_destruct;
- (bool)appendEvent:(id)arg1;
- (id)eventsBetween:(id)arg1 and:(id)arg2;
- (id)eventsWithIdentifier:(id)arg1;
- (id)findEntityPreceding:(id)arg1 error:(id*)arg2;
- (id)first;
- (id)historyStartEvent;
- (id)init;
- (id)last;
- (void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)queue;
- (void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(id /* block */)arg2;

@end
