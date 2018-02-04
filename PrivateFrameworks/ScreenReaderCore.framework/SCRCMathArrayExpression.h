/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathArrayExpression : SCRCMathExpression {
    NSArray * _children;
}

@property (nonatomic, readonly) NSArray *mathMLAttributes;
@property (nonatomic, readonly) NSString *mathMLTag;

- (void).cxx_destruct;
- (id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4;
- (id)children;
- (id)description;
- (bool)hasSimpleArrayOfChildren;
- (id)initWithDictionary:(id)arg1;
- (id)localizablePrefixForChildAtIndex:(unsigned long long)arg1;
- (id)localizableSuffixForChildAtIndex:(unsigned long long)arg1;
- (id)mathMLAttributes;
- (id)mathMLString;
- (id)mathMLTag;
- (id)prefixForChildAtIndex:(unsigned long long)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)subExpressions;
- (id)suffixForChildAtIndex:(unsigned long long)arg1;

@end
