/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputManagerClientRequest : NSObject {
    unsigned long long  _errorCount;
    NSInvocation * _invocation;
}

@property (nonatomic) unsigned long long errorCount;
@property (nonatomic, readonly) NSInvocation *invocation;

+ (id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(bool)arg2;

- (void)dealloc;
- (unsigned long long)errorCount;
- (id)initWithInvocation:(id)arg1;
- (id)invocation;
- (void)setErrorCount:(unsigned long long)arg1;

@end
