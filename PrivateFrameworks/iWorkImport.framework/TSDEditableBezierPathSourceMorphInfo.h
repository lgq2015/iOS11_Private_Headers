/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDEditableBezierPathSourceMorphInfo : NSObject {
    TSDEditableBezierPathSource * mOriginal;
    TSUPointerKeyDictionary * mOriginalNodeIndexMapping;
    TSDEditableBezierPathSource * mSmoothOriginal;
}

@property (nonatomic, retain) TSDEditableBezierPathSource *original;
@property (nonatomic, retain) TSDEditableBezierPathSource *smoothOriginal;

- (void)dealloc;
- (id)initWithEditableBezierPathSource:(id)arg1;
- (id)original;
- (id)originalNodeForNode:(id)arg1;
- (unsigned long long)originalNodeIndexForNode:(id)arg1;
- (id)originalSmoothNodeForNode:(id)arg1;
- (unsigned long long)originalSubpathIndexForNode:(id)arg1;
- (void)setOriginal:(id)arg1;
- (void)setSmoothOriginal:(id)arg1;
- (id)smoothOriginal;

@end
