/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXColumnStack : NSObject {
    NSArray * _columnStack;
}

@property (nonatomic, readonly) NSArray *columnStack;

- (void).cxx_destruct;
- (void)addComponentBlueprint:(id)arg1;
- (id)allComponentsAfterComponent:(id)arg1;
- (id)allComponentsBeforeComponent:(id)arg1;
- (id)columnStack;
- (id)componentsAfterComponent:(id)arg1;
- (id)componentsBeforeComponent:(id)arg1;
- (id)description;
- (id)initWithNumberOfColumns:(unsigned long long)arg1;
- (unsigned long long)rangeInBounds:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
