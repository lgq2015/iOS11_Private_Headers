/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProtocolChecker : NSProxy

@property (readonly) Protocol *protocol;
@property (readonly, retain) NSObject *target;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2;

- (const char *)_localClassNameForClass;
- (bool)conformsToProtocol:(id)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (struct objc_method_description { SEL x1; char *x2; }*)methodDescriptionForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)protocol;
- (bool)respondsToSelector:(SEL)arg1;
- (id)target;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)_imMethodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1;

@end
