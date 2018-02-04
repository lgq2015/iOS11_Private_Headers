/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFPriorityQueueStrategy : NSObject <MFQueueingStrategy> {
    id /* block */  _comparator;
}

@property (nonatomic, readonly) id /* block */ comparator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)_indexForObject:(id)arg1 buffer:(id)arg2;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (id /* block */)comparator;
- (void)dealloc;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (id)descriptionType;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithComparator:(id /* block */)arg1;

@end
