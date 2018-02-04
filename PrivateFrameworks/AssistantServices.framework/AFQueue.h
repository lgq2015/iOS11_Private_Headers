/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFQueue : NSObject <NSFastEnumeration> {
    <AFQueueDelegate> * _delegate;
    NSMutableArray * _objects;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic) <AFQueueDelegate> *delegate;
@property (nonatomic, readonly) id frontObject;
@property (getter=_objects, nonatomic, readonly) NSMutableArray *objects;

- (void).cxx_destruct;
- (id)_objects;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)delegate;
- (id)dequeueAllObjects;
- (id)dequeueObject;
- (id)description;
- (void)enqueueObject:(id)arg1;
- (void)enqueueObjects:(id)arg1;
- (id)frontObject;
- (id)init;
- (id)objectAtIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end
