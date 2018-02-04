/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFBoundedQueueStrategy : NSObject <MFQueueingStrategy> {
    unsigned long long  _capacity;
    id /* block */  _overflowHandler;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ overflowHandler;
@property (readonly) Class superclass;

- (unsigned long long)capacity;
- (void)dealloc;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (id)descriptionType;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(id /* block */)arg2;
- (id /* block */)overflowHandler;

@end
