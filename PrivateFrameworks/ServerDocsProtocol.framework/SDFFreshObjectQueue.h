/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFFreshObjectQueue : NSObject {
    unsigned long long  _expired;
    NSObject<OS_dispatch_source> * _flusher;
    double  _lifetime;
    NSMutableArray * _queue;
}

- (void).cxx_destruct;
- (void)_addEntry:(id)arg1;
- (void)_flushOldObjects;
- (id)_objectAtIndex:(unsigned long long)arg1 metadata:(id*)arg2 date:(id*)arg3;
- (void)_renewFlusher;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 andMetadata:(id)arg2;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)debugDescription;
- (id)description;
- (unsigned long long)expiredObjectsCount;
- (void)flushOldObjects;
- (id)initWithObjectLifetime:(double)arg1;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 metadata:(id*)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 metadata:(id*)arg2 date:(id*)arg3;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;

@end
