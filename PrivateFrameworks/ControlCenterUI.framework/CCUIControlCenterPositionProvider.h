/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIControlCenterPositionProvider : NSObject {
    struct CCUILayoutSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _layoutSize;
    NSArray * _packingRules;
    NSDictionary * _rectByIdentifier;
}

@property (nonatomic, readonly) struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; } layoutSize;
@property (nonatomic, readonly) struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; } maximumLayoutSize;

- (void).cxx_destruct;
- (id)_generateRectByIdentifierWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2 packingOrder:(unsigned long long)arg3 startPosition:(struct CCUILayoutPoint { unsigned long long x1; unsigned long long x2; })arg4 maximumSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg5 outputLayoutSize:(out struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; }*)arg6;
- (id)initWithPackingRules:(id)arg1;
- (struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })layoutRectForIdentifier:(id)arg1;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })layoutSize;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })maximumLayoutSize;
- (void)regenerateRectsWithOrderedIdentifiers:(id)arg1 orderedSizes:(id)arg2;

@end
