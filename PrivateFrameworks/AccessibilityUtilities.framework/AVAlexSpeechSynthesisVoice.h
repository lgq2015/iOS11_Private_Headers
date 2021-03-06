/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AVAlexSpeechSynthesisVoice : AVSpeechSynthesisVoice <AXAlternativeSpeechSynthesisVoice>

- (id)identifier;
- (id)language;
- (id)name;
- (id)nameWithoutQuality;
- (long long)quality;

@end
