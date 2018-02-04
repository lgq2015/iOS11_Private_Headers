/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNWeakProxy : NSProxy {
    Class  _targetClass;
    CNWeakReference * _weakReference;
}

+ (id)weakProxyWithObject:(id)arg1;

- (Class)class;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
