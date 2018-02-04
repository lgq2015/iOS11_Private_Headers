/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTransitWalkingLegInstruction : MNTransitInstruction {
    GEOComposedWalkingRouteLeg * _walkingLeg;
}

@property (nonatomic, readonly) GEOComposedWalkingRouteLeg *walkingLeg;

+ (id)instructionForWalkingLeg:(id)arg1 context:(long long)arg2;

- (void).cxx_destruct;
- (id)initWithWalkingLeg:(id)arg1 context:(long long)arg2;
- (id)instructionSet;
- (struct NSDictionary { Class x1; }*)overridenInstructionsMapping;
- (id)walkingLeg;

@end
