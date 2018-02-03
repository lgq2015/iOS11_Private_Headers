/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebVisiblePosition : NSObject {
    struct WebObjectInternal { } * _internal;
}

@property (nonatomic) int affinity;

+ (id)_wrapVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;
+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;

- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; int x2; })_visiblePosition;
- (int)affinity;
- (bool)atAlphaNumericBoundaryInDirection:(int)arg1;
- (bool)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)directionIsDownstream:(int)arg1;
- (int)distanceFromPosition:(id)arg1;
- (id)enclosingRangeWithCorrectionIndicator;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id*)arg1;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (id)positionAtStartOrEndOfWord;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2 withAffinityDownstream:(bool)arg3;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (bool)requiresContextForWordBoundary;
- (void)setAffinity:(int)arg1;
- (int)textDirection;
- (bool)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;

@end