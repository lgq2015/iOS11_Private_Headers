/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADOperationProxy : NSObject {
    ClientConnection * _conn;
    NSMutableDictionary * _operationGroups;
}

+ (Class)_operationGroupClassFromSelector:(SEL)arg1;
+ (id)allOperationGroupClasses;
+ (Class)operationProxyClassForClientWithConnection:(id)arg1;

- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(int)arg3;
- (id)_copyReplyBlockFromInvocation:(id)arg1;
- (void)_emptyMethod;
- (id)_operationGroupForClass:(Class)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithClientConnection:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
