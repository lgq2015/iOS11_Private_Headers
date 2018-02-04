/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTransitStepInstruction : MNTransitInstruction {
    struct NSDictionary { Class x1; } * _overridenInstructionsMapping;
    GEOComposedRouteStep * _step;
}

@property (nonatomic, readonly) NSDictionary *overridenInstructionsMapping;
@property (nonatomic, readonly) GEOComposedRouteStep *step;

+ (id)instructionForStep:(id)arg1 context:(long long)arg2;
+ (id)instructionForStep:(id)arg1 overrides:(struct NSDictionary { Class x1; }*)arg2 context:(long long)arg3;

- (void).cxx_destruct;
- (id)initWithStep:(id)arg1 overrides:(struct NSDictionary { Class x1; }*)arg2 context:(long long)arg3;
- (id)instructionSet;
- (struct NSDictionary { Class x1; }*)overridenInstructionsMapping;
- (id)step;

@end
