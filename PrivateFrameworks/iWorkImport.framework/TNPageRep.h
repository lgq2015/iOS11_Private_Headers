/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPageRep : TSWPPageRep {
    struct CGPath { } * _shadowPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _shadowPathRect;
}

- (void)dealloc;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isOpaque;
- (id)p_childRepForInfo:(id)arg1;
- (bool)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)p_repForHeaderLayout:(id)arg1;

@end
