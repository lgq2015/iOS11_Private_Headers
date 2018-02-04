/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfHyperlinkController : TSAPdfHyperlinkController {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCanvasRect;
    long long  mCurrentSlideNumber;
    NSArray * mSlides;
}

@property (nonatomic) long long currentSlideNumber;

- (void)addHyperlinksForReps:(id)arg1 targetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvasRect;
- (id)currentSlideName;
- (long long)currentSlideNumber;
- (void)dealloc;
- (id)destinationFromUrl:(id)arg1;
- (long long)getFirstNonHiddenIndex:(unsigned long long)arg1 delta:(long long)arg2;
- (bool)ignoreUrl:(id)arg1;
- (id)initWithShow:(id)arg1;
- (bool)isDestination:(id)arg1;
- (id)nameForSlide:(id)arg1;
- (id)nameFromIndex:(unsigned long long)arg1;
- (void)setCurrentSlideNumber:(long long)arg1;

@end
