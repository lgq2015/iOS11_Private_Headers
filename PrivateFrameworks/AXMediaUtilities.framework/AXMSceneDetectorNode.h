/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMSceneDetectorNode : AXMEvaluationNode

+ (bool)isSupported;
+ (id)possibleSceneClassifications;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (bool)requiresVisionFramework;

@end
