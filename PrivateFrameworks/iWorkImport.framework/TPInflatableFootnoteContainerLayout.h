/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPInflatableFootnoteContainerLayout : TPFootnoteContainerLayout {
    bool  _inflated;
}

- (id)computeLayoutGeometry;
- (void)setNeedsInflation;
- (void)validate;

@end
