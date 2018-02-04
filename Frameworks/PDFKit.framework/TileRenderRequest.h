/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface TileRenderRequest : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  matrix;
    PDFPage * page;
    PDFRenderingProperties * renderingProperties;
    bool  shouldAntiAlias;
    <PDFTilePoolDelegate> * target;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  tileFrame;
    double  zoomFactor;
}

- (void).cxx_destruct;

@end
