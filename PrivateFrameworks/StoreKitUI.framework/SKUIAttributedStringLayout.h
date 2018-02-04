/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout> {
    NSAttributedString * _attributedString;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundingSize;
    NSStringDrawingContext * _context;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsetsForShadow;
    NSShadow * _shadow;
    double  _topInset;
    bool  _usesTallCharacterSet;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } boundingSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsetsForShadow;
@property (nonatomic, readonly) double firstBaselineOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfLines;
@property (nonatomic, readonly) NSShadow *shadow;
@property (nonatomic, readonly) NSStringDrawingContext *stringDrawingContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topInset;
@property (nonatomic, readonly) bool usesTallCharacterSet;

- (void).cxx_destruct;
- (id)attributedString;
- (double)baselineOffset;
- (struct CGSize { double x1; double x2; })boundingSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForShadow;
- (double)firstBaselineOffset;
- (id)initWithLayoutRequest:(id)arg1;
- (long long)numberOfLines;
- (id)shadow;
- (id)stringDrawingContext;
- (double)topInset;
- (bool)usesTallCharacterSet;

@end
