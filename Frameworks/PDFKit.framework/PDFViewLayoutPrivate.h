/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFViewLayoutPrivate : NSObject {
    long long  cachedContinuousSizeDisplayDirection;
    id  delegate;
    bool  delegateKnowsDisplayAsBook;
    bool  delegateKnowsDisplayBox;
    bool  delegateKnowsDisplayMode;
    bool  delegateKnowsDisplayRTL;
    bool  delegateKnowsDisplaysDirection;
    bool  delegateKnowsIsUsingPageViewController;
    bool  delegateKnowsMargins;
    PDFDocument * document;
    unsigned long long  pageCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * pageLayoutBounds;
    NSLock * pageLayoutLock;
    struct CGSize { 
        double width; 
        double height; 
    }  singlePageContinuousSize;
    struct CGSize { 
        double width; 
        double height; 
    }  twoUpContinousSize;
}

- (void).cxx_destruct;

@end
