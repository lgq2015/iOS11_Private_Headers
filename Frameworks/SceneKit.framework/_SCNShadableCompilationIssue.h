/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface _SCNShadableCompilationIssue : NSObject {
    NSString * _effectiveModifier;
    NSString * _entryPoint;
    long long  _line;
    NSString * _message;
    <SCNShadable> * _shadable;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *effectiveModifier;
@property (nonatomic, readonly) NSString *entryPoint;
@property (nonatomic, readonly) long long line;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) <SCNShadable> *shadable;
@property (nonatomic, readonly) unsigned long long type;

+ (id)issueWithShadable:(id)arg1 entryPoint:(id)arg2 effectiveModifier:(id)arg3 message:(id)arg4 line:(long long)arg5 type:(unsigned long long)arg6;

- (void)dealloc;
- (id)effectiveModifier;
- (id)entryPoint;
- (long long)line;
- (id)message;
- (id)shadable;
- (unsigned long long)type;

@end
