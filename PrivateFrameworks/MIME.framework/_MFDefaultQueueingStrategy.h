/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface _MFDefaultQueueingStrategy : NSObject <MFQueueingStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (id)descriptionType;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;

@end
