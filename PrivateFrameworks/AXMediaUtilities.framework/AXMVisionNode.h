/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionNode : AXMEvaluationNode {
    unsigned long long  _recognitionOptions;
}

@property (nonatomic) unsigned long long recognitionOptions;

+ (bool)isSupported;
+ (id)title;

- (unsigned long long)recognitionOptions;
- (bool)requiresVisionFramework;
- (void)setRecognitionOptions:(unsigned long long)arg1;

@end
